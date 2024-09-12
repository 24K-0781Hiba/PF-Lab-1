#include<stdio.h>
int main()
{
  float avg, totfuel, forcost, backcost, totfuelcost;
  int onewaydis = 1207, forprice = 118, backprice = 123;
  int totdis;
  printf("enter car's fuel average: ");
  scanf("%f",&avg);
  if (avg<=0)
  { 
    printf("invalid input");
  }
  totdis = 2*onewaydis;
  totfuel = totdis/avg;
  forcost = (onewaydis/avg) * forprice;
  backcost = (onewaydis/avg) * backprice;
  totfuelcost = forcost + backcost;
  printf("total fuel consumed: %.2f litre", totfuel);
  printf("\n fuel cost for forward trip: $ %.2f", forcost);
  printf("\n fuel cost fot backward trip: $ %.2f", backcost);
  printf("\n total fuel cost: $ %.2f", totfuelcost);
  return 0;
}
  

  
  
  
  
  