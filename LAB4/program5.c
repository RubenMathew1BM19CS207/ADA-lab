#include<time.h>
#include <math.h>
#include <stdio.h>

void sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }



    for (i = 0; i < n; i++)
    {


        printf("%d ", arr[i]);
    printf("\n");
}
}


int main()
{
	int n,i;
	printf("-- please enter the number of elements=--");
	scanf("%d",&n);
	int a[n];
	printf("enter the %d elements=\n",n);
	for(i=0;i<n;i++)
	{
		scanf("\n %d",&a[i]);
	}
	clock_t t;
	t=clock();
	sort(a,n);
    	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
    	printf("sort function took %f seconds to execute \n", time_taken);

}