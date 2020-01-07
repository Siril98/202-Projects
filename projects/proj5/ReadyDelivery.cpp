#include "ReadyDelivery.h"
// File: ReadyDelivery.cpp
// Project: CMSC 202 Project 5, Spring 2017
// Author: Siril Pattammady
// Class file for ReadyDelivery.h file
// Date: 5/11/2017
// Lab Section: 13
// E-Mail: psiril1@umbc.edu
// Description:
// Class designed to load certain files into their designated vector
// Reads in any proj5_ delivery, item, and truck file
// Load functions reads in the certain file and creates object
// to be push backed or added into given vectors


//Name: ReadyDelivery() and ReadyDelivery(string, string)
//Precondition: Requires 3 files: a truck file, a deliveries file and an item file
//Postcondition: Populates three vectors
ReadyDelivery:: ReadyDelivery(){

}
ReadyDelivery :: ReadyDelivery(string truckFile, string deliveryFile, string itemFile){

  m_truckFile = truckFile;
  m_deliveryFile = deliveryFile;
  m_itemFile = itemFile;
  //Calls functions below 
  LoadTruck();
  LoadDelivery();
  LoadItem();
}

//Name: LoadTruck
//Precondition: Requires a truck file
//Postcondition: Builds a vector of delivery trucks
//Trucks: Holds items
void ReadyDelivery::LoadTruck(){

  // Opens and read in file as a c string 
  ifstream truckFile(m_truckFile.c_str());
  //Variables that store particular values from file
  string truck;
  int capacity;
  int size = 0;
  // Loops till end of file and adds truck templated objects into truck vector
  while(truckFile >> truck >> capacity){

    size++;
    Truck<Item,MAX_CAPACITY> T(truck, capacity);
    m_truck.push_back(T);
    
  }
  cout <<"Trucks loaded : " << size << endl;
  //Closes file
  truckFile.close();
}
//Name: LoadDelivery
//Precondition: Requires a delivery file
//Postcondition: Builds a vector of deliveries
void ReadyDelivery :: LoadDelivery(){

  // Opens and reads file as a c-string (delivery file)
  ifstream deliveryFile(m_deliveryFile.c_str());
  //Variables that store in particular values from file
  string names;
  int numItems;
  int trip;
  int size = 0;
  // Loop that adds delivery objects into delivery vector
  while(deliveryFile >> names >> numItems >> trip){
    size++;
    Delivery D(names, numItems, trip);
    m_delivery.push_back(D);
    
  }
  cout << "Deliveries Loaded : " << size << endl;
  deliveryFile.close();
}
//Name: LoadItem
//Precondition: Requires an item file
//Postcondition: Builds a vector of items
void ReadyDelivery :: LoadItem(){

  // Opens and reads file as a c-string (item file)
  ifstream itemFile(m_itemFile.c_str());
  // Variables that store in values from file
  string items;
  double weight;
  int size = 0;

  // Looop that adds Item objects into item vector
  while(itemFile >> items >> weight){
    size++;
    Item I(items,weight);
    m_item.push_back(I);
  }
  cout << "Items Loaded : " << size << endl;
  itemFile.close();
  
}
//Name: GetTruck
//Precondition: Requires that a truck has been built
//Postcondition: Returns a vector of all trucks
vector<Truck<Item, MAX_CAPACITY> >& ReadyDelivery::GetTruck(){

  return m_truck;
  
}
//Name: GetDelivery
//Precondition: Requires that a delivery has been built
//Postcondition: Returns a vector of all deliveries
vector<Delivery> ReadyDelivery::GetDelivery(){

  return m_delivery;
}
//Name: GetItem
//Precondition: Requires that an item vectors has been built
//Postcondition: Returns a vector of all items
vector<Item>  ReadyDelivery::GetItem(){

  return m_item;
}


