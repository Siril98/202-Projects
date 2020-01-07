#include <iostream>

using namespace std;
//Example of recursion

void infinite(int num){
  if(num > 392300)
    cout<< num << endl;
  else{
    cout << num << endl;
    infinite(num+1);
  }
  
}
int main(){
  infinite(1);
  return 0;
}
