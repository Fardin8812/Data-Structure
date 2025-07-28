#include<iostream>
using namespace std;
void Tower(int n,char A,char B,char C)
{
if(n==1)
{
cout<<"moving disk no. "<<n<<" from "<<A<<" to "<<C<<endl;
}
else{
Tower(n-1,A,C,B);
cout<<"moving disk no. "<<n<<" from "<<A<<" to "<<C<<endl;
Tower(n-1,B,A,C);
}
}
int main()
{
int n;
cout<<"enter no of disk:";
cin>>n;
Tower(n,'A','B','C');
return 0;
}
