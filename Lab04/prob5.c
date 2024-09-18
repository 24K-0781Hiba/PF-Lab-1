#include<stdio.h>
int main()
{
  int id, units;
  float amount, rate, bill, surcharge = 0.0;
  char name[100];
  printf("input ID: ");
  scanf("%d",&id);
  printf("input units consumed: ");
  scanf("%d",&units);
  printf("enter your name: ");
  scanf(" %c",&name);

  if (units<=199)
  {
    rate = 16.20;
	amount = units*rate;
  }
  else if (units>=200&&units<300)
  {
    rate = 20.10;
	amount = units*rate;
  }
  else if (units>=300&&units<500)
  {
    rate = 27.10;
    amount = units*rate;
  }
  else if (units>500)
  {
     rate = 35.90;
     amount = units*rate;
     if (amount>18000)
     {
     surcharge = amount*0.15;
     }
  }	 
  bill = amount + surcharge;
  printf("\nCustomer ID: %d",id);
  printf("\nTotal units consumed: %d units",units);
  printf("\nBill amount: $%.2f",amount);
  printf("\nSurcharge enforced: $%.2f",surcharge);
  printf("\nYour total bill: $%.2f",bill);
  return 0;
 } 
    
    