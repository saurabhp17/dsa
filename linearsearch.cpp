#include<iostream>
using namespace std;
int search(int arr[], int n, int x)
	{
         int i;
         for (i = 0; i < n; i++)
 	 {       
	 if (arr[i] == x)
         {
	  cout<<"number is present at index "<<i<<endl;
	 }
	
	 
	}
int main()
{
	int n,x;
	cout<<"enter size of array ";
	cin>>n;
	int arr[n];
	cout<<"enter elements of array "<<endl;
	for(int i=0;i<n;i++)
	{cout<<"\t";
		cin>>arr[i];
		
	}
	cout<<"enter the number to find ";
	cin>>x;
	search(arr,n,x);
	return 0;
}
