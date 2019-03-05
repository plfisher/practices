// Including library for printing on the screen
#include <stdio.h>

// Main program
int main(void) {
	// Declaring an array of characters
	char msg[9];

	// Initialize values one by one
  	msg[0] = 102;
	msg[1] = 117;
  	msg[2] = 116;
  	msg[3] = 117;
  	msg[4] = 114;
  	msg[5] = 97;
  	msg[6] = 109;
  	msg[7] = 97;
  	msg[8] = 0;

	// Print the string. Guess the output?
  	printf("%s\n", msg);

	// Return success
  	return 0;
}
