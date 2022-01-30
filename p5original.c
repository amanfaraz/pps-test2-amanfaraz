#include<stdio.h>
#include<math.h>
int find_x()
{
  int x;
  printf("Enter a value for 'X': \n");
  scanf("%d",&x);
  return x;
}
int find_fact(int a)
{
  int sum;
  for (int i=0;i<=a;i++)
  {
    sum=+i;
  }
  return sum;
}
float find_borga_x(int x, int b[30])
{
  int i=0,a=1,p,sum=0;
  while (a>0.000001)
  {
    a=0;
    p=find_fact(2i+1);
    a=pow(x,i)/p;
    b[i]=a;
  }
  for(int n=0;n>i;n++)
  {
    sum=+b[n];
  }
  return sum;
}
void output(int x,float result)
{
  printf("The result for Borga^x where x is: %d is: %f",x,result);
}
int main()
{
  int x,b[30];
  float result;
  x=find_x();
  result=find_borga_x(x,b);
  output(x,result);
  return 0;
}