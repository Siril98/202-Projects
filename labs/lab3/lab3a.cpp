// lab3a


#include <iostream>
#include <string>
using namespace std;


void quaff(int &quaff);
void quaff(int &quaff){

  quaff = quaff + 2;
  cout<< "You have quaffed the potion"<< endl;
  cout<< "You have" << quaff << "hit points"<< endl;
}


int main(){

  int hp = 10;

  string potion;
  
  cout<< " You have" << hp << "hit points" << endl;

  cout<< "What would you like to do ?"<< endl;
  
  getline(cin,potion);

  if(potion == "quaff potion")
    quaff(hp);


  return 0;
}





