
#include<iostream>
using namespace std;

void Decision()
{
    char again;
    int rock = 1;
    int paper = 2;
    int scissor = 3;
    int choice1, choice2;
    int player1_score = 0 , player2_score = 0;
    do
    {
        
        
        //Players values
        cout<<"Enter 1st players choice\n\a";
        cin>>choice1;
        
        cout<<"Enter 2nd players choice\n\a";
        cin>>choice2;
        
        if(choice1 == choice2 || choice2 == choice1){
            cout<<"DRAW\a\n TRY AGAIN\a ";
        }
        
        //ROCK = 1 
        // ROCK SCTION 
        if(choice1 ==1 && choice2 ==2)
        {
            cout<<"         Result\n       ";
            cout<<"Player1        PLayer2\n";
            cout<<"         "<<player1_score<<"              "<<++player2_score<<endl;
        }
        if(choice1 ==1 && choice2 == 3)
        {
            cout<<"         Result\n       ";
            cout<<"Player1        PLayer2\n";
            cout<<"         "<<++player1_score<<"              "<<player2_score<<endl;
        }
        
        
        //PAPER =2
        //PAPER SECTION
        
        if(choice1 ==2 && choice2 ==1)
        {
            cout<<"         Result\n       ";
            cout<<"Player1        PLayer2\n";
            cout<<"         "<<++player1_score<<"              "<<player2_score<<endl;
    
        }
        if(choice1 ==2 && choice2 ==3)
        {
            cout<<"         Result\n       ";
            cout<<"Player1        PLayer2\n";
            cout<<"         "<<player1_score<<"              "<<++player2_score<<endl;
          
        }
        
        
        //SCISSOR =3
        //SCISSOR SECTION
        if(choice1 ==3 && choice2 ==1)
        {
            cout<<"          Result\n       ";
            cout<<"Player1        PLayer2\n";
            cout<<"         "<<player1_score<<"              "<<++player2_score<<endl;
        }
        if(choice1 ==3 && choice2 ==2)
        {
            cout<<"         Result\n       ";
            cout<<"Player1        PLayer2\n";
            cout<<"         "<<++player1_score<<"              "<<player2_score<<endl;
        }
        cout<<"Do you want to continue(Y or y or no)";
        cin>>again;
    }
    while(again =='Y'|| again == 'y');

}

void choice()
{
    cout<<"Welcome to the ROCK, PAPER, SCISSOR game\n ";
    cout<<"It's a 2 player game, one player enter its choice and the 2 player enter its"
    "choice. Then the results calculate, to see which player has won.\n";
    
    cout<<"                      For ROCK enter 1\n ";
    cout<<"                      For PAPER enter 2\n ";
    cout<<"                      For SCISSOR enter 3\n ";
    
    Decision();
    
}

int main()
{
    choice();
}