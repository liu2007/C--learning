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
 * Student Name : 刘泽宇 <fill in yourself>
 * Student ID   : 1155256602 <fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.23<fill in yourself>
**/
 
#include <stdio.h>

int binaryToDecimal(int b) {
	// convert binary number to decimal number
int decimal = 0, base = 1, l;

    while (b > 0) {
        l = b % 10;  
        b /= 10;              
        decimal += l * base;  
        base *= 2;            
    }
    return decimal;
}

int decimalToBinary(int d) {
	// convert decimal number to binary number
int binary = 0, base = 1, r;

    while (d > 0) {
        r = d % 2;           
        d /= 2;              
        binary += r * base;  
        base *= 10;          
    }
    return binary;

}

int main(void) {
  int b1, b2, d1, d2, diff_b, diff_d;
  printf("b1 and b2? ");
  // Read b1 and b2 from user, and start calculation
scanf("%d %d", &b1, &b2);
  
  // Do NOT modify the following lines
  // NEVER EVER TOUCH THESE!
  d1 = binaryToDecimal(b1);
  d2 = binaryToDecimal(b2);
  printf("The numbers (in decimal) are %d and %d\n", d1, d2);
  diff_d = d1 - d2;
  diff_b = decimalToBinary(diff_d);
  printf("The difference is %d (decimal) or %d (binary)\n", diff_d, diff_b);
  return 0;
}