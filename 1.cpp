#include<iostream>
using namespace std;
int main()
{
	int yard1,feet1,inches1;
	int yard2,feet2,inches2;
	int yard3,feet3,inches3;
	int ansyard,ansfeet,ansinches;
	char ch;
	
	
	cout<<"Enter length	:";
	cin>>yard1>>ch>>feet1>>ch>>inches1;
	cout<<"Enter Width	:";
	cin>>yard2>>ch>>feet2>>ch>>inches2;
	cout<<"Enter height	:";
	cin>>yard3>>ch>>feet3>>ch>>inches3;
	
	int l=yard1*36+feet1*12+inches1;
	int w=yard2*36+feet2*12+inches2;
	int h=yard3*36+feet3*12+inches3;
	int volume=l*w*h;
	
	ansyard=volume/36;
	ansfeet=(volume%36)/12;
	ansinches=(volume%36)%12;
	
	cout<<"Volume of the room is"<<ansyard<<ch<<ansfeet<<ch<<ansinches;
}