// File that uses file i/o

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

  char filename[86];
  cout<< "what is your input" << endl;
  cin>> filename;
  
  fstream theFile(filename);

  int id;
  string name;
  double money;

  while(theFile >> id >> name >> money){

    cout<< id <<", "<< name << ", "<< money << endl;
  }

   
  return 0;
}
