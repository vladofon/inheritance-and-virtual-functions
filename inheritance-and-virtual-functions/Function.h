#pragma once

class function
{
public:
   virtual ~function() = default;

   explicit function(const int x)
      : x_(x)
   {
   }

   explicit function()
      : x_(0)
   {
   }

   explicit function(const function& f)
      : x_(f.get_x())
   {
   }

   virtual double calculate()
   {
      const double y = x_;

      return y;
   }

   int get_x() const
   {
      return x_;
   }

   void set_x(const int x)
   {
      x_ = x;
   }

protected:
   int x_;
};

