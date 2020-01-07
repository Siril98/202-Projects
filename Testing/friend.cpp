#include "Box.h"


void PrintWidth(Box box){


  cout<< "Width of Box:" << box.m_width << endl;

}

int main(){


  Box box;

  box.SetWidth(10.0);

  PrintWidth(box);
    


  return 0;
}
