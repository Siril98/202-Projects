// Testing to make grid using for loops


#include<iostream>
using namespace std;



int main(){



  char grid[10][10];

  for(int i=0; i<10; ++i){

    for(int j=0; j<10; ++j){

      grid[i][j] = '_';

      cout<<grid[i][j];
      cout<<' ';
    }
    cout<<"\n";
    
  }
  cout<< endl;
  return 0;
}
