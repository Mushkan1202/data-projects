#include <stdio.h>
#include <string.h>
int binarySearch(char *arr[],int size,char *key){int low=0;int high=size-1;
while(low<=high){int mid=low+(high-low)/2;int compare_result=strcmp(arr[mid],key);
if(compare_result==0){return mid;}if(compare_result<0){low=mid+1;}else{
high=mid-1;}}return -1;}
int main(){char *fruits[]={"Apple","Banana","Cherry","Grape","Kiwi","Lemon","Mango","Orange","Peach"};
int n=sizeof(fruits)/sizeof(fruits[0]);char *key_to_find="Lemon";
printf("Searching for: %s\n",key_to_find);int result=binarySearch(fruits,n,key_to_find);
if(result!=-1){printf("Found '%s' at index: %d\n",key_to_find,result);}else{
printf("'%s' was not found in the list.\n",key_to_find);}
printf("\n-----------------------------------\n\n");char *another_key="Fig";
printf("Searching for: %s\n",another_key);result=binarySearch(fruits,n,another_key);
if(result!=-1){printf("Found '%s' at index: %d\n",another_key,result);}else{
printf("'%s' was not found in the list.\n",another_key);}return 0;}
