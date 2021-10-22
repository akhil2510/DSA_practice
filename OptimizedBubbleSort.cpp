#include<iostream>

using namespace std;
int n;
int *a;
void bubblesort(int a[]);
int main()
{
	cout<<"Enter size of Array "<<endl;
	cin>>n;
	
	a= new int[n];
	cout<<"Enter Array Elemnets"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Before Sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	bubblesort(a);
	cout<<"After Sorting"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void bubblesort(int a[])
{ 
    int round=0;
	
   	for(int i=0;i<n;i++)
   	{
   		round++;
   		int flag = false;
   		for(int j=0;j<n-i-1;j++)
   		{
   	      if(a[j]>a[j+1])
			 {
			   flag=true ;
			   int temp=a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp; 
			 }		
		}
	    if(flag==false)
	      break;
	}
	cout<<endl<<"Total rounds "<<round<<endl;	
}
