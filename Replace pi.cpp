#include<iostream>
using namespace std;
void replace(string s)
{
  if(s.length()==0)
  {
  	return ;
  }
  string ros=s.substr(0)+s.substr(1);
  if(s[0]=='p'&&s[1]=='i')
   {
   	   cout<<"3.14";
   	   replace(s.substr(2));
   }
   else
    {
     cout<<s[0];
     replace(s.substr(1));
    }
}
int main()
{
	string str;
	cin>>str;
	cout<<"replace string :-"<<endl;
	replace(str);
	return 0;
}
