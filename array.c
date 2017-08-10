#include <stdio.h>
#define SIZE 10

/**
 * declarations
 */
int arrayA[SIZE] = {35, 11, 57, 5, 66, 43, 2, 1, 95, 8};
int arrayB[SIZE] = {4, 1, 70, 32, 14, 22, 5, 0, 37, 9};

void bubbleSort();
void insertionSort();
int linearSearch(int number);

/**
 * main
 */
int main() {
    /*------------bubble sort------------*/
    // print unsorted array A
    printf("Array A before sorting:\n");
    for (int i = 0; i < SIZE; i++) printf("%d ", arrayA[i]);
        
    // print sorted array A
    bubbleSort();
    printf("\nArray A after sorting:\n");
    for (int i = 0; i < SIZE; i++) printf("%d ", arrayA[i]);
    printf("\n");
    
    /*------------insertion sort------------*/
    // print unsorted array B
    printf("\nArray B before sorting:\n");
    for (int i = 0; i < SIZE; i++) printf("%d ", arrayB[i]);
    
    // print sorted array B
    insertionSort();
    printf("\nArray B after sorting:\n");
    for (int i = 0; i < SIZE; i++) printf("%d ", arrayB[i]);
    printf("\n");
    
    /*------------linear search------------*/
    // find number
    int number = 43;
    printf("\nIndex of 43: %d\n", linearSearch(number));
    
    return 0;
}

/**
 * Sorts array of n values using bubble sort algorithm
 */
void bubbleSort() {
    int swap;
    
    do {
        swap = 0;
        for (int i = 1; i < SIZE; i++) {
            // spare element for swap
            int spare;
            
            if (arrayA[i] < arrayA[i - 1]) {
                // swap values
                spare = arrayA[i - 1];
                arrayA[i - 1] = arrayA[i];
                arrayA[i] = spare;
                swap = 1;
            }
        }
    } while (swap);
    
    return;
}

/**
 * Sorts array of n values using insertion sort algorithm
 */
void insertionSort()
{
    for (int i = 1; i < SIZE; i++) {
        // current element for sorting
        int current = arrayB[i];
        int j = i;
         
        // move right to left through sorted part of array
        while ((j > 0) && (arrayB[j - 1] > current)) {
            arrayB[j] = arrayB[j - 1];
            j = j - 1;
        }
        arrayB[j] = current;
    }
     
    return;
}

/**
 * Returns index of first occurence of number in array of n values
 * or -1 if not found.
 * Uses linear sort
 */
int linearSearch(int number) {
    for (int i = 0; i < SIZE; i++)
        if (arrayA[i] == number) return i;
    
    // not found
    return -1;
}
