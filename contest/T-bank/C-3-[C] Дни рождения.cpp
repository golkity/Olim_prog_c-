#include "bits-stdc++.h"
using namespace std;
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main() {
    int d1 = 29, m1 = 2, y, d2, m2, y2, d3, m3, y3;
    scanf("%d.%d.%d", &d2, &m2, &y);
    scanf("%d.%d.%d", &d3, &m3, &y3);
    int first_400 = (y % 400 == 0) ? y : y - (y % 400) + 400;
    int last_400 = y3 - (y3 % 400);
    int count_400 = (last_400 - first_400) / 400 + 1;

    int first_100 = (y % 100 == 0) ? y : y - (y % 100) + 100;
    int last_100 = y3 - (y3 % 100);
    int count_100 = (last_100 - first_100) / 100 + 1;

    int first_4 = y;
    int last_4 = y3 - (y3 % 4);
    int count_4 = (last_4 - first_4) / 4 + 1;

    int petya = count_4 - count_100 + count_400;

    if (isLeapYear(y3)) {
        if (m3 < m1 || (m3 == m1 && d3 < d1)) {
            petya -= 1;
        }
    }

    int vasya;
    if (d1 == d2 && m1 == m2) {
        vasya = petya;
    } else {
        vasya = y3 - y + 1;
        if (m3 < m2 || (m3 == m2 && d3 < d2)) {
            vasya -= 1;
        }
    }
    printf("%d %d\n", petya, vasya);

    return 0;
}
