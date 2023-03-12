#include <stdio.h>

//write a program that prints the multiplication table using the digit entered by user//

int main(void) 
{
  int j;
  int digit;

  printf("Please input your digit to be multiplied:\t");
  scanf("%d", &digit);

  for (j = 0; j <= 20; j++)

      printf("%d x %d = %d\n", digit, j, digit * j);

 printf("\n\nEnd of Program\n");
  sleep(10);
  system("clear");
  printf("Welcome User\n");
  
  return 0;
}