#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[100];
	char s2[100];
	
	cout<<"Enter your Name"<<endl;
	cin.getline(s,25);
	cout<< strrchr(s,'m')<<endl;
//	cin.ignore();
//	cout<<"Enter your Name Again"<<endl;
//	cin.getline(s2,25);
//	cout<<"Welcome "<<s2<<endl;
	
	return 0;
}
