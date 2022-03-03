#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the numerator:\n");
  scanf("%d",num1);
  printf("enter the numerator:\n");
  scanf("%d",num2);
  printf("enter the denominators:\n");
  scanf("%d",den1);
  printf("enter the denominators:\n");
  scanf("%d",den2);
}

void add(int num1,int den1, int num2, int den2, int *sum)
{
  *sum=num1/den1+num2/den2;
}

void output(int num1, int den1, int num2, int den2,int sum)
{
  printf("the sum of %d/%d + %d/%d = %d",num1,den1,num2,den2,sum);
}

int main()
{
  int num1,den1,num2,den2,sum;
  input(&num1,&num2,&den1,&den2);
  add(num1,den1,num2,den2,&sum);
  output(num1,den1,num2,den2,sum);
  return 0;  
}

  

