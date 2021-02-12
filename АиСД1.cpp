#include <iostream>
using namespace std;

/*Первый способ итеративный
a^n=a_1*a_2*...*a_n  */
float power1(int a, int  n) {
    float mult = 1;
    for (int i = 1; i <= abs(n); i++)
        mult *= a;
    if (n > 0)
        return mult;
    else
        return 1 / mult;
}

/*Второй способ рекурсивный
a^n=a_1*a^(n-1)   */
float power2(int a, int n) {
    if (n == 0)
        return 1;
    else
        if (n < 0)
            return 1 / power2(a, -n);
        else
            return a * power2(a, n - 1);
}

int main()
{
    cout << power1(2, 3) << "\t";
    cout << power2(2, 3) << "\t";
    return 0;
}
