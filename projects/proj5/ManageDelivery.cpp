#include "ManageDelivery.h"
// File: ManageDelivery.cpp
// Project: CMSC 202 Project 5, Spring 2017
// Author: Siril Pattammady
// Class file for ManageDelivery.h file
// Date: 5/11/2017
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// Pre conditions - All Vectors are populated with objects
// This function manages the delivery by providing the related output
// Consists of the functions StartDeliver, DeliverItem, and DisplayItemLeft
// and ends program after all information is outputed


// Constructor for managing the deliveries.
// Once the data has been imported and split used to manage all additonal functions
// One vector for trucks
// One vector for deliveries
// One vector for items
ManageDelivery::ManageDelivery(vector< Truck <Item, MAX_CAPACITY> > truck,
			       vector< Delivery > delivery,
			       vector< Item > item){

  m_truck = truck;
  m_delivery = delivery;
  m_item = item;
  //Sets starting time at 0
  m_truck.at(0).SetTime(0);
  m_truck.at(0).GetTime();

  // Calls Functions in ManageDelivery
  cout << "" << endl;
  StartDelivery();
  cout << "" << endl;
  DeliverItem(0);
  cout << "" << endl;
  DisplayItemLeft();
  
}
//Name: StartDelivery
//Precondition: Requires truck, delivery, and items
//Postcondition: Loads items into a truck
//Additional information: All deliveries must be complete - you cannot split a
//single delivery into two trucks. A single truck can complete more than
//one delivery at a time.
void ManageDelivery:: StartDelivery(){

  int deliverySize= 0;


  //Loop that prints the name of the loading truck
  for(int i =0; i < 1; i++){   
    cout << "*****Loading" << m_truck.at(i).GetName()<< "*****" << endl;
  }  
  // Loop that gets the number of deliveries needed
  for(unsigned int i=0; i < m_delivery.size(); i++){
    deliverySize += m_delivery.at(i).GetNumItem();
  }
  //Loop that prints the items loaded into the truck
  for(int i = 0; i < deliverySize ; i++){
    m_truck.at(0).AddItem(m_item.at(0));
    m_truck.at(0).GetItem();
    cout << m_item.at(0).GetName() <<" loaded into " <<  m_truck.at(0).GetName()<<endl;
    m_item.erase(m_item.begin());
  }
}

//Name: DeliverItem
//Precondition: Requires that the truck has been loaded with deliveries and items
//Postcondition: Outputs the delivery information including truck name and items
void ManageDelivery :: DeliverItem(int j){

  // Loop that gets the name of current Truck that loads and adds 10 to the time
  for(unsigned int i =0; i < 1; i++){
    cout << "**Truck Name:" << m_truck.at(i).GetName()<< "**" << endl;
    j+=10;
  }
  int temp = 0;
  int num = 0;
  // Loops and prints out the deliveries for each item and person
  for(unsigned int i=0; i < m_delivery.size(); i++){
    cout << "***********Delivery " << temp+1 << "*************" << endl;
    if(j+j <= m_truck.at(num).GetCapacity()){
      m_truck.at(0).AddDelivery(m_delivery.at(i));
      m_truck.at(0).GetDelivery();
      cout << "Delivery Time: " << j+m_delivery.at(i).GetRTMinute()<<endl;
      cout << "Delivery for : " << m_delivery.at(i).GetName()<<endl;
      cout << "Delivered : " << m_delivery.at(i).GetNumItem()<<endl;
      j+=m_delivery.at(i).GetRTMinute();
      temp++;
    } 


    else{
      // If there is another truck in file and is able to deliver.
      // Loops back into original case
      for(int k =0; k <1; k++){
    	cout << "" << endl;
    	cout << "*****Loading " << m_truck.at(k+1).GetName() << "*****" << endl;
    	cout << "" << endl;
    	cout << "**Truck Name:" << m_truck.at(k+1).GetName()<< "**" << endl;
      }
      // Restarts cases for second truck
      // Starting time (j) set at 10 etc.
      j=10;
      i = i-1;
      num++;
      temp =0;
    }
  }
}
//Name: DisplayItemLeft
//Precondition: Requires that all trucks have been loaded
//Postcondition: Outputs (cout) each item not loaded into a delivery
void ManageDelivery :: DisplayItemLeft(){
  
  cout << "*****Items Left After Deliveries*****" << endl;

  // Prints out remaining items if any and their weight
  for(unsigned int i =0; i < m_item.size(); i++){
    cout<< "Item " << i+1 <<" - "<< "Name : " << m_item.at(i).GetName() << " - Weight: " << m_item.at(i).GetWeight() << endl;
  }
  // If there is no items remaining prints out this case
  if(m_item.size() == 0){
    cout << "No remaining items" << endl;
  }
  
}
