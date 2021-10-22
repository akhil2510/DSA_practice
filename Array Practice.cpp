#include<iostream>

using namespace std;

int main()
{
  int *a;
  int n,k,temp;
  cout<<"Total number of elements in array "<<endl;
  cin>>n;
  a = new int[n];
  cout<<"Please Enter Array elements "<<endl;
   for(int i=0;i<n;i++)
	{
	  	cin>>a[i];
	} 
    for(int i=0;i<n;i++)   
	   	{
		  	  if(a[i+1]>a[i])
		  	   {
			     temp=a[i];
			     a[i]=a[i+1];		 	
			     a[i+1]=temp;
			   }  
       }
    cout<<"Enter value of K "<<endl;
    cin>>k;
    cout<<endl;
	cout<<"Kth highest number "<<a[k-2]<<endl;	   
}

