#include <stdio.h>
#include<stdlib.h>

int bs(int arr[],int x, int low ,int high)
{
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
            return(mid);
        else if(arr[mid]<x)
            low=high+1;
            else
            high=mid-1;
    }
    return -1;
}
int main()
{
int array[]={3,4,5,6,7,8,9};
int n= sizeof(array)/sizeof(array[0]);
int x=10;
int result=bs(array,x,0,n-1);
if (result==-1)
    printf("not found");
else
    printf("%d",result);


}


