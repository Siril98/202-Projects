// Food

#include "Food.h"

Food::Food(){

  m_calories=0;
  m_taste="Bland";
  m_name = "None";
  m_color= "Clear";
}

Food::Food(string name){
  m_calories=0;
  m_taste="Salty";
  m_name = name;
  m_color= "Blue";
}

void Food:: Cook(){

  cout << m_name << "is cooking"<< endl;
  
}

void Food::DisposeOf(){
  cout<< "You threw out the " << m_name << endl;
}
