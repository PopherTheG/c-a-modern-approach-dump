#include <stdio.h>
#include <stdlib.h>

int compareInt(const void *pa, const void *pb) {
    const int *p1 = (const int *)pa;
    const int *p2 = (const int *)pb;
    return *p2 - *p1;
    
}

int main(int argc, char *argv[]) {
    int nums[] = {12, 32, 12, 65, 3, 76, 34};
    int n = sizeof(nums) / sizeof(int);

    qsort(nums, n, sizeof(int), compareInt);
    
    for (int i = 0; i < n; i++) {
        printf("%d  ", nums[i]);
    }
    printf("\n");
    return 0;
}
