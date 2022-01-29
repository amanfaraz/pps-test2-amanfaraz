#include<stdio.h>
#define USE_MATH_DEFINES
#include<math.h>
float input_radius()
{
  float radius;
  printf("Enter the stomach radius of the camel (in m): \n");
  scanf("%f",&radius);
  return radius;
}
float input_height()
{
  float height;
  printf("Enter the height of the camel (in m): \n");
  scanf("%f",&height);
  return height;
}
float input_length()
{
  float length;
  printf("Enter the length of the camel (in m): \n");
  scanf("%f",&length);
  return length;
}
float find_weight(float radius,float height,float length)
{
  float c;
  c= M_PI * pow(radius,3)* sqrt(height*length);
  return c;
}
void output(float radius,float height,float length,float weight)
{
  printf("Weight of camel of radius: %f, height: %f, raduis of stomache: %f is: %f Kg",radius,height,length,weight);
}
int main()
{
  float radius,height,length,weight;
  radius=input_radius();
  length=input_length();
  height=input_height();
  weight=find_weight(radius,height,length);
  output(radius,height,length,weight);
  return 0;
}