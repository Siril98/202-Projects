// Call by referencing

#include <iostream>
using namespace std;


void Swap(int &n, int &n2);
void Swap(int &n, int &n2){

  int new_num;
  
  new_num = n;
  n = n2;
  n2 = new_num;
  
}


int main(){

  int num = 10;
  int num2 = 20;
  cout<< num << endl;
  cout << num2 << endl;
  
  swap(num,num2);
  cout << num << endl;
  cout << num2 << endl;
  
  



  return 0;
}





