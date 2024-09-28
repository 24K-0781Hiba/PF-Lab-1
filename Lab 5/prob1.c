#include<stdio.h>
int main()
{
  int a, b ,c;
  printf("enter 1st number: ");
  scanf("%d",&a);
  printf("enter 2nd number: ");
  scanf("%d",&b);
  printf("enter 3rd number: ");
  scanf("%d",&c);
  if (a>b)  
  {
    if (a>c)
    {
      printf("%d is the greatest number",a);
    }
    else {
    printf("%d is the greatest number",c);
    }
  }
  else if (b>c){
  	printf("%d is the greatest number",b);
  } else{
  printf("%d is the greatest number",c);}
  return 0;
}
    
