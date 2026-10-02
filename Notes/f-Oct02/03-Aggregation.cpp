// Club.h
#ifndef CLUB_H
#define CLUB_H
#include "Name.h"
#include <iostream>
#include <cstring>
using namespace std;

constexpr int MAX_MEMBERS = 50;

class Club {
   const Name* members[MAX_MEMBERS]{};
   int count{};
public:
   Club& operator+=(const Name& n) {
      if (count < MAX_MEMBERS)
         members[count++] = &n;
      return *this;
   }
   Club& operator-=(const Name& n) {
      for (int i = 0; i < count; i++) {
         if (strcmp(members[i]->get(), n.get()) == 0) {
            for (int j = i; j < count - 1; j++)
               members[j] = members[j + 1];
            members[--count] = nullptr;
            break;
         }
      }
      return *this;
   }
   void display() const {
      for (int i = 0; i < count; i++)
         cout << members[i]->get() << endl;
   }
};
#endif
// main.cpp
#include "Club.h"

int main() {
   Name jane("Jane"), john("John"), alice("Alice"), frank("Frank");

   Club gameClub;
   gameClub += jane;
   gameClub += john;
   gameClub += alice;
   gameClub += frank;

   gameClub.display();
   cout << "---\n";

   gameClub -= alice;
   gameClub -= john;
   gameClub.display();
   return 0;
}