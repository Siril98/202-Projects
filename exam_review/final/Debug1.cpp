#include <iostream>
#include <string>
using namespace std;


class Insect{
public:

  virtual void Fly() =0;
  virtual void Eat() = 0;
  string GetName(){return m_name;}
  void SetName(string name){m_name = name;}

private:
  int m_numLegs;
  bool m_canFly;
  string m_name;
};

class Ladybug: public Insect{

public:

  Ladybug(){SetName("Ms. Ladybug");}
  void Fly();
  void Eat();
};

void Ladybug::Eat(){

  cout << GetName() << " eats " << endl;
}
void Ladybug:: Fly(){

  cout << "The" << GetName()<< "flew to a window."  << endl;
}

int main(){

  Ladybug red;
  Insect *red1 = &red;
  red1 -> Eat();
  red1 -> Fly();
  return 0;

  
}
