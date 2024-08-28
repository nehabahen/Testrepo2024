#include <stdio.h>

int main() {
    for (int i = 1; i <= 20; i++) {
        // Skip even numbers
        if (i % 2 == 0 || i% 3 == 0) {    // edited by me(neha) for testing || i% 3 == 0
            continue;
        }

       if (i >= 7){  // edited by me(neha) for testing  if satement 
        break;
       }
        // Print odd numbers
        printf("%d\n", i);

        //adding comment for testing
    }

    return 0;
}



