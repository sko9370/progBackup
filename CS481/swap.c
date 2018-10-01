#include <stdio.h>

// pass in addresses, initialize as pointers to be able to reassign variables
void swap(int* pa, int* pb) {
  int hold = *pa;
  *pa = *pb;
  *pb = hold;
}


int main(int argc, char *argv[]) {
  int a = 1, b = 2;
  swap(&a, &b);
  printf("a was 1, it is now %d\n", a);
  printf("b was 2, it is now %d\n", b);
  
  // print out command-line arguments
  int i;
  for (i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

  return 0;
}

// https://stackoverflow.com/questions/8403447/swapping-pointers-in-c-char-int
// The top answer in this stackoverflow post highlighted the problem I was having in
// "swap2," which was not identifying the type of arguments I was sending to swap.
// I only had "pa" and "pb" initially, but changed it to "int* pa" and "int* pb"
// to clearly show that it was a pointer being passed in. 04 SEP 18, West Point, NY.
// The CSE citation is in the references section of the writeup.
