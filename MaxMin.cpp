#include<iostream>
using namespace std;

struct Pair{
	int min;
	int max;
};

struct Pair getMaxMin(int arr[],int l,int r )
{
	struct Pair maxmin,mml,mmr;
	int mid;
	if(l==r)
	{
		maxmin.max=arr[0];
		maxmin.min=arr[0];
		return maxmin;
	}
	if(r==l+1)
	{
		if(arr[l]>arr[r])
		{
			maxmin.max=arr[l];
			maxmin.min=arr[r];
			return maxmin;
		}
		else
		{
			maxmin.min=arr[l];
			maxmin.max=arr[r];
			return maxmin;
		}
	}
    mid=(l+r)/2;
    mml=getMaxMin(arr,l,mid);
    mmr=getMaxMin(arr,mid+1,r);
	{
		if(mml.max>mmr.max)
		{
			maxmin.max=mml.max;
		}
		if(mml.min<mmr.min)
		{
			maxmin.min=mml.min;
		}
		if(mmr.max>mml.max)
		{
			maxmin.max=mmr.max;
		}
		if(mmr.min<mml.min)
		{
			maxmin.min=mmr.min;
		}
	}
	return maxmin;
}

int main()
{
	int arr[] = { 1000, 141, 445,15, 330, 3000 };
    int arr_size = 6;
    struct Pair maxmin = getMaxMin(arr,0,5);
    cout<<"Maximum value "<<maxmin.max<<endl;
    cout<<"Minimum Value "<<maxmin.min<<endl;
    return 0;
}
