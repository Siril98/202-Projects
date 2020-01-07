// using the new command


#include<iostream>
using namespace std;


class IntArray {
private:
  int *m_array;
  int m_length;

public:
  IntArray(int length) // constructor
  {
    m_array = new int[length];
    m_length = length;
  }



  ~IntArray() // destructor
  {
    cout << "IntArray destructor is firing" << endl;
    // Dynamically delete the array we allocated
    delete[] m_array;
  }

  //Member function definitions
  void setValue(int index, int value) {
    m_array[index] = value; }
  int& getValue(int index) { return m_array[index]; }


  int getLength() { return m_length; }
};

int main()
{
  IntArray arr1(10); // allocate 10 integers
  for (int count = 0; count < 10; ++count)
    arr1.setValue(count, count+1);

  cout << "The value of element 3 is: " << arr1.getValue(3) << endl;

  return 0;
} // ar is destroyed here, so the ~IntArray() destructor function is called here









 
 
 
 
 



 
 
 
 
 
 

 
 
 
 


 
 
 
 

 