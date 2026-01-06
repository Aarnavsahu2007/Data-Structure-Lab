#include<stdio.h>
void main() {
int n, i, key;
    int arr[100];
    int flag = 0, pos = -1;

    // Read size of array
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read element to search
    scanf("%d", &key);

    // Linear search logic
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            flag = 1;
            pos = i;
            break;
        }
    
	
	
	
	
	//Type your content here
	
	
	
	
	}
	if (flag == 1) {
		printf("found at position %d\n", pos);
	} else {
		printf("%d not found\n", key);
	}
}
