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
		for(int k=x-2;k<x;k++)
		cout<<"*";
		for(int m=0;m<x-2;m++)
		cout<<" ";
		cout<<endl;
		
		
	}
	cout<<endl;
	for(int k=1;k<=x;k++)
	{
		cout<<"*";
	}
	cout<<endl;
}
