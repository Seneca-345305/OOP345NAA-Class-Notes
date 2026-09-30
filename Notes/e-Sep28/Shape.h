// Shape.h
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
   virtual double volume() const = 0;  // pure virtual
   virtual ~Shape() = default;         // always good practice
};

#endif