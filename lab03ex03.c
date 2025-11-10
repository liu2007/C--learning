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
 * Student Name : 刘泽宇<fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: engg1110 <fill in yourself>
 * Date         : 2025.9.18 <fill in yourself>
 */

#include <stdio.h>

int main(void) {
	// Hint: You do not need to use if-statement.
   int adult,child;
   double cost,tips,p;
   printf("Input number of adults: ");
   scanf("%d", &adult);
   printf("Input number of children: ");
   scanf("%d", &child);
   printf("Input cost of meal: ");
   scanf("%lf", &cost);
   printf("Input tips: ");
   scanf("%lf", &tips );
   p=(cost+tips)/(adult+child*0.5);
   printf("Each adult pays: %.2lf\n",p);
   printf("Each child pays: %.2lf\n",p/2);
	return 0;







}