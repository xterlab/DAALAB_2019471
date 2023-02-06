#include<stdio.h>
int main()
{
  int a[5],x,k;
  for(int i=0;i<5;i++)
  {
    printf("Enter the element :");
    scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched :");
  scanf("%d",&k);
  int flag=0,i;
   for(i=0;i<5;i++)
  {
    if(k==a[i])
    {
        flag=1; 
    printf("Element found at %d",(i+1));
    }
  }
   if(flag==0)
   printf("Not found");
}