#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,j,t,a[10]={10,15,8,22,17,23,46,33,29,20};
int max=0,low,high;
clrscr();
high=9;
low=0;

do{
for(i=low;i<=high;i++)
{

 if(max<a[i])
 {
 max=a[i];
 low=i+1;
 }
}
printf("%d ",max);
t=max;
max=0;
}
while(t!=a[high]);
getch();

}