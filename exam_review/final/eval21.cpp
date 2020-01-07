#include <iostream>
using namespace std;

class Base{

public:
  virtual void display(){
    cout << "Base class \n";
  }
};

class Derived : public Base{

private:

  virtual void display(){

    cout<< "Derived class \n";
  }
};

int main(){

  Base *base;
  Derived derived;

  base = &derived;
  base -> display();
  
  return 0;
}
