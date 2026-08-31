#include <iostream>
using namespace std;

/*
 * Function: partition
 * -------------------
 * Rearranges the elements in the array around a pivot element.
 *
 * Parameters:
 *   arr[]  - The array to be partitioned.
 *   start  - Starting index of the current subarray.
 *   end    - Ending index of the current subarray.
 *
 * Returns:
 *   The final position of the pivot after partitioning.
 *
 * Example:
 *   Before: [10, 7, 8, 9, 1, 5]
 *   Pivot = 5
 *   After : [1, 5, 8, 9, 10, 7]
 *              ^
 *         Pivot Index = 1
 *
 * All elements to the left of the pivot are smaller.
 * All elements to the right are greater than or equal to the pivot.
 */
int partition(int arr[], int start, int end)
{

    // Select the last element as the pivot
    int pivot = arr[end];

    /*
     * i keeps track of the last position containing
     * an element smaller than the pivot.
     */
    int i = start - 1;

    /*
     * Traverse the subarray from start to end-1.
     * Move all elements smaller than the pivot
     * to the left side of the array.
     */
    for (int j = start; j <= end - 1; j++)
    {

        // If the current element is smaller than the pivot
        if (arr[j] < pivot)
        {

            // Move i forward
            i++;

            // Place smaller element into the left partition
            swap(arr[i], arr[j]);
        }
    }

    /*
     * Place the pivot after the last smaller element.
     * This puts the pivot into its correct sorted position.
     */
    swap(arr[i + 1], arr[end]);

    // Return the pivot's final index
    return i + 1;
}

/*
 * Function: quickSort
 * -------------------
 * Recursively sorts the array using Quick Sort.
 *
 * Parameters:
 *   arr[]  - Array to be sorted.
 *   start  - Starting index of current subarray.
 *   end    - Ending index of current subarray.
 *
 * Algorithm:
 *   1. Partition the array around a pivot.
 *   2. Recursively sort the left partition.
 *   3. Recursively sort the right partition.
 *
 * Time Complexity:
 *   Best Case:    O(n log n)
 *   Average Case: O(n log n)
 *   Worst Case:   O(n²)
 *
 * Space Complexity:
 *   O(log n) due to recursion stack.
 */
void quickSort(int arr[], int start, int end)
{

    /*
     * Base condition:
     * Stop recursion when the subarray contains
     * zero or one element.
     */
    if (start < end)
    {

        // Partition the array and get pivot index
        int pi = partition(arr, start, end);

        /*
         * Recursively sort elements smaller than pivot
         */
        quickSort(arr, start, pi - 1);

        /*
         * Recursively sort elements greater than pivot
         */
        quickSort(arr, pi + 1, end);
    }
}

int main()
{

    // Maximum number of elements allowed
    const int MAX_SIZE = 100;

    // Fixed-size array
    int arr[MAX_SIZE];

    // Number of elements entered by user
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";

    // Read input elements into the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort the array using Quick Sort
    quickSort(arr, 0, n - 1);

    // Display the sorted array
    cout << "\nSorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}