#include<iostream>
#include<string>

using namespace std;

void maxheap(int arr[],int n,int idx)
{
    int lc=2*idx+1;
    int rc=2*idx+2;
    int bidx=idx;
    if(lc<n && arr[bidx]<arr[lc])
    {
         bidx=lc;
    }
    if(rc<n && arr[bidx]<arr[rc])
    {
         bidx=rc;
    }
    if(idx!=bidx)
    {
        int temp=arr[idx];
        arr[idx]=arr[bidx];
        arr[bidx]=temp;
        maxheap(arr,n,bidx);
    }
}
void buildheap(int arr[],int n)
{
	int s= (n/2)-1;
	for(int i=s;s>=0;i--)
	{
	   maxheap(arr,n,i);	
	}
}
void print()
{
	cout<<endl;
	cout<<a[0];
}

void deleteEle(int x)
{
   for(int i=0;i<n;i++)
   {
   	if(a[i]==x)
   	{
   	  break;	
	}
   }
  if(i<n)
   {
      n=n-1;
      for(int j=i;j<n;j++)
       {
      	a[j]=a[j+1];
       }
   }
}
int main()
{
    int arr[]={20,7,8,10,15,5,6};
    int n= sizeof(arr)/sizeof(arr[0]) ;
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
	string option;
	cin>>option;
	if(str[0]==1)
	case 1:	
	
	 maxheap(arr,n,1);
}

