#include<stdio.h>
typedef struct Camel
{
  float radius;
  float height;
  float length;
}
Camel;
Camel input()
{
  Camel a;
  printf("Enter Camel's Stomache radius (in m): \n");
  scanf("%f",&a.radius);
  printf("Enter the height (in m): \n");
  scanf("%f",&a.height);
  printf("Enter the length of the camel: \n");
  scanf("%f",&a.length);
  return a;
}
void find_condition(Camel a)
{
  if (a.radius<a.height && a.radius<a.length)
  {
    printf("Camel is SICK");
  }
  else if(a.height<a.length && a.height<a.radius)
  {
    printf("Camel is HAPPY");
  }
  else 
  {
    printf("Camel is TENSED");
  }
}
int main()
{
  Camel c;
  c=input();
  find_condition(c);
  return 0;
}