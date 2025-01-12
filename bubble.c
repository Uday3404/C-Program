#include<stdio.h>
#include<conio.h>
void bubblesort(int arr[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}
int main()
{
int n,i,j;
int arr[10];
clrscr();
printf("program for BUBBLE SORT\n");
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter %d element:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
bubblesort(arr,n);
printf("sorted array:\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
getch();
return 0;
}