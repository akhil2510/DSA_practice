#include<iostream>
using namespace std;
bool sorted(int a[],int n)
   {
       if(n==1)
       {
         return true;
       }
       bool rest=sorted(a+1,n-1);
          return(a[0]<a[1] && rest);
   }


int main()
{
   int arr[]={1,23,45,67,89};
    cout<<sorted(arr,5);
    return 0;
}



