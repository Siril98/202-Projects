#include "Movie.h" "Animated.h" "LiveAction"

int main(){

  Movie* movie1 = new Movie("Stop Talking While LiveCoding", 100 , "Jeremy Dixon");

  movie1->ShowMovie();

  Movie* animated1 = new Animated("Dumbo - Livecoding", 31 , "Donald Trump");
  animated1 -> ShowMovie();

  Movie* liveaction1 = new LiveAction("Loving CS UMBC", 99 , "eLL");
  liveaction1 -> ShowMovie();
  
  delete movie1;
  delete animated1;
  
  movie1 = NULL;
  animated1 =NULL;
  return 0;
}
