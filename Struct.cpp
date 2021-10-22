#include<iostream>

using namespace std;

struct Person{
	char name[100];
	int salary;
	float age;
};

int main()
{
  Person p1;
  cout<<"Enter name "<<p1.name<<endl;
  cin>>p1.name;
  cout<<endl;
  cout<<p1.name<<endl;
   cout<<p1.age<<endl;	
	
}

