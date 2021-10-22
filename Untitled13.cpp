#include<iostream>
#include<string.h>
using namespace std;

void print(char* c)
{
	c[0]='A';
	while(*c !='\0')
	{
		cout<<*c;
		c++;
	}
	cout<<"\n";
}

int main()
{
	char c[20]="Hello";
	print(c);
 
	return 0;
}


