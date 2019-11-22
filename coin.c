#include<stdio.h>
#include<stdlib.h>
int main()
{
	int coins[100],*dp,amount,n,i,j;
	printf("\nEnter the total number of different coins : ");
	scanf("%d",&n);
	printf("\nEnter the values: ");
	for(i=1; i<=n; i++)
	{
		scanf("%d",&coins[i]);
	}
	printf("\nEnter the amount  : ");
	scanf("%d",&amount);
	dp=(int *)calloc(amount+1,sizeof(int));
	dp[0]=1;
	for(i=1; i<=n; i++)
	{
		for(j=coins[i]; j<=amount; j++)
		{
			dp[j]=dp[j]+dp[j-coins[i]];
		}
	}
	printf("\nMinimum coin is required : %d",dp[amount]);
	return 0;
}
