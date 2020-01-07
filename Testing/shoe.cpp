#include "Shoe.h"

Shoe::Shoe(int size,string brand, string color){
  m_size = new int(size);
  m_brand = new string (brand);
  m_color = new string (color);
    
  
}
Shoe::~Shoe(){
  delete m_size;
  m_size = NULL;

  delete m_brand;
  m_brand = NULL;

  delete m_string;
  m_string = NULL;
}
