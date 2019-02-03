#include <iostream>
using namespace std;
int main () {
   // local variable declaration:
   string status;



   cout<<"ENTER:- "<<endl;
   cin >> status;

   if( status == "dirty" ) {
      cout << "SUCK" << endl;
   } else if( status == "locationA" ) {
      cout << "move left" << endl;
   } else if( status == "locationB" ) {
      cout << "move right" << endl;
   } else {

      cout << "not matching" << endl;
   }
   return 0;
}
