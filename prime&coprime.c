#include<stdio.h>
#include<math.h>
int isprime(int n)
{
	if(n==2) 
	 return 1;
	if(n==1||(n%2)==0) 
	 return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2)
	{
	 if((n%i)==0) 
	 return 0;
	}
	return 1;
}
int gcd(int a, int b)
{
	if(!b) return a;
	else return gcd(b,a%b);
}

void main()
{
	int n1,n2;
	printf("enter the two numbers \n");
	scanf(" %d %d",&n1,&n2);
	if(isprime(n1))
	 printf("\n%d is prime number ",n1);
    else
      printf("\n%d is not prime number\n ",n1);
      printf("\n");
      
      if(isprime(n2))
	 printf("\n%d is prime number ",n2);
    else
      printf("\n%d is not prime number\n ",n2);
      printf("\n\n");
        
        if(gcd(n1,n2)==1)
	printf("%d and %d is coprime",n1,n2);
	else
	printf("%d and %d is not coprime",n1,n2);
}
