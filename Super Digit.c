#include<stdio.h>

int super_digit(int n);
int main()
{
int number;
printf("Enter a number: ");
scanf("%d",&number);
printf("%d",super_digit(number));
return 0;
}

int super_digit(int n)
{
 int rem,sum=0;
 if(n<10)
  return n;
 else
 {
  rem=n%10;
 sum=rem+super_digit(n/10);
 }

 if(sum>9)
 {
 n=sum;
 sum=super_digit(n);
 }
 return sum;
}

