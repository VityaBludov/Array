#include <stdio.h>
#define SIZE 10

/**
 * declarations
 */
int arrayA[SIZE] = {35, 11, 57, 5, 66, 43, 2, 1, 95, 8};
int arrayB[SIZE] = {4, 1, 70, 32, 14, 22, 5, 0, 37, 9};

void bubbleSort(int array[], int n);
void insertionSort(int array[], int n);
int linearSearch(int number, int array[], int n);

/**
 * main
 */
int main() {
    /*------------bubble sort------------*/
    // print unsorted array A
    printf("Array A before sorting:\n");
    for (int i = 0; i < SIZE; i++) printf("%d ", arrayA[i]);
        
    // print sorted array A
    bubbleSort(arrayA, SIZE);
    printf("\nArray A after sorting:\n");
    for (int i = 0; i < SIZE; i++) printf("%d ", arrayA[i]);
    printf("\n");
    
    /*------------insertion sort------------*/
    // print unsorted array B
    printf("\nArray B before sorting:\n");
    for (int i = 0; i < SIZE; i++) printf("%d ", arrayB[i]);
    
    // print sorted array B
    insertionSort(arrayB, SIZE);
    printf("\nArray B after sorting:\n");
    for (int i = 0; i < SIZE; i++) printf("%d ", arrayB[i]);
    printf("\n");
    
    /*------------linear search------------*/
    // find number
    int number = 43;
    printf("\nIndex of 43: %d", linearSearch(number, arrayA, SIZE));
    
    return 0;
}

/**
 * Sorts array of n values using bubble sort algorithm
 */
void bubbleSort(int array[], int n) {
    int swap;
    
    do {
        swap = 0;
        for (int i = 1; i < n; i++) {
            // spare element for swap
            int spare;
            
            if (array[i] < array[i - 1]) {
                // swap values
                spare = array[i - 1];
                array[i - 1] = array[i];
                array[i] = spare;
                swap = 1;
            }
        }
    } while (swap);
    
    return;
}

/**
 * Sorts array of n values using insertion sort algorithm
 */
void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++) {
        // current element for sorting
        int current = array[i];
        int j = i;
         
        // move right to left through sorted part of array
        while ((j > 0) && (array[j - 1] > current)) {
            array[j] = array[j - 1];
            j = j - 1;
        }
        array[j] = current;
    }
     
    return;
}

/**
 * Returns index of first occurence of number in array of n values
 * or -1 if not found.
 * Uses linear sort
 */
int linearSearch(int number, int array[], int n) {
    for (int i = 0; i < n; i++)
        if (array[i] == number) return i;
    
    // not found
    return -1;
}