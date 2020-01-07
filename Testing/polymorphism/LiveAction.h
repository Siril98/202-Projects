#ifndef LIVEACTION_H
#define LIVEACTION_H
#include "Movie.h"

class LiveAction: public Movie{

 public:

 LiveAction(string name, int rating, string director):
  Movie(name, rating, director){};
  void ShowMovie();
  
 private:

  int m_length;
  

};
#endif
