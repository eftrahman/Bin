#include <iostream>
using namespace std;

// first name space
namespace first_space {
   void xyz() {
      cout << "first_function" << endl;
   }
}

// second name space
namespace second_space {
   void xyz() {
      cout << "second_function" << endl;
   }
}

int main () {
   // Calls function from first name space.
   first_space::xyz();

   // Calls function from second name space.
   second_space::xyz();

   return 0;
}
