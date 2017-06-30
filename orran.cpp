#include <iostream.h>                                   
#include <stdlib.h>     
int   number_to_guess;  
int   low_limit;        
int   high_limit;
int   guess_count;      
int   player_number;                                     
char  line[80]; 
char ch;                                           
   
int main()
{
    do {
    number_to_guess = rand() % 100 + 0; 
        low_limit = 0;
        high_limit = 100;
        guess_count = 0; 
         while (1) {
            cout << "Bounds " << low_limit << " - " << high_limit << '\n';
            cout << "Value[" << guess_count+1 << "]? "; 
           // guess_count++; 
            cin >> player_number;
            if (player_number == number_to_guess)
               {
               		break;
               } 
            if (player_number < number_to_guess)
                low_limit = player_number; 
            else
                high_limit = player_number; 
         }
        cout << "You Win!!!!\n";
        cout<<"Do you want to continue again,type y or n";
        cin>>ch;
    }while(toupper(ch)=='Y');
    
    return 0; 
}
