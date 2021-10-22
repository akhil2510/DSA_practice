#include<iostream>
using namespace std;

int binarySearch(int a[],int left,int right,int x)
{
  while(left<=right)
  {
	int mid = left + (right-left)/2 ;
	if(a[mid]==x)
	 {
	 	return mid;
	 }
	else if(a[mid]<x)
	 {
	 	left= mid +1;
	 }
	 else  
	 {
	 	right=mid-1;
	 }
   }
   	    return -1;
}



int main()
{
  int num,left,right;
  int n,pos;
  int* a;
  cout<<"Enter size of array "<<endl;
  cin>>n;
  a = new int[n];
  cout<<"Enter Elements in Asending Order"<<endl;
  for(int i=0;i<n;i++)
   {
   	 cin>>a[i];
   }
   cout<<"Enter Elemnt to search"<<endl;
   cin>>num;
   
   pos= binarySearch(a,0,n,num);
    if(pos==-1)
	 {
	 	cout<<"Element Not found "<<endl;
	 }	
	 else
	 {
	 	cout<<"Element Found At position : "<<pos+1<<endl;
	 }	 
	return 0;
}



