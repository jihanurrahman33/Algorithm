#include <stdio.h>
void bubble_sort(int arr[],int n);
int main() {
    int arr[]={4,3,2,1,9,8,7,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr , n );
    return 0;
}
void bubble_sort(int arr[],int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int k = 0 ;k<=n - 1;k++){
        printf("%d ",arr[k] );
    }
}