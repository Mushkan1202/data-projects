#include <stdio.h>
int binary_search(int arr[], int target, int size) {int low = 0;int high = size - 1;
    while (low <= high) {int mid = (low + high) / 2;if (arr[mid] == target) {
            return mid;}
        else if (arr[mid] < target) {low = mid + 1;}
        else {high = mid - 1;}} return -1;}
int main() {int arr[] = {2, 4, 6, 8, 10};int n = sizeof(arr) / sizeof(arr[0]);
    int target; printf("Enter the number to search for: "); scanf("%d", &target);
    int result = binary_search(arr, target, n); if (result != -1) {
        printf("Found at position %d\n", result);} else {
        printf("Not found in the list\n");}return 0;}
