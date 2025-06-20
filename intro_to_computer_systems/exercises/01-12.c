/**
 * indicate whether each item in the list
 * is algorithm or not
 * 
 * a. Add the first row of the following matrix
 * to another row whose first column contains a
 * non-zero entry
 * 1 2 0 4
 * 0 3 2 4
 * 2 3 10 22
 * 12 4 3 4
 * 
 * NOT AN ALGORITHM - can be either third row
 * or fourth, so not very precise as to which to add
 * the first row to
 * 
 * b. In order to show that there are 
 * as many prime numbers as there are
 * natural numbers, match each prime
 * number with a natural number in
 * the following manner. Create pairs of
 * prime and natural numbers by matching the
 * first prime number with 1
 * and the second prime number with 2
 * the third with 3 and so forth
 * 
 * NOT AN ALGORITHM - lacks finiteness
 * 
 * c. Suppose you're given two vectors
 * each with 20 elements and asked to perform
 * the following operation: Take the first
 * element of the first vector and multiply
 * it by the first element of the second
 * vector. Do the same to the second then add
 * all the individual products together
 * 
 * YES ALGORITHM
 * 
 * d. Lynne tells Calvin
 * 1. Flip the quarter twice
 * 2. If the outcome is heads on the first
 * tail on the second, then I will walk the dog
 * 3. tail first, head second, Calvin is walking the dog
 * 4. if head head or tail tail, then flip twice again
 * 
 * YES ALGORITHM
 * 
 * e. Given a number,
 * 1. Multiply by 4
 * 2. Add 4
 * 3. Divide by 2
 * 4. Subtract 2
 * 5. Divide by 2
 * 6. Subtract 1
 * 7. At this point, add 1 to a counter
 * to keep track of the fact that you
 * performed steps 1 through 6.
 * then test the result you got when you
 * subtracted 1. if 0, write down the 
 * number of times you performed steps 1 through 6 and stop
 * if not 0, starting with result of subtracting one,
 * perform the seven steps again. 
 * 
 * ((x * 4 + 4) / 2 - 2) / 2 - 1
 * (2x + 2 - 2) / 2 - 1
 * x - 1;
 * 
 * so depends on what number is
 * if natural number it works
 * but if 0 is selected to begin with, 
 * then it will be infinite because number 
 * will keep decreasing
 * also real numbers not in natural numbers 
 * will run infinitely 
 * so NO IT'S NOT ALGORITHM
 */