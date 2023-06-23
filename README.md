# **HACKATHON 2   GROUP 25**
#
### GROUP MEMBERS:
#### NUR FATIN AINA BINTI MOH AMIR      160353
#### NURUL LIYANA BINTI IDRIS           160438
#### SITI ANISAH BINTI NOOR JAMIN       160408
#
## DESCRIPTION
A text-based game, sometimes referred to as interactive fiction, is a game in which all player interaction occurs through words displayed on the screen. Therefore, as the game can be played through a web browser, users do not need to install anything in order to play.
In our project, the game is implemented using a linked list, and we presented it with the name, Guess the Word Game. In the multiplayer "Guess the Word" game, players have to guess the word based on the theme and the number of empty spaces. Vegetables have been selected as the game's theme. As a result, the participants have to give answers that are related to vegetables like cauliflower, onion, and many more. Additionally, in each game, players could determine how many rounds to play. Therefore, each player must guess the word according to the chosen number of rounds in a single game. Player with the highest score will be the winner.
This game aims to offer an entertaining and educational experience as it includes knowledge of languages, strategic thinking, and friendly competition. Furthermore, players of all ages can enjoy this game, not just children.
#
## FEATURES
##### a)	**Start game** – Players have the option to start the game or not by typing 'Y' or 'N'.
##### b)	**Multiplayer mode** – By taking turns providing the answers, players can compete against one another. 
##### c)	**Flexible game round** – In each game, players can decide how many rounds they want to play. 
##### d)	**Hint system** – The number of blank spaces used to indicate the answer's word length serves as the hint.
##### e)	**Educational element** – The game is about different kinds of vegetables. As a result, it might expand the players' vocabulary.
##### f)	**Scoring** – Each round, those who correctly answer will receive one score.
##### g)	**Score tracking** – Based on the correct answer, the game evaluates each player's score for each round. 
##### h)	**Leaderboard** – At the end of the game, the leaderboard will display the highest scores all players received, and this will determine how the winner is decided.
##### i)	**Game over** – The decision to continue on playing the game or quit was up to the players.
#
## HOW TO PLAY THE GAME ?
##### i.	Do you want to play the game?
#####      a)	‘Y’ / ‘y’: Start the game.
#####      b)	‘N’ / ‘n’: End the game.
##### ii.	Enter number of players.
##### a)	If (number of players > 0): accept.
##### b)	Else: reject and ask user to enter again
##### iii.	Enter players’ names.
##### iv.	Initialize the number of rounds in a single game.
##### v.	While (Round <= number of round)
##### a)	Players will take turns to guess the random word.
##### b)	If (correct): the player obtains one score.
##### Else: does not obtain score.
##### c)	Leaderboard for the round is display.
##### vi.	When the round finish, the programme will display whether the game has a winner or end up with a tie.
##### vii.	Player can choose either to continue the game or end it.
##### a)	‘Y’ / ‘y’: Start new game.
##### b)	‘N’ / ‘n’: End the game.
#
## HOW OBJECT-ORIENTED CONCEPTS WERE USED ?
#
## HOW LINKED LIST PLAY A ROLE ?
For the linked list, we create a class name Wordlist that contains all the operations of the linked list. In the private part of this class, we create a struct named Node to declare the word and the pointer next. In addition, there is also a pointer head. On the other hand, for the public part, there are two functions and one constructor. The first function named addWord. The parameter of this function is obtained from the text file created name “Vegetables”.  This function works to append new word onto the last node of the linked list. Not only that, this function contains two pointers which are newNode and current. Next, the second function is getRandomWord that will randomize the word that will be used during the guess game. Furthermore, this function has one pointer current. This function also required rand () function that will generate random number.   
# 
## GAME DEMO VIDEO
Link : 
