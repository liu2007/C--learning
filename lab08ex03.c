/**
 * ENGG1110 Problem Solving by Programming 
 *
 * I declare that the assignment here submitted is original
 * except for source material explicitly acknowledged,
 * and that the same or closely related material has not been
 * previously submitted for another course.
 * I also acknowledge that I am aware of University policy and
 * regulations on honesty in academic work, and of the disciplinary
 * guidelines and procedures applicable to breaches of such
 * policy and regulations, as contained in the website.
 *
 * University Guideline on Academic Honesty:
 *   http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : 刘泽宇 <fill in yourself>
 * Student ID   : 1155256602 <fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.23<fill in yourself>
 */
 
#include <stdio.h>

// This function returns the GCD of x and y
// You don't have to modify this function
int gcd(int x, int y) 
{
    // This function implements the Euclidean Algorithm for finding GCD
    // See: https://en.wikipedia.org/wiki/Euclidean_algorithm
    while (y != 0) {
        int tmp = y;
        y = x % y;
        x = tmp;
    }
    return x;
}

// Complete the implementation of this function so that it returns the 
// LCM of x and y
int lcm(int x, int y) 
{
int gcd_xy = gcd(x, y);
return (x * y) / gcd_xy;
// Write your code here

    
}

// Complete the implementation of the main function.
int main(void)
{
// Write your code here
   int a,b,c,d,GCD,LCM;
   scanf("%d %d %d %d", &a, &b, &c, &d);
   GCD=gcd( gcd( gcd(a, b), c), d);
    LCM=lcm( lcm( lcm(a, b), c), d);
printf("GCD is %d\n", GCD);
printf("LCM is %d\n", LCM);

  
    return 0;
}
