#include <stdio.h>
int main(void)
{
    int money, change;
    int price, c10000, c5000, c1000, c500, c100, c10;

    printf("물건 값을 입력하시오:");
    scanf("%d", &price);

    printf("투입한 금액을 입력하시오:");
    scanf("%d", &money);
    change = money - price;

    c10000 = change / 10000;
    change = change % 10000;

    c5000 = change / 5000;
    change = change % 5000;

    c1000 = change / 1000;
    change = change % 1000;

    c500 = change / 500;
    change = change % 500;

    c100 = change / 100;
    change = change % 100;

    c10 = change / 10;
    change = change % 10;

    printf("\n만원권: %d장\n", c10000);
    printf("\n오천원권: %d장\n", c5000);
    printf("\n천원권: %d장\n", c1000);
    printf("\n오백원 동전: %d개\n", c500);
    printf("\n백원 동전: %d개\n", c100);
    printf("\n십원 동전: %d개\n", c10);
    return 0;
    
}
