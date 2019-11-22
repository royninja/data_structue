#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int maximum(int arr[],int n)
{
	int i,max=0;
	for(i=1; i<=n; i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	return max;
}
int searchL(int arr[], int n, int key)
{
	int flag,i;
	flag=0;
	for(i=1; i<=n; i++)
	{
		if(arr[i] == key)
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	return flag;
}
int main()
{
	int coins[10],n,amount,i,max,count=0,famount;
	printf("Enter the number of coins : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=1; i<=n; i++)
	{
		scanf("%d",&coins[i]);
	}
	printf("Enter the amount : ");
	scanf("%d",&amount);
	//printf("%d",maximum(coins,n));
	//qsort(coins,n,sizeof(int),cmpfunc);
	for(i=1; i<=n; i++)
	{
		printf("%d ",coins[i]);
	}
	while(amount>0)
	{
		for(i=n; i>=1; i--)
		{
			if(coins[i]>amount)
			{
				printf("\n");
			}
			if(coins[i]<amount)
			{
				amount=amount-coins[i];
				count++;
			}
			if(coins[i]==amount)
			{
				count++;
				break;
			}
		}
	}*/
	printf("%d",count);
}
