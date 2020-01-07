#include <iostream>
#include <limits>
using namespace std;


int testValid();

const int MIN_RANGE = 0;
const int MAX_RANGE = 100;


int main(){

  int num2 = 0;
  int num3 = 0;

  num2 = testValid();

  cout<< "Testing buffers" << endl;
  cin>>num3;
  cout << "num3 : " << num3 << endl
  return 0;
}

int testValid(){

  int num = 0;

  while( ( cout << "Enter a number between" << MIN_RANGE << " and  " << MAX_RANGE << ":" <<endl) &&
	(!(cin >> num)) ||
	(num < MIN_RANGE) ||
	 (num> MAX_RANGE)){

    cin.clear(); // Clear bad input flag
    cin.ignore(numeric_limits<streamsize>::max(), '\n');//discards input
    cout << "Invalid INput" << endl;
  
  }
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  return num;
} 
	
	
