#include <stdio.h>

struct BANKNOTE
{
    float note;
    int count;
    float remaining;
};

int main()
{
    float given_money;
    scanf("%f", &given_money);

    struct BANKNOTE banknote_100;
    banknote_100.note = 100;
    banknote_100.count = given_money / 100;
    banknote_100.remaining = given_money - (100 * banknote_100.count);

    struct BANKNOTE banknote_50;
    banknote_50.note = 50;
    banknote_50.count = banknote_100.remaining / 50;
    banknote_50.remaining = banknote_100.remaining - (50 * banknote_50.count);

    struct BANKNOTE banknote_20;
    banknote_20.note = 20;
    banknote_20.count = banknote_50.remaining / 20;
    banknote_20.remaining = banknote_50.remaining - (20 * banknote_20.count);

    struct BANKNOTE banknote_10;
    banknote_10.note = 10;
    banknote_10.count = banknote_20.remaining / 10;
    banknote_10.remaining = banknote_20.remaining - (10 * banknote_10.count);

    struct BANKNOTE banknote_5;
    banknote_5.note = 5;
    banknote_5.count = banknote_10.remaining / 5;
    banknote_5.remaining = banknote_10.remaining - (5 * banknote_5.count);

    struct BANKNOTE banknote_2;
    banknote_2.note = 2;
    banknote_2.count = banknote_5.remaining / 2;
    banknote_2.remaining = banknote_5.remaining - (2 * banknote_2.count);

    struct BANKNOTE banknote_1;
    banknote_1.note = 1;
    banknote_1.count = banknote_2.remaining / 1;
    banknote_1.remaining = banknote_2.remaining - (1 * banknote_1.count);

    struct BANKNOTE banknote_half;
    banknote_half.note = 0.50;
    banknote_half.count = banknote_1.remaining / 0.50;
    banknote_half.remaining = banknote_1.remaining - (0.50 * banknote_half.count);
    // 1, 0.50, 0.25, 0.10, 0.05 and 0.01

    printf("%d\n", given_money);
    printf("%d nota(s) de R$ 100,00\n", banknote_100.count);
    printf("%d nota(s) de R$ 50,00\n", banknote_50.count);
    printf("%d nota(s) de R$ 20,00\n", banknote_20.count);
    printf("%d nota(s) de R$ 10,00\n", banknote_10.count);
    printf("%d nota(s) de R$ 5,00\n", banknote_5.count);
    printf("%d nota(s) de R$ 2,00\n", banknote_2.count);
    printf("%d nota(s) de R$ 1,00\n", banknote_1.count);
    printf("%d nota(s) de R$ 0.50\n", banknote_half.count);
    return 0;
}




// not solved yet