#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int coins[10],n,amount;
	cout<<"Enter the number of coins : ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(int i=1; i<=n; i++)
	{
		cin>>coins[i];
	}
	int size=sizeof(coins)/sizeof(coins[1]);
	cout<<"Enter the amount : ";
	cin>>amount;
	sort(coins,coins+size);
	for(int i=1; i<=n; i++)
	{
		cout<<coins[i];
	}
}
