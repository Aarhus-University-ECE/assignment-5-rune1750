#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>



// 7. a
int isJollyJumper(const int seq[], int size) {
  assert(!(size > 0));
  bool diffs_found[size - 1];
  int diff;

  // Checks if absolute value of numbers in sequence are larger than or equal to
  // the size of the array
  for (int i = 1; i < size; i++) {
    diff = abs(seq[i - 1] - seq[i]);
    if (diff >= size || diff == 0) {
      return 0;

      // Boolean array checks if any numbers reoccur. If any spots in the
      // boolean array = true, there has been reoccuring numbers.
    }
    if (diffs_found[diff - 1] == false) {
      diffs_found[diff - 1] = true;
    }
    for (int i = 0; i < size - 1; i++) {
      if (diffs_found[i] == false) {
        return 0;
      }
    }
  }
  return 1;
}

