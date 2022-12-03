#include <stdio.h>
#include <math.h>

int main()
{
  int x;
  int a, i1, i2, count=0;
  printf("Pls Enter Desired Number(Only Enter Positive No) : \n");
  scanf("%d", &x);

  i1 = ceil(sqrt(x));
  i2 = x;

  for(a = 2; a <= i1; a++)
  {
    if(i2%a == 0)
    count = 1; 
  }
  if ((count == 0 && i1 != 1) || i2 == 2 || i2 == 3)
  printf("%d is a prime number\n", i2);
  else
  printf("%d is not a prime number\n", i2);
  return 0;
}