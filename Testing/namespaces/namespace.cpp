#include <iostream>
using namespace std;



namespace first_space{
  
  namespace inside_first{
    void func(){
      cout << "Inside inside_space" << endl;

    }
  }
  void func(){
    cout << "Inside first_space" << endl;

      }
  void func(int num){
    cout << "This is in first space " << num << endl;
  }
}

namespace second_space{


  void func(){

    cout << "The second " << endl;

  }
}

int main(){

  first_space::func(4);
  second_space::func();
  first_space::inside_first::func();
  return 0;

}
