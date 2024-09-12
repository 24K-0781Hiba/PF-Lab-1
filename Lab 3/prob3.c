#include<stdio.h>
int main()
{
  int salary; 
  float taxrate, newsalary;
  printf("enter your salary: ");
  scanf("%d",&salary);
  printf("enter tax rate: ");
  scanf("%f",&taxrate);
  newsalary = salary*taxrate/100;
  printf("you will be paid: $ %.2f",newsalary);
  return 0;
}
  