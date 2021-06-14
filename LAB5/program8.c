#include<stdio.h>
#include<stdlib.h>
#include <time.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i,j;
    i=l;
    j=h+1;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[l],&arr[j]);
    return j;
}

void Quicksort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        Quicksort(arr,l,p-1);
        Quicksort(arr,p+1,h);
    }
}
int main(){

    int size,i,n; 
    clock_t start, end; 
    printf("Enter the size of the list: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        int no = rand() % n + 1;
        arr[i] = no;

    }
    printf("Unsorted Array:\t");
    for (int i=0; i < n; i++)
          printf("%d ",arr[i]);
    start = clock();
    Quicksort(arr,0,n-1);
    end = clock();
    float ti = ((double)(end - start)/CLOCKS_PER_SEC);
    printf("\nSorted Array:\t");
    for (int i=0; i < n; i++)
       printf("%d ",arr[i]);

    printf("\nTime taken: %f", ti); 
   return 0;
}