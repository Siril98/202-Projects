#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Movie{

 public:
  //Constructor
  Movie(string name, int rating, string director);

  //Funton
  virtual void ShowMovie();
  
 private:

  string m_name;
  int m_rating;
  string m_director;
};
  





#endif
