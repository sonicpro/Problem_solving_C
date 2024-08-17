/*
 * Determines the value of a collection of coins.
 */
#include <stdio.h>
int main(void)
{
    // inputs.
    char first, middle, last;
    int pennies, nickels;
    int dimes, quarters;
    // outputs.
    int change;
    int dollars;
    // variables.
    int total_cents;

    /* Get and display the customer's initials. */
    printf("Type in 3 initials and press return> ");
    scanf("%c%c%c", &first, &middle, &last);
    printf("Hello %c%c%c, let's see what your coins are worth.\n",
           first, middle, last);
    /* Get the count of each kind of coin. */
    printf("Number of quarters> ");
    scanf("%d", &quarters);
    printf("Number of dimes   > ");
    scanf("%d", &dimes);
    printf("Number of nickels > ");
    scanf("%d", &nickels);
    printf("Number of pennies > ");
    scanf("%d", &pennies);

    /* Compute the total value in cents. */
    total_cents = quarters * 25 + dimes * 10 + 5 * nickels +
        pennies;

    /* Find the vallue in dollars and change. */
    dollars = total_cents / 100;
    change = total_cents % 100;

    /* Display the value in dollars and change */
    printf("\nYour coins are worth %d dollars and %d cents.\n",
           dollars, change);
    return (0);
}
    
