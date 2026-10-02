
#include <stdio.h>
#include "lab3.h"

int main(void)
{
    int dayOfWeek;
    int age = 0;
    int hasCoupon = 0;
    double price;

    dayOfWeek = readDayOfWeek();

    if (dayOfWeek != 2)
    {
        age = readAge();
        hasCoupon = readHasCoupon();
    }

    price = ticketPrice(age, hasCoupon, dayOfWeek);

    printf("Your ticket will cost: $%.2f\n", price);

    return 0;
}