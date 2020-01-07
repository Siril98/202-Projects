#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main(){

  ifstream file;
  string truck;
  int capacity;

  //  vector <string> Main;
  //vector< int> Main1;

  vector << string , int> > m_truck;
  file.open("proj5_truck_t1.txt");

  while(file >> truck >> capacity){

    cout << "The truck" << " "<<truck << "has capacity" <<" " << capacity << endl;
    // Main.push_back(truck);
    // Main1.push_back(capacity);
    m_truck.push_back(truck,capacity);
  }
  // for(unsigned int i = 0; i < Main.size(); i++){
  // cout << Main[i] << endl;
  // }
  return 0;
}
