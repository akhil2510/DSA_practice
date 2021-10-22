#include<iostream>
using namespace std;
int main()
{

  for(int i=1;i<=5;i++)
  {
  	int j;
  	for( j=1;j<=5-i;j++)
  	{
  	 cout<<"  ";
	}
	int k=i;
	for(;j<=5;j++)
	{   
		cout<<"*"<<" ";
	}
	k=2;
	for(;j<5+i;j++)
	{   
		cout<<"*"<<" ";
	}
	cout<<endl;
  }
   return 0;
}
