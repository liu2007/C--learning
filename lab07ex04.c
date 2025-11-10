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
 *Student Name : liuzeyu <fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.19<fill in yourself>
 */


// your code here
#include <stdio.h>

int main(void) {
    // Array of prime factors
    int factors[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
    int a, b;

    // Request input from the user
    printf("Input a and b: ");
    scanf("%d %d", &a, &b);

    // Loop from b to a in descending order
    for (int i = b; i >= a; i--) {
        int is_prime = 1; // Assume i is prime
        if (i < 2) continue; // Skip numbers less than 2

        // Check divisibility using the factors array
        for (int j = 0; j < 26; j++) {
            if (factors[j] * factors[j] > i) break; // No need to check beyond the sqrt(i)
            if (i % factors[j] == 0) {
                is_prime = 0; // Not a prime number
                break;
            }
        }

        // Print the prime number if it's still marked as prime
        if (is_prime) {
            printf("%d ", i);
        }
    }

    return 0;
}