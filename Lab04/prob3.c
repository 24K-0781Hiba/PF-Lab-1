#include<stdio.h>
int main()
{
  char input;
  printf("Enter any character: ");
  scanf(" %c",&input);
  if (input>='0'&&input<='9')
  {
    printf(" %c is a digit",input);
  }
  else if (input>='a'&&input<='z')
  {
    printf(" %c is a lowercase letter",input);
  }
  else if (input>='A'&&input<='Z')
  {
    printf(" %c is an uppercase letter",input);
  }
  else  
  printf(" %c is a special character",input);
  return 0;
}  