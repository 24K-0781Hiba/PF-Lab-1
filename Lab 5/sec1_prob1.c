#include<stdio.h>
int main()
{ 
  int age;
  printf("enter your age: ");
  scanf("%d",&age);
  if (age>=0&&age<=60)
  {
    if (age<13)
    {
    printf("you are a child");
    }
    else if (age>=13&&age<=19)
    {
      printf("you are a teenager");
    }
    else if (age>19&&age<=28)
    {
      printf("you are a young adult");
    }
    else if (age>28)
    {
      printf("you are an adult");
    }
  }
  else { 
  printf("you are a senior");}
  return 0;
}
