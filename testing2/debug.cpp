// Practice for using the built in debugger

#include <iostream>
using namespace std;

//Takes in a number and loops through and adds the number to the total.
//If i = 10 and num = 10 then it should print 0+0+1+2+3+4+5+6+7+8+9=55


int addLoop(int num);

int main() {
  int total = 0; //Set total to 0
  total = addLoop(10); //Call addLoop with a literal of 10
  cout << "New total is: " << total << endl; //Print output
  return 0;
    }

int addLoop(int num){
  for(int i = 0; i < num; i++) { //Loop 10 times
    num += i; //Add i to num
  }

  return num;
}

