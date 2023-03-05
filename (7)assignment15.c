#include<stdio.h>
int duplicate(int a[],int n)
{
    int count = 0;
    int temp[n];
    for(int i = 0; i < n; i++)
    {
        temp[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i==j)
                continue;

            if(a[i]==a[j])
            {
                temp[j]++;
            }
        }
    }
    for(int i = 0; i< n; i++)
    {
        printf("%d",temp[i]);
    }
}
int main()
{
    int a[] = {4,2,3,4,4};
    int size = sizeof(a) / sizeof(int);
    duplicate(a,size);
    return 0;
}
