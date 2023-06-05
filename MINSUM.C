#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int a[5]={6,1,9,5,4};
 int b[5]={3,4,8,2,4};
 int i,j,k=0,t;
 clrscr();
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   if(a[j]>a[j+1])
   {
   t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;
   }
   }
  }

  for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   if(b[j]<b[j+1])
   {
   t=b[j];
   b[j]=b[j+1];
   b[j+1]=t;
   }
   }
  }
  for(i=0;i<=4;i++)
  {
  k=k+a[i]*b[i];
  }
  printf("%d is the minimum aum",k);
  getch();
}



