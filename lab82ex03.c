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
 * Student Name : liuzeyu<fill in yourself>
 * Student ID   : 1155256702 <fill in yourself>
 * Class/Section: A <fill in yourself>
 * Date         : 2025.10.10<fill in yourself>
 */

/* include header file */
#include <stdio.h>
#include <math.h>
int main(void) {
	// 1. User input
	int phone;
	printf("Input phone number: ");
	scanf("%d", &phone);

	// 2. Phone number validation
	// TO BE COMPLETED
	// ...
  // HINT:
  // What is the range of valid numbers? Think about it carefully. 
  if (phone < 20000000 || phone > 99999999)	
	{
		printf("Invalid phone number");
		return 0;
	}
	
	
	// 3. Count the number of occurrences of digits
	// TO BE COMPLETED
	int occurrences[10] = {0};	// array for storing the frequencies
	// ...
	int i,a;
	int unique = 0;
	for(i=0;i<8;i++){
		a=phone/pow(10,i);
		occurrences[a%10]++;
	}
	for(i=0;i<10;i++){
		if(occurrences[i]>0)
			unique++;
	}

	// HINT 1:
	// The occurrence of digit 0 can be stored in occurrences[0],
	// and the occurrence of digit 9 can be stored in occurrences[9].
	//
	// HINT 2:
	//   printf("%d\n", phone / 10000000 % 10);	
	// can print out the first digit of the phone number...
	// 
	// HINT 3:
	// How about 
	//   printf("%d\n", phone / 1000000 % 10); ?
	// or 
	//   printf("%d\n", phone / 100000 % 10); ?
	
	// 4. Find the number of unique digits
	// TO BE COMPLETED
	
	// ...
	
	// 5. Print out the results
	printf("There are %d unique digit(s).", unique);

	return 0;
}
