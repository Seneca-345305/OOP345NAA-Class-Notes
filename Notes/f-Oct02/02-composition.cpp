// Name.h
#ifndef NAME_H
#define NAME_H
#include <cstring>

class Name {
   char* name{};
public:
   Name(const char* n = "") {
      name = new char[strlen(n) + 1];
      strcpy(name, n);
   }
   Name(const Name& other) {
      name = new char[strlen(other.name) + 1];
      strcpy(name, other.name);
   }
   Name& operator=(const Name& other) {
      if (this != &other) {
         delete[] name;
         name = new char[strlen(other.name) + 1];
         strcpy(name, other.name);
      }
      return *this;
   }
   ~Name() { delete[] name; }

   const char* get() const { return name; }
   void set(const char* n) {
      delete[] name;
      name = new char[strlen(n) + 1];
      strcpy(name, n);
   }
};
#endif
// Person.h
#include "Name.h"
#include <iostream>
using namespace std;

class Person {
   Name name; // composition (subobject)
   int age{};
public:
   Person(const char* n, int a) : name(n), age(a) {}
   void display() const { cout << age << " " << name.get() << endl; }
   void set(const char* n) { name.set(n); } // forwarding
};
// main.cpp
#include "Person.h"

int main() {
   Person p("Harvey", 23);
   Person q = p; // copy constructor
   p.display();
   q.display();

   q.set("Lawrence");
   p.display();
   q.display();
   return 0;
}