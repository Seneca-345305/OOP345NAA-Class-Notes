// memory_segments.cpp
#include <iostream>
using namespace std;

// Global (initialized data segment)
int g_init = 10;

// Global (BSS - uninitialized data segment)
int g_uninit;

int main() {
   // Local (stack)
   int local_var = 20;

   // Static (data segment - initialized)
   static int s_init = 30;

   // Static (BSS - uninitialized)
   static int s_uninit;

   // Dynamic (heap)
   int* heap_var = new int(40);

   cout << "Code Segment (function main):    "
      << reinterpret_cast<uintptr_t>(main) << endl;

   cout << "Global Init Data (g_init):       "
      << reinterpret_cast<uintptr_t>(&g_init) << endl;

   cout << "Global Uninit Data (g_uninit):   "
      << reinterpret_cast<uintptr_t>(&g_uninit) << endl;

   cout << "Static Init Data (s_init):       "
      << reinterpret_cast<uintptr_t>(&s_init) << endl;

   cout << "Static Uninit Data (s_uninit):   "
      << reinterpret_cast<uintptr_t>(&s_uninit) << endl;

   cout << "Stack (local_var):               "
      << reinterpret_cast<uintptr_t>(&local_var) << endl;

   cout << "Heap (heap_var):                 "
      << reinterpret_cast<uintptr_t>(heap_var) << endl;

   delete heap_var;
   return 0;
}