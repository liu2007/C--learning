/*
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
* Student ID   : 1155256702 <fill in yourself>
* Class/Section: ENGG110<fill in yourself>
* Date         : 2025.9.13 <fill in yourself>
*/
   
#include <stdio.h>

int main(void) {
  
  int a,MSD,LSD;        // declare the variables
  printf("Input a 3 digit number: ") ;     // print "Input a 3 digit number: "
  scanf ("%d",&a);        // obtain integer "input" from user
  MSD=a/100.   ;// MSD = input / 100 (e.g. 450 / 100 is 4)
  LSD=a%10;// LSD = input % 10  (e.g. remainder of 450 / 10 is 0)
  printf("MSD: %d\n",MSD);
  printf("LSD: %d",LSD);// print MSD and LSD 
  
  return 0;
}