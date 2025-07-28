#include<iostream>
using namespace std;
string substring(string text,int initial,int length)
{
    string sub="";
    int i;
    for(i=initial;i<initial+length;i++)
    {
        sub=sub+text[i];
    }
    return sub;
}
string insertion(string text,int pos,string n)
{
    string s1=substring(text,0,pos);
    string s2=substring(text,pos,text.size()-pos);
    return s1+n+s2;
}
string deletion(string text,int pos,int length)
{
    string sub1=substring(text,0,pos);
    string sub2=substring(text,pos+length,text.size()-(pos+length));
    return sub1+sub2;
}
int index(string text,string p)
{
    int index=-1;
    int i,j;
    for(i=0;i<=text.size()-p.size();i++)
    {
        for(j=0;j<p.size();j++)
        {
            if(text[i+j]!=p[j])
                break;
        }
        if(j==p.size())
            index=i;
    }
    return index;
}
string replace(string text,string p,string p1)
{
    int I=index(text,p);
    string D;
    if(I!=-1)
    {
    D=deletion(text,I,p.size());
    string nt=insertion(D,I,p1);
    return nt;
    }
else{
    return text;
}
}
string replaceall(string text,string p,string p1)
{
while(index(text,p)!=-1)
{
    text=replace(text,p,p1);
}
return text;
}
main()
{
string a=substring("EASTDELTA",4,5);
string b=insertion("EASTDELTA",4,"CSE");
string c=deletion("EASTDELTA",4,5);
int d=index("EASTDELTA","DELTA");
string e=replace("EASTDELTA","DELTA","CSE");
string f=replaceall("EASTDELTA","TDE","LTA");
string str;
cout<<"ENTER A SENTENCE:";
getline(cin,str);
cout<<"SUBSTRING:"<<a<<endl;
cout<<"INSERTION:"<<b<<endl;
cout<<"DELETION:"<<c<<endl;
cout<<"INDEX:"<<d<<endl;
cout<<"REPLACE:"<<e<<endl;
cout<<"REPLACEALL:"<<f<<endl;
}
