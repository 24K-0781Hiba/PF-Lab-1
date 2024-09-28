#include<stdio.h>
int main()
{
  int atten, assign, tscore;
  float final;
  printf("enter your total exam score: ");
  scanf("%d",&tscore);
  printf("enter your attendance: ");
  scanf("%d",&atten);
  printf("enter your total assigment score: ");
  scanf("%d",&assign);
  if (atten>=75&&atten<=100)
  {
    if (assign>=80&&assign<=100)
	{
	  final = (assign*0.2)+(atten*0.1)+(tscore*0.7);
	  printf("your final percentage is %.2f", final);
	  if (final>=90&&final<=100)
          {
	  printf("\nyour final grade is an A");}
	  else if (final>=85&&final<90){
	  printf("\nyour final grade is a B");}
	  else if (final>=75&&final<85){
	  printf("\nyour final grade is a C");}
	  else if (final>=65&&final<75){
	  printf("\nyour final grade is a D");}
	  else if (final<65){
	  printf("\nyour final grade is a F");}
	}
	else
	{
	  printf("failed to submit assigment/failed assigment. Final grade = F");
	}
  }
  else
  {
    printf("insufficient attendance. Final grade = F");
  }
  return 0;
}
	   
	  