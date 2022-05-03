#include <iostream>
#include "Function.h"
#include "hyperbole.h"
#include "line.h"
#include "parabola.h"

using namespace std;

int main()
{
   function* functions[3] = {
      new hyperbole(10),
      new line(10, 20, 30),
      new parabola(10, 20, 30, 40)
   };

   for (function* func : functions)
   {
      cout << func->calculate() << endl;
   }
}

