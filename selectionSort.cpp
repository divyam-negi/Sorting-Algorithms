#include <stdio.h>

int main() {
    int n;
	printf("Enter the size of the array: ");
        scanf("%d", &n);
    
	int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

	printf("original array is:\n");
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	int temp;
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	printf("new array: \n");
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
    return 0;
}

