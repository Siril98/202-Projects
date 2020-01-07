// File: driver.cpp
// Project: CMSC 202 Project 4, Spring 2017
// Author: Siril Pattammady
// Class file for driver.h file
// Date: 4/27/2016 
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// Driver file that ouputs the menus for the user
// Also consists of functions that manages inpur validation
// Calls main to other classes and objects
#include "driver.h"

//Title: menu
//Pre: None
//Post: Displays the first menu (1. Plant Single Item to 4. Exit)
void Menu(){

  
  cout << "Welcome to the Garden" << endl;
  cout << "1. Plant Single Item" << endl;
  cout << "2. Plant Many of the Same Item" << endl;
  cout << "3. Plant a Full Garden" << endl;
  cout << "4. Exit" << endl;
}

//Title: manageMenu(Garden)
//Pre: Garden
//Post: Manages user input and calls corresponding function
void manageMenu(Garden& garden){

  //Input Validation/ Getting user input for options
  int option;
  cout<< "Enter 1-4:" << endl;
  cin>>option;
  while( option < 1 or option > 4){
    cout << "Invalid option, try again" << endl;
    cin.clear();
    cin>>option;
  }

  //Switch statements for cases
  switch(option){

  case 1:
    //Single Item
    singleGarden(garden,option);
    break;
  case 2:
    //Many of the same item
    singleGarden(garden,option);
    break;
  case 3:
    //Plant a full garden
    manyGarden(garden);
    break;
  case 4:
    //Exit with nothing saved
    cout<< "You have exited the Garden" << endl;
    break;
  default:
    cout<<"Invalid choice, please try again" << endl;
    break;
    
  }
}
//Title: singleGarden(Garden)
//Pre: Garden - 1 for single plant, >1 for multiple plants
//Asks user what type of plant and quantity of plants
//Post: Calls addPlant and then simulateTime  
void singleGarden(Garden& garden, int quantity){

  // amount variable for how many user would like to plant
  int amount;

  //Getting valid input from user for plantMenu()
  int type;
  plantMenu();
  cin>>type;

  while(type > 3 or type<1){
    cout<< "Invalid choice please try again" << endl;
    cin.clear();
    cin>>type;
  }
 
  //Calls addPlant and then simulateTime
  if(quantity == 1){
    
    garden.addPlant(type,quantity);
    simulateTime(garden);
  }
  else{
    cout << "How many would you like to plant" << endl;
    cin >> amount;
    garden.addPlant(type,amount);
    simulateTime(garden);
  }
}
//Title: manyGarden(Garden)
//Pre: Garden
//Asks user how many of each plant to plant (Flower, Vegetable, Tree)
//Post: Calls addPlant and then simulateTime
void manyGarden(Garden& garden){

  //Integer variables for amount of each plant desired from user
  int numFlowers;
  int numVeg;
  int numTree;

  //For amount of Flowers
  cout << "How many flowers would you like to plant?" << endl;
  cin>> numFlowers;
  garden.addPlant(1,numFlowers);

  //For amount of Vegetables
  cout<< "How many vegetables would you like to plant?" << endl;
  cin>> numVeg;
  garden.addPlant(2,numVeg);

  //For amount of Trees
  cout << "How many trees would you like to plant? " << endl;
  cin>> numTree;
  garden.addPlant(3,numTree);

  simulateTime(garden);
    
}
//Title: plantMenu
//Pre: None
//Post: Displays the menu of different types of plants (Flower, Vegetable, Tree)
void plantMenu(){
  
  
  cout << "What would you like to plant?" << endl;
  cout << "1. Flower" << endl;
  cout << "2. Vegetable" << endl;
  cout << "3. Tree" << endl;
 
  
}
//Title: simulateTime(Garden)
//Pre: Garden with plants and asks user how many months to simulate
//Post: Calls the garden.tick and passes it the number of months
void simulateTime(Garden& garden){

  //Asks user for how many months they would like to simulate
  int numMonths;
  cout<< "How many months would you like to simulate?" << endl;
  cin>> numMonths;
  garden.tick(numMonths);
  
}
int main(){

  //Creating garden object
  //Calling Menus that will run through program
  Garden garden;
  Menu();
  manageMenu(garden);
  
  return 0;
}
