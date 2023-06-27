#include "WordList.h"
#include "GuessTheWordGame.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;

//| **************************************************************** |
//|  In the multiplayer "Guess the Word" game, players have to guess |
//|  the word based on the theme and the number of empty spaces.     |
//|  Vegetables have been selected as the game's theme and the random| 
//|  words are read from vegetables.txt file. In each game,          |
//|  players have to determine how many rounds to play and guess the |
//|  random word.At the end of the game, system will display the     |
//|  winner or the game end with a tie.                              |
//| **************************************************************** |


int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    decoration();
    GuessTheWordGame game;	//GuessTheWordGame object named game
    
    //asking for user confirmation to start playing
    char choice;
    cout<<"-----------------WELCOME TO GUESS WORD GAME------------------"<<endl;
    cout<<"Are you ready to have fun together ?"<<endl;
	cout<<"Enter [Y] to continue."<<endl;
	cout<<"Enter [X] to end."<<endl;
	
    do
	{
      	cin>>choice;
      	
      	if (choice == 'y' || choice == 'Y')
		{
		  	system("CLS");
          	game.RoundGame();	//call RoundGame function
          	cout<<"do you want to continue:"<<endl;			
		}
      	else
		{
			cout<<"                       !!!GAME END!!!"<<endl;
		}
  	}	
	while (choice == 'Y' || choice == 'y');
    
    return 0;
}
