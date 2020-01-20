#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../sort/sort.h"

int random_number(int min, int max) {
    return ((rand()%(max-min+1))+min);
}

void print_arr(int a[], size_t size) {
    for(int i = 0; i < size; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
}

void test(int t) {
    int n;

    for(int i = 0; i < t; i++) {
        printf("\n");
        printf("------------------------------\n");
        printf("[ TEST CASE %d ]\n", i+1);
        printf("Array size: ");
        scanf("%d", &n);

        int a[n];

        for(int j = 0; j < n; j++) {
            a[j] = random_number(1, 100);
        }
        printf("\n");
        // print array before test function
        printf("Before test:\n");
        print_arr(a, n);

        // test function

        // print array after test function
        printf("After test:\n");
        print_arr(a, n);
        printf("------------------------------\n");
    }
}

int main(void) {
    srand(time(NULL));

    int t;

    printf("T: ");
    scanf("%d", &t);
    test(t);
    return 0;
}