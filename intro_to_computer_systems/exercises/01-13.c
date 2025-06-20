/**
 * Two computers, A and B, are 
 * identical except for the fact that 
 * A has a subtract instruction
 * and B does not.
 * 
 * Both has add instructions.
 * 
 * Both have instructions that
 * can take a value and 
 * produce the negative of that value
 * 
 * Which computer is able to solve more
 * problems, A or B?
 * 
 */

 /**
  * ANSWERS
  */

/**
 * Suppose there is a problem P
 * that B could solve that A couldn't.
 * 
 * The only difference is B has subtract
 * instruction so it must mean B
 * performed operation that includes 
 * subtract instruction to solve P
 * 
 * Hence,
 * Solution for P = Solution that can be
 * performed using instructions in A +
 * subtract instructions, let's call
 * it B'. 
 * 
 * let's pick B1
 * and B2 such that B1 - B2 is in B' instruction.
 * 
 * But, B1 - B2 = B1 + (-B2) which A can do.
 * and it works this way for every pair
 * with subtract instructions in B'
 * 
 * Hence, it contradicts the fact
 * that there is instruction in B
 * that A couldn't to solve for P
 */