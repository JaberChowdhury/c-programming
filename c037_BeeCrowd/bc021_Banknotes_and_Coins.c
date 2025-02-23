// #include <stdio.h>

// struct BANKNOTE
// {
//     float note;
//     int count;
//     float remaining;
// };

// int main()
// {
//     float given_money;
//     scanf("%f", &given_money);

//     struct BANKNOTE banknote_100;
//     banknote_100.note = 100;
//     banknote_100.count = given_money / 100;
//     banknote_100.remaining = (float)given_money - (100 * banknote_100.count);

//     struct BANKNOTE banknote_50;
//     banknote_50.note = 50;
//     banknote_50.count = banknote_100.remaining / 50;
//     banknote_50.remaining = (float)banknote_100.remaining - (50 * banknote_50.count);

//     struct BANKNOTE banknote_20;
//     banknote_20.note = 20;
//     banknote_20.count = banknote_50.remaining / 20;
//     banknote_20.remaining = (float)banknote_50.remaining - (20 * banknote_20.count);

//     struct BANKNOTE banknote_10;
//     banknote_10.note = 10;
//     banknote_10.count = banknote_20.remaining / 10;
//     banknote_10.remaining = (float)banknote_20.remaining - (10 * banknote_10.count);

//     struct BANKNOTE banknote_5;
//     banknote_5.note = 5;
//     banknote_5.count = banknote_10.remaining / 5;
//     banknote_5.remaining = (float)banknote_10.remaining - (5 * banknote_5.count);

//     struct BANKNOTE banknote_2;
//     banknote_2.note = 2;
//     banknote_2.count = banknote_5.remaining / 2;
//     banknote_2.remaining = (float)banknote_5.remaining - (2 * banknote_2.count);

//     struct BANKNOTE banknote_1;
//     banknote_1.note = 1;
//     banknote_1.count = banknote_2.remaining / 1;
//     banknote_1.remaining = (float)banknote_2.remaining - (1 * banknote_1.count);

//     struct BANKNOTE banknote_half;
//     banknote_half.note = 0.50;
//     banknote_half.count = banknote_1.remaining / 0.50;
//     banknote_half.remaining = (float)banknote_1.remaining - (0.50 * banknote_half.count);

//     struct BANKNOTE banknote_fourth;
//     banknote_fourth.note = 0.25;
//     banknote_fourth.count = banknote_half.remaining / 0.25;
//     banknote_fourth.remaining = (float)banknote_half.remaining - (0.25 * banknote_fourth.count);

//     struct BANKNOTE banknote_pointTen;
//     banknote_pointTen.note = 0.10;
//     banknote_pointTen.count = banknote_fourth.remaining / 0.10;
//     banknote_pointTen.remaining = (float)banknote_fourth.remaining - (0.10 * banknote_pointTen.count);

//     struct BANKNOTE banknote_pointZeroFive;
//     banknote_pointZeroFive.note = 0.05;
//     banknote_pointZeroFive.count = banknote_pointTen.remaining / 0.05;
//     banknote_pointZeroFive.remaining = (float)banknote_pointTen.remaining - (0.05 * banknote_pointZeroFive.count);

//     struct BANKNOTE banknote_pointZeroOne;
//     banknote_pointZeroOne.note = 0.01;
//     banknote_pointZeroOne.count = banknote_pointZeroFive.remaining / 0.01;
//     banknote_pointZeroOne.remaining = (float)banknote_pointZeroFive.remaining - (0.01 * banknote_pointZeroOne.count);

//     printf("NOTAS:\n");
//     printf("%d nota(s) de R$ 100,00\n", banknote_100.count);
//     printf("%d nota(s) de R$ 50,00\n", banknote_50.count);
//     printf("%d nota(s) de R$ 20,00\n", banknote_20.count);
//     printf("%d nota(s) de R$ 10,00\n", banknote_10.count);
//     printf("%d nota(s) de R$ 5,00\n", banknote_5.count);
//     printf("%d nota(s) de R$ 2,00\n", banknote_2.count);
//     printf("MOEDAS:\n");
//     printf("%d moeda(s) de R$ 1,00\n", banknote_1.count);
//     printf("%d moeda(s) de R$ 0.50\n", banknote_half.count);
//     printf("%d moeda(s) de R$ 0.25\n", banknote_fourth.count);
//     printf("%d moeda(s) de R$ 0.10\n", banknote_pointTen.count);
//     printf("%d moeda(s) de R$ 0.05\n", banknote_pointZeroFive.count);
//     printf("%d moeda(s) de R$ 0.01\n", banknote_pointZeroOne.count);
//     return 0;
// }

#include <stdio.h>

struct BANKNOTE
{
    int value; // Store in cents to avoid precision issues
    int count;
};

int main()
{
    double given_money;
    scanf("%lf", &given_money);

    int amount = (int)(given_money * 100 + 0.5); // Convert to cents and round correctly

    // Define banknotes and coins in cents
    int values[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    struct BANKNOTE banknotes[12];

    printf("NOTAS:\n");
    for (int i = 0; i < 12; i++)
    {
        banknotes[i].value = values[i];
        banknotes[i].count = amount / values[i];
        amount %= values[i];

        if (i == 6) // Separate banknotes and coins
            printf("MOEDAS:\n");

        if (values[i] >= 200) // Print as banknote
            printf("%d nota(s) de R$ %.2f\n", banknotes[i].count, values[i] / 100.0);
        else // Print as coin
            printf("%d moeda(s) de R$ %.2f\n", banknotes[i].count, values[i] / 100.0);
    }

    return 0;
}
