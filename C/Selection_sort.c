#include <stdio.h>
#include <stdlib.h>
void selection_sort(int arr[],int n);

int main()
{
    int arr[]={3,2,1,6,4,5,9,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    
}
void selection_sort(int arr[],int n)
{
    int min,temp;
    for(int i=0; i<n; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }

        }
        if(min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}