#include<stdio.h>

int binary_search(int arr[],int size,int value)
{
	int L_index=0;
	int R_index=size-1;
	while(L_index<=R_index)
	{
		int mid=L_index+(R_index-L_index)/2;
		if(arr[mid]==value)
		{
			return mid;
		}
		else if(arr[mid]<value)
		{
			L_index=mid+1;
		}
		else
		{
			R_index=mid-1;
		}
	}
	return -1;
}

int main(void)
{
	int reo[]={2,4,6,8,10,15,20};
	int reo_size=sizeof(reo)/sizeof(reo[0]);
	int reo_value=4;
	int find_reo=binary_search(reo,reo_size,reo_value);
	printf("the value is found in index %d\n",find_reo);
	return 0;
}
