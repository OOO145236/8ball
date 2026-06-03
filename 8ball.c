#include <stdio.h>
#include <time.h>
#include "phrases.h"
// i need to print one of 20 answers
// 10 for "yes"
// 5 for "idk"
// 5 for "no"
// for that i only need random and switch operator
unsigned long int next = 1;

int rand(void) {
  next = next * 3783712138 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}


int main() {
  char *msg;
  srand(clock());
  switch (rand()%20){
    case 0:
      msg = msg0;
      break;
    case 1:
      msg = msg1;
      break;
    case 2:
      msg = msg2;
      break;
    case 3:
      msg = msg3;
      break;
    case 4:
      msg = msg4;
      break;
    case 5:
      msg = msg5;
      break;
    case 6:
      msg = msg6;
      break;
    case 7:
      msg = msg7;
      break;
    case 8:
      msg = msg8;
      break;
    case 9:
      msg = msg9;
      break;
    case 10:
      msg = msg10;
      break;
    case 11:
      msg = msg11;
      break;
    case 12:
      msg = msg12;
      break;
    case 13:
      msg = msg13;
      break;
    case 14:
      msg = msg14;
      break;
    case 15:
      msg = msg15;
      break;
    case 16:
      msg = msg16;
      break;
    case 17:
      msg = msg17;
      break;
    case 18:
      msg = msg18;
      break;
    case 19:
      msg = msg19;
      break;
  }
  printf("%s\n",msg);
  return 0;
}
