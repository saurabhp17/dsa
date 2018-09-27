#include<iostream>
using namespace std;

int main()
{
int frequency[1000],n,i,x;
cout<<"\n enter no. of elements ";
cin>>n;
for(i=0; i<1000;i++)
frequency[i]=0;
cout<<"\n enter data tobe sorted ";
for(i=0;i<n;i++)
{
cin>>x;
frequency[x]++;
}
cout<<"result is :";
for(i=0;i<=n;i++)
if(frequency[i]>0)
while(frequency[i]>0)
{
cout<<" "<<i;
frequency[i]--;
}
}
