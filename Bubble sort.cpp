#include<iostream>

using namespace std;

void  bubbleSort(int myarr[],int m)
{
	 int temp;
  for(int i=0;i<m;i++)
   {
   	for(int j=0;j<(m-j-1);j++)
   	 if(myarr[j]>myarr[j+1])
   	  {
   	        temp = myarr[j+1];
			myarr[j+1]=myarr[j];
			myarr[j]=temp;	
	  }
   }
}
int main()
{
	int n;
	int* arr;
	cout<<"Enter  size of Array "<<endl;
	cin>>n;
	arr= new int[n];
	
	cout<<"Enter Elements for Array "<<endl;
	for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 }
	 cout<<"Elements Are :"<<endl;
	 for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
	 bubbleSort(arr,n);
	 
	 cout<<"Sorted Array is "<<endl;
	 for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
	return 0;
}



