#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>
using namespace std;


int main()
{
  //  string bomb;
  ifstream myfile("bomb.txt");

  int num;
  
  char cards[40];
  
  // string name;
 
  while (myfile.getline(cards,40)){
    
    num = atoi(cards);
  
    //    while (myfile.getline(cards,40)){
      // num = atoi(cards);
      cout << num << " : " << cards << endl;
    
    
  }
  
  
  return 0;
}
