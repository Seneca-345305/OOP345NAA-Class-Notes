// Course.h
#ifndef COURSE_H
#define COURSE_H
#include "Name.h"
#include <iostream>
using namespace std;

class Room; // forward declaration

class Course {
   Name name;
   int code{};
   Room* room{};
public:
   Course(const char* n, int c) : name(n), code(c) {}
   void book(Room& r);
   void release() { room = nullptr; }
   const char* get() const { return name.get(); }
   void display() const;
};
#endif
// Room.h
#ifndef ROOM_H
#define ROOM_H
#include "Name.h"
#include <iostream>
using namespace std;

class Course; // forward declaration

class Room {
   Name name;
   Course* course{};
public:
   Room(const char* n) : name(n) {}
   void book(Course& c);
   void release() { course = nullptr; }
   const char* get() const { return name.get(); }
   void display() const;
};
#endif
// Course.cpp
#include "Course.h"
#include "Room.h"

void Course::book(Room& r) {
   if (room) room->release();
   room = &r;
}
void Course::display() const {
   cout << (room ? room->get() : "*****")
      << " " << code << " " << name.get() << endl;
}
// Room.cpp
#include "Room.h"
#include "Course.h"

void Room::book(Course& c) {
   if (course) course->release();
   course = &c;
}
void Room::display() const {
   cout << name.get() << " "
      << (course ? course->get() : "available") << endl;
}
// main.cpp
#include "Course.h"
#include "Room.h"

void book(Course& c, Room& r) {
   c.book(r);
   r.book(c);
}

int main() {
   Room t2108("T2108"), t2109("T2109");
   Course oop("OOP", 345), prog("Intro to Programming", 105);

   oop.display();
   prog.display();
   t2108.display();
   t2109.display();

   book(oop, t2108);
   book(prog, t2109);

   oop.display();
   prog.display();
   t2108.display();
   t2109.display();
   return 0;
}