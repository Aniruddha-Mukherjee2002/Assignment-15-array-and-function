#include<stdio.h>
void rev(int a[],int n)
{
    printf("Reversed array is : \n");
    for(int i = n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[] = {1,3,4,5};
    int size = sizeof(a) / sizeof(int);
    rev(a,size);
    return 0;
}
