#include<stdio.h>
int main()
{
  int age, income, credit;
  printf("enter your age: ");
  scanf("%d",&age);
  printf("enter your income: ");
  scanf("%d",&income);
  printf("enter your credit score: ");
  scanf("%d",&credit);
  if (age>=18&&age<=75)
  {
    if (income>=20000&&income<1000000&&credit>60)
	{
	  printf("All conditions are met. You are elligibile for a loan");
	}
  }
  else 
  {
    printf("Conditions not fulfilled. You are not elligible for a loan");
  }
  return 0;
}
  
  