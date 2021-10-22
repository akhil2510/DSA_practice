#include<iostream>

using namespace std;

void Partition(int a,int s,int e)
{
  int pivot = arr[e];
  int pIndex= s;
  for(int i=s;i<e;i++)
   {
   	if(a[i]<pivot)
   	{
   	   int temp=a[i];
   	   a[i]=a[pIndex];
   	   a[pIndex]=temp;
   	   pIndex++;
	}   	
   }
   int temp=a[e];
   a[e]=a[pIndex];
   a[pIndex]=temp;
   
   return pIndex;
}



void QuickSort(int a,int s,int e)
{
  if(s<e)
  {
  	int p = Partition(a,s,e)
	QuickSort(arr,s,(p-1));
	QuickSort(arr,(p+1),e);
  }
}


int main()
{
	int size;
	int* arr;
	cout<<"Enter size of Array   "<<endl;
	cin>>size;
	arr=new int[size];
	cout<<"Enter Array Elements "<<endl;
	 for(int i=0;i<size;i++)
	  {
	  cin>>arr[i];	
	  }
	cout<<"Array Elements Are "<<endl;
	 for(int i=0;i<size;i++)
	  {
	  cout<<arr[i]<<" ";	
	  }
	 QuickSort(arr,s,(size-1));
	cout<<endl<<"After sorting Array Elements Are "<<endl; 
     for(int i=0;i<size;i++)
	  {
	  cout<<arr[i]<<" ";	
	  }
}
	
	
	
