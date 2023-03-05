#include<stdio.h>
void merge(int a[],int s1,int b[],int s2)
{
    int temp[s1+s2];
    int i = 0;
    for(;i<s1;i++)
    {
        temp[i] = a[i];
    }
    int j = 0;
    for(;i<s1+s2; i++)
    {
        temp[i] = b[j++];
    }
    int t;

    for(int i = 0; i<s1+s2-1; i++)
    {
        for(int j = 0; j<(s1+s2)-i-1; j++)
        {
            if(temp[j] < temp[j+1])
            {
                t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }
    for(int i = 0; i <(s1+s2); i++)
    {
        printf("%d ",temp[i]);
    }
}
int main()
{
    int a[] = {1,2,3,4};
    int b[] = {5,6,7,8};
    int asize = sizeof(a) / sizeof(int);
    int bsize = sizeof(b) / sizeof(int);
    merge(a,asize,b,bsize);
    return 0;
}
