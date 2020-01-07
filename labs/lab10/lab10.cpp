#include <iostream>
#include "IntArray.h"

using namespace std;

int main()
{
  // Create IntArray objects and call methods here...
  IntArray ia(10);

  IntArray neg(-1);
  
  IntArray zero(0);

  ia.Get(-11);
  ia == zero;
  ia!= neg;
  ia + zero;
  ia+= zero;
  zero.Append(-100);
  ia.Insert(-1,2);
  ia.Del(-1);
  ia.SetItem(-1,-2);
  ia.Remove(1);

  ia[-1];
  // Print out the number of errors/edge cases found
  cout << endl << endl << IntArray::GetProgress() << endl;
    
  return 0;
}
