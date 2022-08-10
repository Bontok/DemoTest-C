#include <stdio.h>

int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int dayOfWeek = 0;  

 appleQuantity = 23;
 appleReview = 52;
 appleReviewDisplay = appleReview;
 appleReview = 875 / 10; 
 appleReviewDisplay = appleReview;

 if(dayOfWeek % 7 == 3 || appleQuantity < 10)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

 dayOfWeek += 8;


 // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}