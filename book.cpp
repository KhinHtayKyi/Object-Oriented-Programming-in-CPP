/*name of book, ISBN no, name of author, code no, edition
*/


#include<iostream>
using namespace std;
struct bookdata
	{  char bname[50];
	   int ISBNno;
	   char author[20];
	   int codeno;
	   int editionno;
	};
	
	
int main()
{
	 int n;
	 cout<<"Enter no of books you want to fill";
	 cin>>n;
      bookdata b[n];
      char choice;
      int search;
	  
	  for(int i=0;i<n;i++)
	  {
	     cout<<"Enter name of book";
	     cin>>b[i].bname;
		 cout<<"Enter ISBN no";
		 cin>>b[i].ISBNno;
		 cout<<"Enter author of book";
		 cin>>b[i].author;		 
		 cout<<"Enter codeno and editionno";
		 cin>>b[i].codeno>>b[i].editionno;
		 
	  }
	  
	  do{
  		
	  	cout<<"Enter the ISBNno you want to display";
	  	cin>>search;
		for(int i=0;i<n;i++)
	  {
	    
	  	if(search==b[i].ISBNno)
	  	{
	  		cout<<" Book's information that you want to search are:"<<endl;
   		    cout<<" Book's name        :"<<b[i].bname<<endl;
		   cout<<" ISBN no     :"<<b[i].ISBNno<<endl;
		   cout<<" Author's Name  :"<<b[i].author<<endl;
		   cout<<" Code No :"<<b[i].codeno<<endl;
		   cout<<" Edition No :"<<b[i].editionno<<endl;
		   break;
		   	
	  	}
	  }
	  
	  	cout<<"In our library , there is no book that you want to search "<<endl;	  	
	  	cout<<"Do you want to search another book";
	  	cin>>choice;
	  }
	  while(toupper(choice)!='n');
	  }
	 
