#include<stdio.h>
int maximum(int a[],int size)
{
    int max = a[0];
    for(int i = 1; i <size; ++i )
        if(a[i] > max)
        max = a[i];
        return max;
}
int main()
{
    int arr[] = {56,89,34,12};
    int size = sizeof(arr) / sizeof(int);
    printf("Maximum element in the array is  %d",maximum(arr,size));
    return 0;
}
