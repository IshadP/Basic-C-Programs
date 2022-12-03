#include <stdio.h>
int main(){
int var;
printf("Pls Type the Desired no : ");
scanf("%d", &var);
  if (var/2 == var-(var/2))
    printf("The number is an even number.(The no. will always be rounded down to an integer.)\n");
  else if (var == 2)
    printf("The number is an even number.(The no. will always be rounded down to an integer.)\n");
  else 
    printf("The number is an odd number.(The no. will always be rounded down to an integer.)\n");
	return 0;
}