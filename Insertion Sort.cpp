#include<iostream>

using namespace std;

void insertionSort(int myarr[])
 {
 	int j=0;
 	int key=0;
 	for(int i=1;i<5;i++)
 	 {
 	 	key=myarr[i];
 	 	j=i-1;
 	 	 while(j>=0 && myarr[j]>key)
 	 	  {
 	 	  	  myarr[j+1]=myarr[j];
 	 	  	  j=j-1;
		  }
		 myarr[j+1]= key;	
	  }
 }
int main()
{
 
	int arr[5];	
	 cout<<"Enter Elements "<<endl;
	 for(int i=0;i<5;i++)
	  {
	 	cin>>arr[i];
	  }
	 cout<<endl<<"Elemnts are "<<endl;
	 for(int i=0;i<5;i++)
       {
       	cout<<arr[i]<<" ";
       	
	   }
	   
	insertionSort(arr);
	
	cout<<endl<<"Sorted Elemnts are "<<endl;
	 for(int i=0;i<5;i++)
       {
       	cout<<arr[i]<<" ";
	   }
	return 0;
}




