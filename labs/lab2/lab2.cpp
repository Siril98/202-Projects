// Siril Pattammady
// lab 2


#include<iostream>
using namespace std;


double calcAverage(double num1, double num2, double num3);
double calcAverage(double num1, double num2, double num3){

  double average;
  cout<<"Your average is:";
  average = ((num1 + num2 + num3)/3);
  cout<<average<<endl;
  

  int letter = average/10;

  switch (letter){
  case 10:
    
    cout<<"You got an A";
    break;
  case 9:
    cout<< "You got an A";
    break;
  case 8:
    cout<< "You got a B";
    break;
  case 7:
    cout<<"You got a C";
    break;
  case 6:
    cout<<"You got a D";
    break;
  case 5:
    cout<<"You got an E";
    break;
  } 
   
  return average;
  return letter;
  
}

int main(){

  const int NUM_STUDENTS = 3;
  int scores[NUM_STUDENTS] = {0};
  int numScores = 0;
  int inputValue;

  cout<< "Enter your score : ";
  cin>> inputValue;

  while ( inputValue >= 0 && numScores < NUM_STUDENTS-1) {
    scores[numScores] = inputValue;
    numScores++;

    cout << "Enter your score : ";  
    cin >> inputValue;
    
  }

  calcAverage(scores[0],scores[1],scores[2]);
  return 0;

}
