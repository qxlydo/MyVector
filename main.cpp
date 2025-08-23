
#include <iostream>

class Vector{
private:
   int value1, value2;

public:
   Vector () : value1(0), value2(0) {}
   Vector (int a, int b) : value1(a), value2(b){}
   void operator()(int a, int b){
      value1 = a;
      value2 = b;
   }
   void printVector() { 
      std::cout << "(" << value1 << ", " << value2 << ")";
}

};



int main() { 
   Vector v(3, 5);
   v.printVector();
   
   return 0;
}
