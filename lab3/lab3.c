
#include <stdio.h>
#include "lab3.h"

//This function accepts a character named letter and returns whether it is a 
//lower case alphabetic character or not. 1 if it is, 0 if it isn't.

int isLower(char letter)
{
    int rc = 0;

    if (letter >= 'a' && letter <= 'z')
    {
        rc = 1;
    }

    return rc;
}

// This function accepts a character named letter and returns the
// uppercase version if it is a lowercase alphabetic character.
// If it is not lowercase, it returns the original character.

char toUpper(char letter)
{
    int diff = 'a' - 'A';
    char rc = letter;

    if (isLower(letter))
    {
        rc = letter - diff;
    }

    return rc;
}

// This function prompts the user to enter the age of the customer.
// It accepts no arguments and returns the age entered by the user.
int readAge(void)
{
    int age;

    printf("Please enter the age of the customer: ");
    {
        scanf("%d", &age);
    }

    return age;
}

// This function displays the days of the week and prompts the user
// to select a day from 1 to 7.
// It accepts no arguments and returns the selected day.  
int readDayOfWeek(void)
{
    int day;

    printf("Days of the week\n");
    printf("1) Sunday\n");
    printf("2) Monday\n");
    printf("3) Tuesday\n");
    printf("4) Wednesday\n");
    printf("5) Thursday\n");
    printf("6) Friday\n");
    printf("7) Saturday\n");

    printf("Please enter the day of the week you wish to see the movie (1 to 7): ");
    scanf("%d", &day);

    return day;
}

// This function prompts the user to enter whether they have a coupon.
// It accepts Y or N in uppercase or lowercase and returns 1 for yes
// and 0 for no.
int readHasCoupon(void)
{
    char coupon;

    printf("Do you have a coupon? (Y or N): ");
    scanf(" %c", &coupon);

    coupon = toUpper(coupon);

    if (coupon == 'Y')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// This function calculates the movie ticket price based on the
// customer's age, coupon status, and day of the week.
// It accepts age, coupon status, and day of the week and returns
// the calculated ticket price.
double ticketPrice(int age, int hasCoupon, int dayOfWeek)
{
    double price;

    if (dayOfWeek == 2)
    {
        price = 5.00;
    }
    else if (dayOfWeek >= 3 && dayOfWeek <= 5)
    {
        if (age <= 12)
        {
            price = 7.00;
        }
        else if (age >= 65)
        {
            price = 9.00;
        }
        else
        {
            price = 12.00;
        }
    }
    else
    {
        if (age <= 12)
        {
            price = 8.00;
        }
        else if (age >= 65)
        {
            price = 10.00;
        }
        else
        {
            price = 15.00;
        }
    }

    if (dayOfWeek != 2 && hasCoupon == 1)
    {
        price = price * 0.80;
    }

    return price;
}
