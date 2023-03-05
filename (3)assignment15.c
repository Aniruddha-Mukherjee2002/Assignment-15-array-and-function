#include<stdio.h>
int sort(int a[],int size)
{
    int temp;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void display(int a[],int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ",a[i]);
}
int main()
{
    int a[] = {12,67,98,4,2};
    int size = sizeof(a) / sizeof(int);
    printf("\nBefore sorting : ");
    display(a,size);
    sort(a,size);
    printf("\nAfter sorting : ");
    display(a,size);
    return 0;
}
