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
	for(int j=1;j<=x-2;j++)
	{
		
		cout<<"*"<<setw(x-1)<<"*"<<endl;
	}
//	cout<<endl;
	for(int k=1;k<=x;k++)
	{
		cout<<"*";
	}
	cout<<endl;
}
