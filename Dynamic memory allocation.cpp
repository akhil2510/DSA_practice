#include<iostream>
using namespace std;

void passbyaddress(int &x,int &y)
{
	int z=x;
	x=y;
	y=z;
	
}
int main()
{
 int a=2,b=3;
  cout<< "The nums are "<<"a "<<a<<" b "<<b<<endl;
  
  passbyaddress(a,b);

     cout<< "The nums are "<<" a "<<a<<" b "<<b<<endl;

  return 0; 
}



