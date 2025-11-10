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
 * Student ID   : 1155256702<fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.16<fill in yourself>
 */

#include <stdio.h>

int main() {
    int height;
   
    scanf("%d", &height);

   
    for (int i = 0; i < height; i++) {
        
        for (int j = 0; j < height; j++) {
            // 第一行、最后一行，或者每行的第一个、最后一个位置，输出星号
            if (i == 0 || i == height - 1 || j == 0 || j == height - 1) {
                printf("*");
            } else {
                // 其他位置输出空格
                printf(" ");
            }
        }
        // 每行结束后换行
        printf("\n");
    }

    return 0;
}