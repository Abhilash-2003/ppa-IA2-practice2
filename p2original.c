#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the side");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b && b!=c && a!=c)
  return 0;
  else
  return 1;
}
void output(int a, int b, int c, int isscalene)
{
  if(isscalene==0)//give double assignment operator(=)
  printf("scalene");
  else
  printf("not scalene");
}
int main()
{int w,x,y,z;
w=input_side();
x=input_side();
y=input_side();
z=check_scalene(w,x,y);
output(w,x,y,z);
return 0;

}