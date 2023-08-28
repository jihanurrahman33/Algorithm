#include <stdio.h>
void insertion_sort(int arr[],int n);
void print_array(int arr[],int n);
int main()
{
    int arr[]={9,7,8,6,5,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    print_array(arr,n);
    
    return 0;
}
void insertion_sort(int arr[],int n)
{
    int temp;
    for(int i=1; i<n; i++)
    {
        temp=i;
        int j=i-1;
        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

    }

}
void print_array(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}