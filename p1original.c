#include<stdio.h>
void input(float *base, float *height)
{
  printf("enter float , height values");/*not float its base(but its not a problem)*/
  scanf("%f%f",base,height);
}
void find_area(float base , float height, float *area)
{
  *area=(base*height)/2;
}
void output(float base, float height, float area)
{
  printf("the area of the traingle with base %f and height %f is %f",base,height,area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}