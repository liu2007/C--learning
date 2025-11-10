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
 * http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : liuzeyu <fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 11.3<fill in yourself>
 */

#include <stdio.h>

int checkSymmetricMatrix( int matrix[16][16],  int size ){
  int isSymmetric = 1; // assume iSymmetric is True first
   for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if (!isSymmetric) {
            break; 
        }
    }// check whether the matrix is symmetric
  // return 1 if it is symmetric; otherwise return 0

  return isSymmetric;
}

int main(void){
  int n;
  int matrixRead[16][16];
   // Read matrix size (between 2 and 16)
  scanf("%d", &n);

    // Read matrix elements from user input via nested for loop
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixRead[i][j]);
        } 
      }

  // read matrix size and elements from user input via nested for loop

  int result = checkSymmetricMatrix(matrixRead, n);

    // Print your checking result
    if (result) {
        printf("It is a symmetric matrix!\n");
    } else {
        printf("It is not a symmetric matrix!\n");
    }
// call function - checkSymmetricMatrix

  // print your checking result

  return 0;
}