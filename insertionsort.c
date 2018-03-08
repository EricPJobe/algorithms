/* Insertion Sort implementation derived from Heineman, Pollice, Selkow, Algorithms in a Nutshell, 2nd ed. Boston: O'Reilly, 2016 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 10

int less(const int *index, const int *val) {
    if (index > val)
        return 1;
    else
        return 0;
}

void pointerInsertionSort(int *unsorted[]) {

    int pos, k;

    for(pos=1; pos<ARR_SIZE; pos++) {                   // index e.g unsorted[1]
        int i = pos-1;                                  // i = unsorted[0]
        void* value = unsorted[pos];                    // type-agnostic pointer to value behind i, temp var

        while(i>=0 && less(unsorted[i], value) > 0) {   // check for end, index-1 > index, i.e. isNotSorted
            unsorted[i+1] = unsorted[i];                // [pos] = [pos-1], move larger value in [0] to [1]
            i--;                                        // Keep walking it back to the point where it is in order
        }

        unsorted[i+1] = value;                          // Drop temp value just after where i stops
    }

    for(k=0; k<ARR_SIZE; k++) {
        printf("%d, ", unsorted[k]);
    }
    printf("\n");
}

int main() {

    int *arr[ARR_SIZE] = {10, 98, 2, 38, 0, 125, 6, 79, 83, 99};

    pointerInsertionSort(arr);

    return 0;
}