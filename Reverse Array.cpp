#include<iostream>
using namespace std;
int n;
void reverse_array(int b[],int start,int end)
{
  while(start<end)
  {
	int temp=b[start];
	b[start]=b[end];
	b[end]=temp;
	start++;
	end--;
  }
}

int main()
{
	cout<<"Enter size odf Array "<<endl;
	cin>>n;
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i] ;
	}
	cout<<"Given Array is : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	reverse_array(b,0,n-1);
	cout<<"Revered Array :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
