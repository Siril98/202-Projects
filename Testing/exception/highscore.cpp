#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::endl;
using std::ifstream;


class FileIOError{};


int getHighScore() throw (FileIOError){

  ifstream f;

  int high = -1;

  f.open("score.txt");

  // If fails throws to catch statement in main
  if(f.fail()){
    throw FileIOError();

  }
  int num;
  f>>high;

  while(f>>num){
    if(num>high)
      high = num;
  }
  f.close();
  return high;
}

int main(){

  try{

    int highscore= getHighScore();
    cout<<"The high score is  " << highscore << endl;
    
  }
  
  catch(FileIOError)
    {
      cout<< "Could not open the file scores" << endl;

    }
    

  return 0;
}
