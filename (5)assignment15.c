#include<stdio.h>
int adj(int *a,int n)
{
    int t = a[0];
    for(int i = 1; i<n; ++i)
    {
      if(t!=a[i])
        t=a[i];
      else
      return a[i];
    }
}
int main()
{
    int a[] = {12,12,34,56,56};
    int size = sizeof(a) / sizeof(int);
    int res = adj(a,size);
    printf("%d",res);
    return 0;
}
