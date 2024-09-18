#include<stdio.h>
int main()
{
  int cost, discount;
  float nprice, saved = 0;
  printf("enter the price: ");
  scanf("%d",&cost);
  if (cost>=500&&cost<2000)
  { 
    discount = 5;
    saved = cost*discount/100;
    printf("\nAmount saved: $%.2f",saved);
    nprice = cost - saved;
    printf("\nAmount needed to be paid: $%.1f", nprice);
  }
  else if (cost>=2000&&cost<4000)
  {
    discount = 10;
    saved = cost*discount/100;
    printf("\nAmount saved: $%.2f",saved);
    nprice = cost - saved;
    printf("\nAmount needed to be paid: $%.1f", nprice); 
  }
  else if (cost>=4000&&cost<6000)
  {
    discount = 20;
    saved = cost*discount/100;
    printf("\nAmount saved: $%.2f",saved);
    nprice = cost - saved;
    printf("\nAmount needed to be paid: $%.1f", nprice);   
  }
  else if (cost>=6000)
  {
    discount = 35;
    saved = cost*discount/100;
    printf("\nAmount saved: $%.2f",saved);
    nprice = cost - saved;
    printf("\nAmount needed to be paid: $%.1f", nprice);
  }
  else 
  { 
    printf("\namount need to be paid without discount: $%d",cost);
  }
  printf("\nYour actual amount was: $%d",cost);

  return 0;
}
