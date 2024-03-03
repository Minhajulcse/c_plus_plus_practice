// Online C compiler to run C program online
#include <stdio.h>

int partition (int* ar, int st, int end) {
    
    int pivot = ar[st];
    int i = st + 1;
    int j = end;
    do {
        while(ar[i] <= pivot) {
            i++;
        }
        while(ar[j] > pivot ) {
            j--;
        }
        if(i < j) {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    }while(i < j);
    
    int temp = ar[st];
    ar[st] = ar[j];
    ar[j] = temp;
    return j;
}

void quicksort(int* ar, int st, int end) {
    
    //base case
    if(st >= end) return ;
    
    int pivotIndex = partition(ar,st,end);
    
    //sort the left side of the pivotIndex
    quicksort(ar,st,pivotIndex-1);
    //sort the right side of the pivotIndex
    quicksort(ar,pivotIndex+1,end);
    
}

int main() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements in the array : \n");
    for(int i = 0; i < n; i++) scanf("%d",&ar[i]);
    
    quicksort(ar,0,n-1);
    
    for(int i = 0; i < n; i++) printf("%d ",ar[i]);
    printf("\n");

    return 0;
}