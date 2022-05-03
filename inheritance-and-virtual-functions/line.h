#pragma once
#include "Function.h"

class line final : public function
{
public:
   ~line() override = default;

   line(const int x, const int a, const int b)
      : function(x),
      a_(a),
      b_(b)
   {
   }

   line()
      : function(),
      a_(0),
      b_(0)
   {
   }

   line(const line& l)
      : function(l.get_x()),
      a_(l.get_a()),
      b_(l.get_b())
   {
   }

   double calculate() override
   {
      const int y = a_ * x_ + b_;

      return y;
   }

   int get_a() const
   {
      return a_;
   }

   void set_a(const int a)
   {
      a_ = a;
   }

   int get_b() const
   {
      return b_;
   }

   void set_b(const int b)
   {
      b_ = b;
   }

private:
   int a_;
   int b_;
};
