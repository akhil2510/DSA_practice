#include<iostream>
using namespace std;
int main()
{
	int a;
	int *p;
	a=10;
	p=&a;
	cout<<p<<endl;
	cout<<*p<<endl;
	int b=60;
	*p=b;
	cout<<p<<endl;
	cout<<*p<<endl;
	
}
