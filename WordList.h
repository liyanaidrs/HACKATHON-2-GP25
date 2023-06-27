#ifndef WORDLIST_H
#define WORDLIST_H
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;

class WordList	//linked list class
{
	private:
  		struct Node
		{
  			string word;
  			Node *next;
			Node(const string &newWord) : word(newWord),next(nullptr){}
		};
		Node *head;  

	public:
    	WordList() : head(nullptr){}	//constructor

    	void addWord(const string &newWord)	//add word into linked list
    	{
    		Node *newNode = new Node(newWord);

      		if (head == nullptr)
        		head = newNode;
      		
      		else
      		{
        		Node* current = head;
        		
            	while (current->next != nullptr)
                	current = current->next;
                	
            	current->next = newNode;
      		}
    	}
    	
    	string getRandomWord()	//to get a random word
    	{
          	if (head == nullptr)
            	return "";

          	int count = 0;
          	Node* current = head;
          	
          	while (current != nullptr)
      		{
              	count++;
              	current = current->next;
          	}

          	int randomIndex = rand() % count;
          	current = head;
          	
          	for (int i = 0; i < randomIndex; ++i)
              	current = current->next;

          	return current->word;
      	}
};

#endif
