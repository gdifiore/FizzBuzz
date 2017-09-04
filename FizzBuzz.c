/*
 *
 * FizzBuzz.c - FizzBuzz
 *
 * (c) gdifiore 2017  
 *      
 */

#include <stdio.h>

void FizzBuzz(int);

int main(void) {
    for (int i = 0; i <= 100; i++) {
        FizzBuzz(i);
    }

    return 0;
}

void FizzBuzz(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        puts("Fizzbuzz");
    } else if (num % 3 == 0) {
        puts("Fizz");
    } else if (num % 5 == 0) {
        puts("Buzz");
    } else {
        printf("%d\n", num);
    }
}