// File: Sequencer.cpp
// Project: CMSC 202 Project 3, Spring 2017
// Author: Siril Pattammady
// Class file for Sequencer.h file
// Date: 3/30/2017
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Refers to DNA class and calls functions located in the DNA.cpp file.
// Reads file of characters (A,T,G, or C)to pass to DNA functions for insertion
// and displaying. Consists of switch statements for user input and verifies that user
// enters a valid input by repromting user.



#include "Sequencer.h"
#include "DNA.h"
#include <string>
//name: Sequencer (default constructor)
//pre: A linked list (DNA) is available
//post: A linked list (DNA) where m_head and m_tail points to NULL
// Calls readFile and mainMenu
Sequencer::Sequencer(string fileName){
  cout<<"New Sequencer Loaded" << endl;
  //From Header file
  m_dna = DNA();
  m_fileName = fileName;

  // Calls Readfile
  readFile();
  //Calls Menu Function
  mainMenu();
  
}
//name: Sequencer (destructor)
//pre: There is an existing linked list (DNA)
//post: A linked list (DNA) is deallocated (including nucleotides) to have no
//memory leaks!
Sequencer::~Sequencer(){


}
//name: readFile
//pre: Valid file name of characters (Either A, T, G, or C)
//post: Populates the LinkedList (DNA)
void Sequencer::readFile(){

  
  cout<< "Reading" << endl;
  ifstream file;
  char line;
  
  file.open(m_fileName.c_str());
  while(file>>line){
    m_dna.InsertEnd(line);
  }
  file.close();
  

  
}
//name: mainMenu
//pre: Populated LinkedList (DNA)
//post: None
void Sequencer::mainMenu(){
  
    int choice;

    //Loop for user input and exits when enters case:5
    while(choice !=5){
    cout << "What would you like to do? :" << endl;
    cout << "1. Display Sequencer (Leading Strand)" << endl;
    cout <<"2. Display Sequencer (Base Pairs)" << endl;
    cout <<"3. Inventory Basic Amino Acids" << endl;
    cout <<"4. Sequence Entire DNA Strand" << endl;
    cout <<"5. Exit " << endl;
    cin >> choice;

    //Switch statements based on while loop and what the user wants to do
    //Exits when user hits 5 and reprompts if invalid int is entered.
    switch(choice){
      
    case 1:
      cout<<"Leading Strand:" << endl;
      m_dna.Display(1);
      cout<<"END"<<endl;
      m_dna.SizeOf();
      break;
    case 2:
      cout<<"Base Pairs:"<< endl;
      m_dna.Display(2);
      cout<<"END"<<endl;
      m_dna.SizeOf();
      break;
    case 3:
      m_dna.NumAmino("Tryptophan","TGG");
      m_dna.NumAmino("Phenylalanine","TTT");
      break;
    case 4:
      cout<<"Amino Acid List:"<<endl;
      m_dna.Sequence();
      break;
    case 5:
      cout<< "DNA removed from memory" <<endl;
      m_dna.Clear();
      return;
    default:
      break;
    }
      
    }
}