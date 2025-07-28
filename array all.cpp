#include<iostream>
using namespace std;
int insertArr(int arr[],int pos,int item,int n)
{
int i;
n++;
for(int i=n-1;i>pos;i--)
{
arr[i]=arr[i-1];
}
arr[pos]=item;
return n;
}
int deleteArr(int arr[],int pos,int n)
{
for(int i=pos;i<n-1;i++)
{
arr[i]=arr[i+1];
}
n--;
return n;
}
void printArr(int arr[],int n)
{
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
}
int main()
{
int i,item,pos,n;
int arr[10]={0};
cout<<"enter the size:";
cin>>n;
cout<<"enter the value:";
for(int i=0;i<n;i++)
cin>>arr[i];
item=100;
pos=3;
n=insertArr(arr,pos,item,n);
printArr(arr,n);
n=deleteArr(arr,pos,n);
printArr(arr,n);
}
