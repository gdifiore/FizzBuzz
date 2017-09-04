#!/usr/bin/env python

##########################
# FizzBuzz.py - FizzBuzz #
# (c) gdifiore 2017      #
##########################

def FizzBuzz(num):
    if num % 15 == 0:
        print("FizzBuzz")
    elif num % 5 == 0:
        print("Buzz")
    elif num % 3 == 0:
        print("Fizz")
    else:
        print(num)

for i in range(1, 101):
    FizzBuzz(i)