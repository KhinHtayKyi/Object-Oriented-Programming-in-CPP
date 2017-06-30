#include<iostream>
#include<iomanip>
void main()
{
	
	int x;
	cout<<"enter size";
	cin>>x;
	for(int i=1;i<=x;i++)
	{ cout<<"*";
	}
	cout<<endl;
	
	for(int j=0;j<x-2;j++)
	{
		for(int l;l<=1;l++)
		cout<<"*";
		for(int m=1;m<=x-2;m++)
		cout<<" ";
		
		
	}
//	cout<<endl;
	for(int k=1;k<=x;k++)
	{
		cout<<"*";
	}
	cout<<endl;
}
