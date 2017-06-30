#include<iostream>
using namespace std;
struct measure
{
	int y,ft,in;
	
};
int main()
{
	 char ch;
	measure l,w,h;
	cout<<"Enter length";
	cin>>l.y>>ch>>l.ft>>ch>>l.in;
	cout<<"Enter width";
	cin>>w.y>>ch>>w.ft>>ch>>w.in;
	cout<<"Enter length";
	cin>>h.y>>ch>>h.ft>>ch>>h.in;
	int length=l.y*36+l.ft*12+l.in;
	int width=w.y*36+w.ft*12+w.in;
	int height=h.y*36+h.ft*12+h.in;
	int volume=length*width*height;
	cout<<"Volume in cubic inches:"<<volume;
	
}