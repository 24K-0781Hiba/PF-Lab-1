#include<stdio.h>
void main()
{
  int n, i, count = 0, orgn;
  printf("Enter a number: ");
  scanf("%d",&n);
  orgn = n;
  if (n<0)
  {
    n=-n;
  }
  do{
  n = n/10;
  count++;
  }while(n!=0);
  if(count>1)
  {
    printf("\nThe number is a %d(multiple) digit number",count);
  }
  else {
  printf("\nThe number is a single digit number");
  }
  if (orgn==1)
  {
    printf("Number us neither prime nor composite");
  }
  else if (orgn>1)
  {
    for(i=2;i*i<=orgn;i++)
    {
      if (orgn%i==0){
      printf("\nnumber is composite");}
      else if (orgn%i!=0){
      printf("\nnumber is prime");}
    }
  }
  return 0;
}
