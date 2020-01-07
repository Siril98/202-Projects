// GEtting file input from usrer

#include <iostream>
#include <fstream>
#include<string>
using namespace std;


int main(){

  ifstream inputStream;
  ofstream outputStream;
  
  char filename[80];
  int id;
  string name;
  double money;
  
  cout<<"What is your file"<<endl;
  cin>> filename;

  inputStream.open(filename.c_str());
  outputStream.open(filename.c_str());
  
  
  

  return 0;
}

