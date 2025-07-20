/**
 * The algorithm for computing the UPC check
 * digit ends with the following steps:
 * 
 * subtract 1 from the total
 * compute the remainder when the
 * adjusted total is divided by 10
 * subtract the remainder from 9
 * 
 * it's tempting to try to simplify 
 * the algorithm by using these steps
 * - compute the remainder when the 
 * total is divided by 10
 * - subtract the remainder from 10
 * 
 * why doesn't this technique work?
 * 
 * check number is 9 - (total - 1)%10
 * the attempt is 10 - total % 10
 * 
 * mod operator is distributive
 * t = a + b
 * t mod c -> r
 * (a mod c + b mod c) mod c -> (r' + r'') mod c;
 * 
 * t = c * x + r;
 * a = c * x' + r';
 * b = c * x'' + r'';
 * 
 * a + b = c * (x' + x'') + r' + r'';
 *      = c * (x' + x'' + d) + (r' + r'' - c*d) where r' + r'' - c*d is less than c and d is natural number
 * 
 * 9 - total%10 + 1%10 = 10 - total%10;
 * 
 * BUT 9 - 9% 10 IS 0 WHILE 10 - 10% 10 IS 10
 * 
 * so it grants the fac tthat those results should be 
 * mod operated again after final has computed.
 * 
 * 
 * i am starting to grasp but not fully 
 * let's talk it out loud
 * 9 - (a - 1)%10
 * 9 - r where r is remainder when a - 1 is divided by 10
 * hence, (a - 1) = 10 * x + r;
 * 
 * 10 - total % 10;
 * 10 - r' where r is remainder when total is divided by 10
 * a = 10 * x' + r'
 * 
 * x % 10 is value from 0 to 9
 * 10 - x % 10 is value from 1 to 10
 * 
 * 9 - x % 10 is value from 0 to 9
 * 
 * hence, they can be different
 */