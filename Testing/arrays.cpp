//Arrays

#include <iostream>
using namespace std;

  
  
//double calcAverage(double scores[0],double scores[1]);
//double calcAverage(double scores[0],double scores[1]){
  
// return((scores[0]+scores[1])/2.0);
//}
double test(double num1, double num2, double num3);
double test(double num1, double num2, double num3){
  double average;
  cout<<"your average earned is:";
  average = ((num1+num2+num3)/3);

  switch(int average){

  case 90-100:
    cout<<"You have an A";
  }
  return average;
}

  
  


int main(){

  const int NUM_STUDENTS = 3;         // maximum number of scores
  int scores[NUM_STUDENTS] = { 0 };   // array to hold scores
  int numScores = 0;                  // actual number of scores
  int inputValue;                     // temporary input value
  
  cout << "Enter a score: ";  // prompt for input
  cin >> inputValue;                  // read from keyboard

  while ( inputValue >= 0 && numScores < NUM_STUDENTS) {
    scores[numScores] = inputValue;
    numScores++;

    cout << "Enter a score:";  // input
    cin >> inputValue;
  }                                                    // keyboard input
  //  cout<<scores[0]<<scores[1]<<scores[2]<<endl;
    
  
  // calcAverage(scores[0],scores[1]);
  
  cout<<test(scores[0],scores[1],scores[2])<<endl;
  //  printGrade();
  return 0;

}
