//
// Author : Siril Pattammady
// Date March 1, 2017
// Description : Function for the Player.h file
//

#include<iostream>
#include "Player.h"
using namespace std;

// Default Constructors
Player::Player()
{
}


// Overloaded Constructor
Player::Player(string name)
{
  m_name = name;
  m_lost = false;
  m_extraTurn = false;
  vector<Card> m_hand;
}

// Function for moving a card from a players hand to discard
// Returns a card from the hand and deletes it from array
Card Player::PlayCard(){

  int input;
  cout << "Choose a card: " <<endl;
  cin >> input;
  Card played_card = m_hand.at(input);
  
  m_hand.erase(m_hand.begin() +input);

  return played_card;
  

}
// Function where a player steals card from another player
// Returns and deletes the card at index i
Card Player::LoseCard(int index){

  Card card_index = m_hand.at(index);
  m_hand.erase(m_hand.begin() +index -1);

  return card_index;
	
}

// Checks to see if player has cards
// Returns true if player has cards, false otherwise
bool Player::HasCards(){
  
  int size;
  size = (int) m_hand.size();
  if(size >= 1)
    {
    return true;
    }
  else
    {
    return false;
    }
}


//Checks to see if player has lost
bool Player::HasLost(){

  m_lost = true;
  
  return m_lost;
  
}
//Checks to see if player has extra turn
bool Player::HasExtraTurn(){

  m_extraTurn = true;

  return m_extraTurn;
    
}
// Function that adds a card to players hand
// Also detects if player drew a bomb
//int Player::AddToHand(Card drew){

  // int size_hand = (int)m_hand.size();
    
// m_hand.push_back(drew);
  
  //CHECK IF PLAYER DREW BOMB
// int bomb = 0;
 

//for( unsigned int i = 0; i < m_hand.size(); i++)
//  {
//     if (m_hand[i] == 0)
//     {
//	 return bomb;
//     }
//  }  
//}

//Function to get the name of the player
// Returns name
string Player:: GetName(){

  
  string name = m_name;;
  
  return name;

}
// Function that prints out the cards in hand
void Player::DisplayHand(){

  int len_hand = (int)m_hand.size();
  
  for(int i = 0; i < len_hand; i++)
    {
      cout<< i << "." << m_hand.at(i).ToString()<<endl;
    }
}

// Returns the number of cards in the players hand
int Player::GetNumberOfCards(){

  int numCards;

  numCards = (int) m_hand.size();

  return numCards;
}
// Returns the bomb card the player drew in the event of a defusa1
Card Player ::ReturnBomb(){

  Card ReturnBomb =  m_hand.at(m_hand.size() -1);

  return ReturnBomb;
  
}
 
//Sets if the player lost or not
void Player::SetLost(bool lost){

  m_lost = lost;
  
  lost = true;

}
// Sets if the player was attacked or not
void Player::SetExtraTurn(bool attacked){

  m_extraTurn = attacked;
  
  attacked = true;

}
