/*Leap Year or Not
We all have made fun of our friends who have their birthdays on 
29th February.Given birthday year N of your friend, can you tell her if that is leap year or not? 

Example
Input
2

1900

2012

Output
No
Yes */

#include <stdio.h>
  
  int main()
  {
    int t;
    // write your code here
    scanf("%d",&t);
    while(t)
    {
    int birth_year;
    scanf("%d",&birth_year);
    if(birth_year%400==0)
     printf("Yes\n");
     else if(birth_year%100==0)
        printf("No\n");
    else if(birth_year%4==0)
        printf("Yes\n");
     else
        printf("No\n");
        t--;
     }
     return 0;
  }
