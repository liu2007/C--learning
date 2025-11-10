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
 * Student Name : liuzeyu <fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: A<fill in yourself>
 * Date         : 2025.10.19 <fill in yourself>
 */

#include <stdio.h>

int main() {
    int N, K;
  
    scanf("%d %d", &N, &K);
    int nums[100];

    for (int i = 0; i < N; ++i) {
        scanf("%d", &nums[i]);
    }

    for (int i = K - 1; i < N; ++i) {
        double sum = 0.0;
       
        for (int j = i - K + 1; j <= i; ++j) {
            sum += nums[j];
        }
        
        double avg = sum / K;
        
        if (i == N - 1) {
            printf("%.2f", avg);
        } else {
            printf("%.2f ", avg);
        }
    }

    return 0;
}
// your code here
