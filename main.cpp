//Условие:
//Пользователь вводит натуральное число. Определите сумму цифр введенного числа.
//В какую минимальную степень необходимо возвести число 5, чтобы полученное значение превзошло введенное число
//
//3. Самостоятельная работа.
//Индивидуальное задание:
//Пользователь вводит два натуральных числа. Выведите на экран то из них, у которого сумма цифр меньше.
//Если сумма цифр одинакова, то выведите соответствующее сообщение.
//Подсчитайте, какое минимальное количество последовательно расположенных натуральных чисел (начиная с 1) необходимо перемножить,
//чтобы полученное произведение превзошло минимальное введенное пользователем число.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    int a, n = 1;
    int sum = 0;
    cout << "Введите число: ";
    cin >> a;
    int a1 = a;
    while(a1 > 0){
        sum+= a1%10;
        a1/=10;
    }
    cout << endl << "суммa цифр введенного числа = " << sum << endl;
    while(pow(5, n) <= a){
        n++;
    }
    cout << "Минимальная степень числа 5, чтобы она превзошла введённое число = " << n << endl;

////////////////////////////
    int num1, num2;
    int sum1 = 0, sum2 = 0;
    int AmountToMult = 0;
    int MultAmount = 1;

    cout << "Введите 2 натуральных числа: ";
    cin >> num1 >> num2;
    int cop_num1 = num1;
    int cop_num2 = num2;
    cout << endl;

    while(cop_num1 > 0){
        sum1+= cop_num1%10;
        cop_num1/=10;
    }
    while(cop_num2 > 0){
        sum2+= cop_num2%10;
        cop_num2/=10;
    }
    if(sum1 > sum2){
        cout << "меньшая сумма цифр у числа 2: " << sum2 << endl;
    } else if(sum1 < sum2){
        cout << "меньшая сумма цифр у числа 1: " << sum1 << endl;
    } else {
        cout << "сумма чисел равна" << endl;
    }


    for (int i = 1; min(num1, num2) > MultAmount; ++i) {
        MultAmount*=i;
        AmountToMult++;
    }
    cout << "минимальное количество последовательно расположенных натуральных чисел (начиная с 1) необходимых перемножить,\n"
            "чтобы полученное произведение превзошло минимальное введенное пользователем число = " << AmountToMult << endl;



    return 0;
}
