#include <iostream>
#include <list>

using namespace std;
int main(){

  //way without using namesapce std::
  list<int>first;//Empty
  list<int>second(4,100); //Creates 4 ints with value 100
  list<int>third(second.begin(),second.end());

  //Array
  int myints[] = {10,24,44,11};

  list<int>fifth(myints, myints+sizeof(myints)/sizeof(int));
  cout << "the contents of fifth are : " ;
  for(list<int>::iterator it = fifth.begin(); it!= fifth.end(); it++){
    cout << *it << ", " ;

  }
  cout << endl;
  //Using reverse_terator
  list<int>fifth(myints, myints+sizeof(myints)/sizeof(int));
  cout << "the contents of fifth are : " ;
  
  for(list<int>::reverse_iterator it = fifth.begin(); it!= fifth.end(); it++){
    cout << *it << ", " ;

  }
  cout << endl;
  
  return 0;
}
