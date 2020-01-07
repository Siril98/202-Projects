// Filename Game.cpp for the exploding kittens game
// Author: Siril Pattammady
// File: Game.cpp
// Date: March 6, 2017
// Description:


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include "Game.h"


// Constructors

Game::Game()
{
  //Main Output
  cout << "MEOWMEOWMEOWMEOWMEOWMEOWMEOWMEOWMEOW" << endl;
  cout<<"Welcome to Exploding Kittens" << endl;
  string players;
  cout<< "A Game By";
  cin >> players;
  cout<<"MEOWMEOWMEOWMEOWMEOWMEOWMEOWMEOWMEOW"<< endl;

  // Function that sets number of users
  SetNumPlayers(m_numPlayers);
  // Function that shuffles the cards
  // Shuffle();
  LoadDeck(DECK_NAME);
  AddBombCards(BOMB_NAME);
  Shuffle();
  // Get Player num
  
  cout<< " It is Player turn "<< endl;
  //Asks user for what they want to do
  int action;
  cout<<"What would you like to do :"<< endl;
  cout<< "1. View Cards" << endl;
  cout<<"2. Play A Card" << endl;
  cout<<"3. Draw a card" << endl;
  cin>>action;
  
  
  //  do{
    switch(action){
    case 1:
      cout<<" You want to view" << endl;
      // Player::DisplayHand();
      break;
    case 2:
      cout<<"You want to Play A card" << endl;
      HandleCard();
      break;
    case 3:
      cout<<"You want to draw A card" << endl;
      DrawCard();
      break;
    }
    //}while(temp = 0);
}
// Sets the number of players that user wants to play
void Game::SetNumPlayers(int numPlayers){

  int min_players = 2;
  int max_players = 4;
  
  cout << "How many players would you like?"<< endl;
  cout << "Choose " << min_players << " - " << max_players << ":"<< endl;
  //  while(numPlayers > min_players and  numPlayers < max_players)
  cin >> numPlayers;

  m_numPlayers = numPlayers;
}

// Private Accessors
// Shuffles the cards that are currently in the deck
// Pre- A deck with at least 1 card
// Post - A deck with the elements suffled in a different order
void Game::Shuffle(){

  cout<<"Shuffling the cards " << endl;
  cout << "Shuffling in the exploding kittens!" << endl;
  int deck_size = m_deck.size();

  if(deck_size >= 1)
    {
      for(int i = 0; i <= deck_size; i++)
	{
	  srand(RAND_SEED);

	  int j = 1 + rand()%deck_size;
	  int k = 1 +rand()%deck_size;
	  
	  Card temp = m_deck[j];
	  m_deck[j] = m_deck[k];
	  m_deck[k] = temp;
	}
    }
}
// The action for the See into the future card
// A deck ifstream myfile;
// Will print the next 3 cards in the deck
//void Game::Peek(){

//int deck_size = m_deck.size();

//if(deck_size >= 1)
//  {
//    for(int i = 0; i < PEEK_NUM; i++;)
//	{
//	  cout << m_deck[i];
//	}
//  }
//}

// Gets the card on the top of the deck and gives it to a player
// Returns and deletes the top card on the deck
Card Game::DrawCard(){

  
  Card first_card = m_deck.at(0);
 
  m_deck.erase(m_deck.begin());

  return first_card;
    
}
  

// Handles the last card placed by the CurrentPlayer
// Precondition An integer number representing the Current Player
//              a card placed on the discard pile
// Postcondition - Handles the card according to their description
int Game::HandleCard(int curr_player){

  switch(curr_player){

  case 0:
    cout<< "Lost function" << endl;
    //HasLost();
    break;
  case 1:
    cout<< "defuse card" << endl;
    break;
  case 2:
    cout<< "attack " << endl;
    break;
  case 3:
    cout << "Skip turn function " << endl;
    
    break;
  case 4:
    cout << "See the future" << endl;
    //Peek();
    break;
  case 5:
    cout<<" Shuffle Cards" << endl;
    //Suffle();
    break;
  default:
    cout << "Regular Card" << endl;
    break;
  }
 

  return 0;
}
//Desc- loads the cards in from a text file
// Pre Conditions - A loaded deck, all players having cards
// Post Conditions - Determine winner and print to console
void Game::PlayGame(){

  int remaining_players;
  
  if(remaining_players == 1)
    cout << "The winner is Player" << endl;
  
}
//Desc - loads the cards in from a text file
//Pre- a valid filepath
//Post - m_deck contains cards
int Game::LoadDeck(string DECK_NAME){

  
  ifstream myfile;
  string line;
  myfile.open("deck.txt");

  
  int counter = 0;
  while(getline(myfile,line)){
    
    if (counter % 2 == 0)
      {
	int type = atoi(line.c_str());
      
	m_deck.push_back(Card(type,line));
	//	cout<< type << endl;
	
      }
    if(counter%2 !=0)
      {
	int type;
	m_deck.push_back(Card(type,line));
	//	cout<< line <<endl;
      }
    counter++;
    
  }      
  
  myfile.close();
  
  return 0;
  
}
//Desc- loads the bomb cards from a text file
// Pre- A vaild file path, the file must contain 1 less bomb
//        than the number of players
// Post - Adds the bomb cards to m_deck
int Game::AddBombCards(string BOMB_NAME){

  
  ifstream myfile;
  string line;
  myfile.open("bomb.txt");


  int counter = 0;
  while(getline(myfile,line)){

    if (counter % 2 == 0)
      {
	int type = atoi(line.c_str());
	m_deck.push_back(Card(type,line));
	//	cout<<type<<endl;
      }
    if (counter %2 !=0)
      {
	int type;
	m_deck.push_back(Card(type,line));
	//	cout << line << endl;
      }
    counter = counter + 1;
  }

  return 0 ;
}
