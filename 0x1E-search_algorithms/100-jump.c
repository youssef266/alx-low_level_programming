#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array using the Jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */

int jump_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int step = sqrt(size);
    int prev = 0;

    while (array[step - 1] < value) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) {
            return -1;
        }
    }

    while (array[prev] < value) {
        prev++;

        if (prev == fmin(step, size)) {
            return -1;
        }
    }

    if (array[prev] == value) {
        return prev;
    }

    return -1;
}
