#include <iostream>
#include <string>
#include <set>

using namespace std;
int main(){

  set<string> setOfNumbers;

  setOfNumbers.insert("first");
  setOfNumbers.insert("second");
  setOfNumbers.insert("third");
  setOfNumbers.insert("fourth");
  

  cout<< "Set size" << setOfNumbers.size() <<endl;

  for(set<string>::iterator it = setOfNumbers.begin(); it!= setOfNumbers.end();++it)
    cout<<" " <<*it;
  cout << "\n";
  
    return 0;
}
