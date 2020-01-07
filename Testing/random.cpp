// Test random

#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  srand(time(NULL));
  srand(10);
  cout << rand() << endl;
  cout << time(NULL) << endl;
  cout << rand()%(10-1)+1;
  
  return 0;
}
