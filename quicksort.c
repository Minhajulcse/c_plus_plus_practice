// Online C compiler to run C program online
#include <stdio.h>

int getPivot(int* ar, int s, int e){
    int pivot = ar[s];
    int count = 0; 
    for(int i = s+1; i <= e; i++){
        if(ar[i] <= pivot){
            count++;
        }
    }
    int pivotIndex = s + count;
    int temp = ar[s];
    ar[s] = ar[pivotIndex];
    ar[pivotIndex] = temp;
    int left = s, right = e;
    while(left < pivotIndex && right > pivotIndex){
        while(ar[left] < pivot){
            left++;
        }
        while(ar[right] > pivot){
            right--;
        }
        if(left < pivotIndex && right > pivotIndex){
            int temp = ar[left];
            ar[left++] = ar[right];
            ar[right--] = temp;
        }
    }
    return pivotIndex;
}

void quicksort(int* ar, int s , int e){
    //base case
    if(s >= e) return;
    // get pivotIndex
    int p = getPivot(ar,s,e);
    // sort the left side of the pivotIndex
    quicksort(ar,s,p-1);
    //sort the right side of the pivotIndex
    quicksort(ar,p+1,e);
    
}

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }
    quicksort(ar,0, n - 1);
    for(int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }printf("\n");

    return 0;
}