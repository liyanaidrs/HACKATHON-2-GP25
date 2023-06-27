#ifndef GUESSTHEWORDGAME_H
#define GUESSTHEWORDGAME_H
#include "WordList.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;

void decoration()	//function to display game title
{
	cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
    cout<<"                     GUESS THE WORD GAME" <<endl;
    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;    	
}

void instruction()	//functiom to display game instruction
{
	cout<<"\n                      GAME INSTRUCTIONS"<<endl<<endl;
	cout<<"1. Players need to determine number of players and number \n   of rounds to play GUESS THE WORD."<<endl;
	cout<<"2. Players will take turns to guess one random word \n    for each round."<<endl;
	cout<<"4. Player who guess correctly will gain one score."<<endl;
	cout<<"5. Player who guess incorrectly will not gain a score."<<endl;
	cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl; 
}

class GuessTheWordGame	//class to coordinate game
{
  	private:
      	WordList words;	//composition
      	int numRounds;
      	int numPlayers;
      	string guess;

  	public:
      	GuessTheWordGame() 	//read words from file
    	{    
          	ifstream myfile;
          	myfile.open("vegetables.txt");
          	
          	if (myfile)  
				cout<<"FILE OPENED SUCCESSFULLY"<<endl;
          	
          	string a;
          	
          	while (myfile >> a)
             	words.addWord(a);
          	
           	myfile.close(); 
      	}

      	void startGame()	//function game initialization
    	{
	   		decoration();
			instruction();
          	cout<<"\nEnter the number of players:\t ";
          	cin>>numPlayers;
          	
          	while(numPlayers <= 0)
          	{
            	cout<<"Please enter number of player again, number of player should not be negative."<<endl;
            	cin>>numPlayers;
      		}

          	system("CLS");
      	}

    	void RoundGame()	//guessing word function
    	{
      		startGame();
      		decoration();
      		int round;
      		int Score[numPlayers-1];
      		cout<<"~~~~~~~~~~~~~~~~~~~~~~~THEME : VEGETABLES~~~~~~~~~~~~~~~~~~~~"<<	endl<< endl;
      		
      		for (int i = 0; i < numPlayers; i++)
        		Score[i]=0;
      		
      		cout<<"How many round do you want to play? ";
      		cin>>round;
      		
      		for (int j = 0; j < round; ++j)
        	{
          		cout<<"============================================================="<<endl;        		
        		cout<<"                          ---------"<<endl;
          		cout<<"                          |ROUND "<< j+1 <<"|"<<endl;
          		cout<<"                          ---------"<<endl<<endl;
            	string randomWord = words.getRandomWord();
            	
            	//to change random word into empty bar
            	cout<<"                          "<<randomWord[0];
            	
            	for (int i = 0; i < randomWord.length()-2; i++)	
					cout<<" ";
					
            	cout<<randomWord[randomWord.length()-1];
            	cout<<endl<<"                          "<<string(randomWord.length(), '_') ;
				cout<<"\n                       HINT: "<<randomWord.length()<<" letters"<<endl;
            	
                for (int i = 0; i < numPlayers; i++)
                {
					cout<<"\nPLAYER "<< i+1 <<"\nEnter your guess:\t";
                  	cin>>guess;
                	
                  	if (guess == randomWord)
                    	Score[i] += 1;
          		}
          		
          		cout<<"\nThe correct answer for round "<< j+1 <<" :\t"<<randomWord<<endl;
          		cout<<"\n---------------------";
          		cout<<"\n| Score for round "<< j+1 <<" |";
          		cout<<"\n---------------------"<<endl;
          		
          		for (int i = 0; i < numPlayers; i++)	//to display player's score
          			cout<<"Player "<< i+1 <<" score: "<<Score [i]<<endl;
          	}

          	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
          	cout<<"                       THE WINNER IS!!"<<endl<<endl;
			//to display final winner
          	int max = Score[0];
          	int a;
	    	int duplicate;
	    	
  			for (int i = 0; i < numPlayers; i++)
   			{
    			for (int j = i+1; j < numPlayers; j++)
    			{
    				if (Score[i] == Score[j])
    					duplicate = Score[i];
   				}
   				
   			}
          	for (int i = 1; i < numPlayers; i++)
            {
            	if (Score[i] > max)
                {
                	max = Score[i];
                	a = i;  
          		}
          		
        	}
        	if (max == duplicate)
			{
				cout<<"                  There is no final winner!!!"<<endl;
				cout<<"               The game result is tie between:"<<endl;
				
				for (int i = 0; i < numPlayers; i++)
				{
					if (Score[i] == duplicate)
						cout<<"                          Player "<< i+1 <<endl;
				}
				cout<<endl<<endl;
			} 	
			else 
				cout<<"                          PLAYER "<< a+1 <<endl<<endl;
    	}     
}; 

#endif
