#pragma once
#include "Function.h"
#include <cmath>

class parabola final : public function
{
public:
   explicit parabola(const int x, const int a, const int b, const int c)
      : function(x),
      a_(a),
      b_(b),
      c_(c)
   {
   }

   explicit parabola()
      : function(),
      a_(0),
      b_(0),
      c_(0)
   {
   }

   explicit parabola(const parabola& h)
      : function(h),
      a_(h.get_a()),
      b_(h.get_b()),
      c_(h.get_c())
   {
   }

   ~parabola() override = default;

   double calculate() override
   {
      const double y = a_ * pow(x_, 2) + b_ * x_ + c_;

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

   int get_c() const
   {
      return c_;
   }

   void set_c(const int c)
   {
      c_ = c;
   }

private:
   int a_;
   int b_;
   int c_;
};
