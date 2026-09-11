// - Initialized data segment : global / static variables with an initial value.

int g = 5;   // stored in initialized data segment
// - Uninitialized data segment(BSS) : global / static variables with no initial value, set to 0 by default.

static int x; // stored in BSS, initialized to 0

// - These values persist for the entire duration of the program.