// Neelkumar Amin
// Project Euler
// September 29th, 2017

// ==============
// Multiples of 3 and 5: program01.c
// ==============

// If we list all the natural numbers below 10 that
// are multiples of 3 or 5, we get 3, 5, 6 and 9.
// The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>

#define LIMIT 1000

int multiples(int n);

int main(void)
{
  printf("%d\n", multiples(LIMIT));

  return 0;
}

int multiples(int n)
{
  int i;
  int sum = 0;
  // int threes = 0;
  // int fives = 0;

  for(i = 0; i < n; i++)
  {
    // This method gives the wrong answer.
    // The numbers that are multiples of both
    // three and five are counted twice for
    // each loop through; 266333 is the wrong sum.
    //
    // if (i % 3 == 0)
    //   threes = threes + i;
    // if (i % 5 == 0)
    //   fives = fives + i;
    //
    // sum = threes + fives;

    if(i % 3 == 0 || i % 5 == 0)
      sum = sum + i;
    }

    return sum;
}

// Congratulations, the answer you gave to problem 1 is correct.
// You are the 691843rd person to have solved this problem.
// 38ED0
