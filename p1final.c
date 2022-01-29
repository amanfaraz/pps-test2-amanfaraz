#include<stdio.h>
#include<math.h>
typedef struct crdnt
{
  int x;
  int y;
}
crdnt;
crdnt input()
{
  crdnt a;
  printf("Enter the coordinates");
  scanf("%d%d",&a.x,&a.y);
  return a;
}
float distance(crdnt a,crdnt b)
{
  float p;
  int q;
  q=pow((a.x-b.x),2)+pow((a.y-b.y),2);
  p=sqrt(q);
  return p;
}
void output(crdnt a,crdnt b, float result)
{
  printf("Distance between Point A (%d,%d) and Point B (%d,%d) is %f cm\n",a.x,a.y,b.x,b.y,result);
}
int main()
{
  crdnt a,b;
  float result;
  a=input();
  b=input();
  result=distance(a,b);
  output(a,b,result);
  return 0;
}
