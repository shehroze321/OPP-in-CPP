#include <iostream>
using namespace std;


int power(int baseNum, int powernum){
   int result=1;
   for( int i=0; i <powernum; i++){
     result = result * baseNum; 
   }
   return result;
 }


int main() {

  cout << power(2,3);

 



  return 0;
}
