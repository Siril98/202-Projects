// Pointer practice




#include <iostream>
using namespace std;


void values(int *Ix, int *Iy,int *Tx,int *Ty );
void values(int *Ix, int *Iy,int *Tx,int *Ty ){

  cout << "Invester X"<<endl;
  cin >> *Ix;
  *Ix = *Ix+1;
    
  cout << "Invester y"<<endl;
  cin >> *Iy;
  cout << "TargetX"<<endl;
  cin >> *Tx;
  cout << "TargetY"<<endl;
  cin >> *Ty;
  
}


int main(){

  int investX = 0;
  int investY = 0;
  int targetX = 0;
  int targetY = 0;

  int *pointerIx = &investX;
  int *pointerIy = &investY;
  int *pointerTx = &targetX;
  int *pointerTy = &targetY;

  cout<<investX<<investY<<targetX<<targetY;
  
  values(pointerIx, pointerIy, pointerTx, pointerTy);
  
  cout<<investX<<investY<<targetX<<targetY;
  
  return 0;
}
