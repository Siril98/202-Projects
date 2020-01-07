// Siril Pattammady
// Lab2


#include<iostream>
using namespace std;




int main(){

  const int NUM_STUDENTS = 3;
  int scores[NUM_STUDENTS] = {0};
  int numScores = 0;
  int inputValue;

  cout<<"Enter your score:";
  cin>> inputValue;

  while ( inputValue >= 0 && numScores < NUM_STUDENTS) {
    scores[numScores] = inputValue;
    numScores++;

    cout << "Enter your score: "; 
    cin >> inputValue;
    
  }


  
  return 0;
}
