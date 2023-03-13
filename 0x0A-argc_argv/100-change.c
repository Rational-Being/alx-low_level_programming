#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // check the number of arguments
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    // parse the amount of cents
    int cents = atoi(argv[1]);
    // check if the input is negative
    if (cents < 0) {
        printf("0\n");
        return 0;
    }
    // define the values of the coins
    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = 0;
    // count the number of coins needed
    for (int i = 0; i < 5; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            numCoins++;
        }
    }
    // print the result
    printf("%d\n", numCoins);
    return 0;
}
