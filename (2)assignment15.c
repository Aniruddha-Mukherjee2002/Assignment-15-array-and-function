#include<stdio.h>
int minimum(int a[],int size)
{
    int min = a[0];
    for(int i = 1; i <size; ++i )
        if(a[i] < min)
        min = a[i];
        return min;
}
int main()
{
    int arr[] = {56,89,34,12};
    int size = sizeof(arr) / sizeof(int);
    printf("Minimum element in the array is  %d",minimum(arr,size));
    return 0;
}
