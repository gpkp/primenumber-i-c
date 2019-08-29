#include<stdio.h>
#include<conio.h>
void main()
{
 int no,i,m=0,flag=0;
 clrscr();
 printf("enter the number");
 scanf("%d",&no);

 m=no/2;
 printf("\n%d",m);
 for(i=2;i<=m;i++)
 {
  if(no%i==0)
  {
  printf("%d is not prime number",no);

  flag=1;
  break;
  }


  }

  if(flag==0)
  {
   printf("%d number in prime",no);
  }



 getch();

}

