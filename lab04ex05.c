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
 *http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : liuzeyu <fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: A
 * Date         :2025.9.25
 */

/* include header file */
#include <stdio.h>

/* starting point of this C program */
int main(void) {
  
  int candidate[3]={ 0 };
  int votting;// 1. Declare an array countVote[3] to count the votes, remember to initialize the array
  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;

  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;

  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;

  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;

  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;

  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;

  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;

  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;

  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;

  printf("");
  scanf("%d",&votting);
  candidate[votting-1]++;
  // 2. Read the number, and count the vote.
  if (candidate[0]>candidate[1]&&candidate[0]>candidate[2])
    printf("Congratulations! Candidate 1 is the next committee chairman.\n");
  else if (candidate[1]>candidate[0]&&candidate[1]>candidate[2])
    printf("Congratulations! Candidate 2 is the next committee chairman.\n");
  else if (candidate[2]>candidate[0]&&candidate[2]>candidate[1])
    printf("Congratulations! Candidate 3 is the next committee chairman.\n");
  else 
    printf("We cannot decide our committee chairman in this vote.");
  
  // 3. Do (copy and paste) statements in step 2 for 9 more times

  // 4. Determine the largest vote

  // 5. See if more than one candidate shares the same largest vote()

  // 6. Output the results

  // last programming statement
  return 0;
}