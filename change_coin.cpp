#include<iostream>
using namespace std;

int min(int a,int b)
{
	if(a > b)
		return b;
		return a;
}
int main()
{
	int n,amount,coins[10];
	cout<<endl<<"Enter the different coins : ";
	cin>>n;
	cout<<endl<<"Enter the coins : ";
	for(int i=0; i<n; i++)
	{
		cin>>coins[i];
	}
	cout<<endl<<"Enter the amount : ";
	cin>>amount;
	int a[n][amount+1];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=amount; j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=1; j<=amount; j++)
		{
			if(i==0)
			{
				if(j%coins[i] == 0)
				{	
					a[i][j]=j/coins[i];
				}
			}else
			{
				if(j<coins[i])
				{
					a[i][j]=a[i-1][j];
				}
				else
				{
					a[i][j]=min(a[i-1][j],1+a[i][j-coins[i]]);
				}
			}
			
		}
	}
	cout<<endl<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=amount; j++)
		{
			cout<<a[i][j]<< " ";			
		}
		cout<<endl;
	}
	
	cout<<"Minimum number of coins need : "<<a[n-1][amount];
}
