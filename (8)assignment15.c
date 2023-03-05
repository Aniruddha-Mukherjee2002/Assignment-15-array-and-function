#include<stdio.h>
int duplicate(int a[],int n)
{
    int f = 0;
    for(int i = 0; i < n; i++)
    {
        f= 0;
        for(int j = 0; j<n; j++)
        {
            if(i==j)
                continue;

            if(a[i]==a[j])
            {
               f = 1;
            }
        }
        if(f==0)
        {
            printf("%d ",a[i]);
        }
    }
}
int main()
{
    int a[] = {4,2,3,4,4};
    int size = sizeof(a) / sizeof(int);
    duplicate(a,size);
    return 0;
}
