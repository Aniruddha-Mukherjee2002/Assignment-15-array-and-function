#include<stdio.h>
void rotate(int arr1[])
{
    int i,j,k,l,d,n,m,arr2[5],arr3[5];
    printf("Enter 5 numbers : ");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter a position between 1 to 5 : ");
    scanf("%d",&n);
    if(n==0||n>5)
    {
        printf("\nWRONG CHOICE\n");
    }
    else{
    printf("For rotate to right press 1, for rotate  to left press 0 : ");
    scanf("%d",&d);
    if(d>1)
    {
        printf("\nWRONG CHOICE\n");
    }
    if(d==0)
   {
    for(i=0;i<=4;i++)
    {
        arr2[i]=arr1[i];
    }
    j=0;
    for(i=n;i<=4;i++)
    {
        arr3[j]=arr2[i];
        j++;
    }
    //printf("%d",j);
   k=0;
    for(i=j;i<=4;i++)
    {
        arr3[i]=arr2[k];
        k++;
    }
for(i=0;i<=4;i++)
    printf("%d ",arr3[i]);
   }
if(d==1)
{
  for(i=0;i<=4;i++)
    {
        arr2[i]=arr1[i];
    }
    j=0;
    for(i=5-n;i<=4;i++)
    {
        arr3[j]=arr2[i];
        j++;
    }
     k=0;
    for(i=0;i<5-n;i++)
    {
        arr3[j]=arr2[k];
        k++;
        j++;

    }
    for(i=0;i<=4;i++)
    {
        printf("%d ",arr3[i]);
    }
    }
    }
}
void rotate(int []);
int main(){
int arr4[5];
rotate(arr4);
return 0;
}

