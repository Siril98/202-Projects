#include <iostream>
#include <cstring>


class rule_of_three{

public:
  
  rule_of_three(){
    std::cout << "Defualt Constructor" << std::endl;
    m_cstring = NULL;
    
  }
  rule_of_three(char* arg){
    m_cstring = arg;
  }

  rule_of_three(const rule_of_three& arg)
 
    :m_cstring(new char[std::strlen(arg.m_cstring)+1]){
    //Copying original to new version
    std::cout << "R.O.T Copy constructor " << std :: endl;
    std::strcpy(m_cstring, arg.m_cstring);
  }
  //Destructor
  ~rule_of_three(){

    delete [] m_cstring;
    
  }
  //Getter
  char* GetString(){return m_cstring;}

  //Assignment operator
  rule_of_three& operator = (const rule_of_three & other){
    
    char * temp = new char[std::strlen(other.m_cstring)+1];
    std::strcpy(temp, other.m_cstring);
    delete [] m_cstring;// Delete data to make sure u dont add reminent data
    m_cstring = temp;

    return *this;
    
  }
private:

  char *m_cstring;

};

int main(){

  rule_of_three test1 = "UMBC RULES"; // Which function is this calling ? ----- 

  std::cout << "test 1 = " << test1.GetString() << std::endl;

  rule_of_three test2; // Which function is this calling
  std::cout << "test 2 = " << test2.GetString() << std::endl;
  

  test2 = test1;// Which will this call
  std::cout << "test 2 = " << test2.GetString() << std::endl;

  rule_of_three test3 (test1); // Which function this call?
  std::cout << "test 3 = " << test3.GetString() << std::endl;
  
  rule_of_three test4 ("test3"); // Which function this call?
  std::cout << "test 4 = " << test4.GetString() << std::endl;

  
  
  
  
  return 0;

}
