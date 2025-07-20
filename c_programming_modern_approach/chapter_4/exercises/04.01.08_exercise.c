/**
 * Would the upc.c program still work
 * if the expression 9 - ((total - 1) % 10)
 * were replaced by (10 - (total%10))%10
 * 
 * yes from conclusion I got from exercise 7
 * (total - 1) % 10 = 0 => total - 1 = 10x => total = 10x + 1 => total % 10 = 1 -> let's call this X => (10 - X)%10 = 9                 
 * (total - 1) % 10 = 1 => total - 1 = 10x + 1 => total = 10x + 2 => total % 10 = 2 -> let's call this X => (10 - X)%10 = 8                  
 * (total - 1) % 10 = 2 => total - 1 = 10x + 2 => total = 10x + 3 => total % 10 = 3 -> let's call this X => (10 - X)%10 = 7                 
 * (total - 1) % 10 = 3 => total - 1 = 10x + 3 => total = 10x + 4 => total % 10 = 4 -> let's call this X => (10 - X)%10 = 6                 
 * (total - 1) % 10 = 4 => total - 1 = 10x + 4 => total = 10x + 5 => total % 10 = 5 -> let's call this X => (10 - X)%10 = 5                 
 * (total - 1) % 10 = 5 => total - 1 = 10x + 5 => total = 10x + 6 => total % 10 = 6 -> let's call this X => (10 - X)%10 = 4                 
 * (total - 1) % 10 = 6 => total - 1 = 10x + 6 => total = 10x + 7 => total % 10 = 7 -> let's call this X => (10 - X)%10 = 3                 
 * (total - 1) % 10 = 7 => total - 1 = 10x + 7 => total = 10x + 8 => total % 10 = 8 -> let's call this X => (10 - X)%10 = 2                 
 * (total - 1) % 10 = 8 => total - 1 = 10x + 8 => total = 10x + 9 => total % 10 = 9 -> let's call this X => (10 - X)%10 = 1                 
 * (total - 1) % 10 = 9 => total - 1 = 10x + 9 => total = 10x + 10 => total % 10 = 0 -> let's call this X => (10 - X)%10 = 0
 * 
 * from above
 * 9 - (total - 1) % 10 = 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 (from top to bottom)
 * 
 * hence, yes they are equal                
 */