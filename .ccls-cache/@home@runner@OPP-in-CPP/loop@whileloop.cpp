#include <iostream>
using namespace std;





int main() {

  int seretNum=8;
  int guess;
  int gussCount=0;
  int gussLimit=4;
  bool outOfGuss=false;

  while(seretNum != guess && !outOfGuss){
    if(gussCount<=gussLimit){
      cout <<"Enter the Guss"<< endl;
    cin >> guess;
    gussCount ++;
    }else{
      outOfGuss= true;
    }
    
  }

  if(outOfGuss){
    cout<<"You lose";
  }else{
      cout << "You win";

  }



  return 0;
}
