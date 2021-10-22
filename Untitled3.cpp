#include<iostream>

using namespace std;
void geeks();
int main()
{
	geeks();
}
int square(int n1)
{
	cout<<"Address of n1 in square() "<<&n1<<endl;
	n1 *=n1;
	return n1;
}
void square2(int *n2)
{
	cout<<"Address of n2 in square2() "<<n2<<endl;
	*n2 = ((*n2) * (*n2));
	
}

void geeks()
{
	//pass by value
	int n1=8;
	cout<<"Address of n1 in main() "<<&n1<<endl;
	cout<<"Square of n1  "<<square(n1)<<endl;
	cout<<"New n1 is "<<n1<<endl;
	cout<<endl;
	//pass by refrence pointer argument
	int n2=80;
	cout<<"Value of n2 "<<n2<<endl;
	cout<<"address of n2 is in main() "<<&n2<<endl;
	square2(&n2);
	cout<<"Square of n2 "<<n2<<endl;
	
	
	
}


