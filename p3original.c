#include<stdio.h>
#define USE_MATH_DEFINES
#include<math.h>
typedef struct Camel
{
  float height;
  float length;
  float radius;
}
Camel;
Camel input()
{
  Camel a;
  printf("Enter Camel's height (in m): \n");
  scanf("%f",&a.height);
  printf("Enter Camel's length (in m): \n");
  scanf("%f",&a.length);
  printf("Enter Camel's stomache radius (in m): \n");
  scanf("%f",&a.radius);
  return a;
}
float find_weight(Camel c)
{
  float w;
  w= M_PI* pow(c.radius,3)*sqrt(c.length*c.height);
  return w;
}
void output(Camel c, float weight)
{
  printf("Weight of Camel of height: %0.1f m, length: %0.1f m, stomache radius: %0.1f m is %0.1f Kg",c.height,c.length,c.radius,weight);
}
int main()
{
  float weight;
  Camel c;
  c=input();
  weight=find_weight(c);
  output(c,weight);
  return 0;
}