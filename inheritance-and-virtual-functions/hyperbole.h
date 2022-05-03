#pragma once
#include "Function.h"
#include <cmath>

class hyperbole final : public function
{
public:
   ~hyperbole() override = default;

   explicit hyperbole(const int x)
      : function(x)
   {
   }

   explicit hyperbole()
      : function()
   {
   }

   explicit hyperbole(const hyperbole& h)
      : function(h.get_x())
   {
   }

   double calculate() override
   {
      const double y = static_cast<double>(1) / x_;

      return y;
   }

};