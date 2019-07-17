#include<stdio.h>
#include<stdlib.h>

int fact(int k)
{
  int i;
  int result=1;
	for(i=1;i<=k;i++)
	result=result*i;
	return result;
}

int main(void)
{
  int num;
  printf("Enter a number :\n");
  scanf("%d",&num);
  printf("The factorial of the entered number is %d.",fact(num));
  return 0;
}
