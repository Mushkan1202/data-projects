#include <stdio.h>  
// a. bubble sort
void bubble(int arr[], int n){int i,j,temp;
for(i=0;i<n;i++){for(j=0;j<n-1;j++){
if(arr[j] > arr[j+1]){temp = arr[j];
arr[j] = arr[j+1];arr[j+1] = temp;}}}}
// b. selection sort
void selection(int arr[], int n){int i,j,min,temp;
for(i=0;i<n-1;i++){min = i;for(j=i+1;j<n;j++){
if(arr[j] < arr[min]){min = j;}}
temp = arr[i];arr[i] = arr[min];arr[min] = temp;}}
// c. insertion sort
void insertion(int arr[], int n){int i,j,key;
for(i=1;i<n;i++){key = arr[i];j = i-1;
while(j>=0 && arr[j] > key){arr[j+1] = arr[j];
j--;}arr[j+1] = key;}}
// helper for d. quick sort
int part(int arr[], int low, int high){int pivot = arr[high];int i = low-1;int j,temp;for(j=low;j<high;j++){if(arr[j] < pivot){i++;temp = arr[i];arr[i] = arr[j];arr[j] = temp;}}temp = arr[i+1];arr[i+1] = arr[high];arr[high] = temp;return i+1;}
// d. quick sort
void quick(int arr[], int low, int high){if(low < high){int pi = part(arr, low, high);quick(arr, low, pi-1);quick(arr, pi+1, high);}}
int main(){int n,i;
printf("how many numbers : ");
scanf("%d", &n);int og[n];
printf("type %d numbers : ", n);
for(i=0; i<n; i++){scanf("%d", &og[i]);}
// a
int a[n];for(i=0;i<n;i++) a[i] = og[i];bubble(a,n);printf("\na. bubble sorted : ");for(i=0;i<n;i++){printf("%d  ", a[i]);}
// b
int b[n];for(i=0;i<n;i++) b[i] = og[i];selection(b,n);printf("\nb. selection sorted : ");for(i=0;i<n;i++){printf("%d  ", b[i]);}
// c
int c[n];for(i=0;i<n;i++) c[i] = og[i];
insertion(c,n);printf("\nc. insertion sorted : ");
for(i=0;i<n;i++){printf("%d  ", c[i]);}
// d
int d[n];for(i=0;i<n;i++) d[i] = og[i];quick(d,0,n-1);printf("\nd. quick sorted : ");for(i=0;i<n;i++){printf("%d  ", d[i]);}printf("\n");return 0;}
