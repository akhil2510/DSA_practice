#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int r)
{
   int i=l;
   int j=m+1;
   int k=l;
   int temp[5];
   while(i<=m && j<=r)
   {
   	if(a[i]<=a[j])
   	{
   		temp[k]=a[i];
   		i++;
   		k++;
	}
	else
	{
		temp[k]=a[j];
		j++;
		k++;
	}
   }
   while(i<=m)
   {
   	 temp[k]=a[i];
   	 i++;
   	 k++;
   }
   while(j<=r)
    {
   	 temp[k]=a[j];
   	 j++;
   	 k++;
    }
   	for(int s=l;s<=r;s++)
	{
		 a[s]=temp[s];
	}
	
}

void mergesort(int a[],int l,int r)
{
  if(l<r)
	{
		int m=(l+r)/2 ;
		
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
 
}


int main()
{
	int a[5];
	cout<<"Enter 5 elements "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Before sort "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	
	mergesort(a,0,4);
	
	cout<<endl<<"After sort "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
  return 0;
}



