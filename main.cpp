#include <iostream>
#include <cmath>
using namespace std;

// Завдання 1 (Proc23)
void QuadraticRoots(double a, double b, double c, double &x1, double &x2, bool &hasRoots);
void task_proc23();

// Завдання 2 (Proc36)
bool IsPower5(int k);
void task_proc36();

// Завдання 3 (Integer5)
bool input_Integer5(int &a, int &b);     // введення з перевіркою коректності даних
int calculate_Integer5(int a, int b);    // підрахунок залишку
void print_Integer5(int result);         // виведення результату в консоль
void task_integer5();

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    int menu;

    while (true)
    {
        cout << "Оберіть завдання - 1, 2 або 3 (щоб завершити введіть 0): ";
        cin >> menu;

        if (menu == 0)
        {
            cout << "Роботу завершено" << endl;
            break;
        }

        switch (menu)
        {
        case 1:
            task_proc23();
            break;
        case 2:
            task_proc36();
            break;
        case 3:
            task_integer5();
            break;
        case 0:
            cout << "Роботу завершено" << endl;
            break;
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}


    // Завдання 1
    void QuadraticRoots(double a, double b, double c, double &x1, double &x2, bool &hasRoots)
    {
        double D = b * b - 4 * a * c;  // знаходимо дискримінант
        
        // якщо дискримінант менше нуля - дійсних коренів немає
        if (D < 0)
        {
            hasRoots = false;  // коренів немає
        }
        // якщо D >/= 0, то корені існують
        else
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            hasRoots = true;  // корені існують
        }
    }

    void task_proc23()
    {
        cout << "\n Завдання 1" << endl;
        double x1 = 0, x2 = 0;
        bool hasRoots = false;
        cout << "==========================================" << endl;
        // Дискримінант 1, корені мають бути 3 і 2
        cout << "Рівняння №1: x^2 - 5x + 6 = 0" << endl;
         QuadraticRoots(1, -5, 6, x1, x2, hasRoots);
        if (hasRoots) 
        {
            cout << "Результат: Корені існують: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else
        {
            cout << "Результат: Дійсних коренів немає" << endl;
        }
        cout << "==========================================" << endl;
        // Дискримінант -16, коренів немає
        cout << "Рівняння №2: x^2 + 2x + 5 = 0" << endl;
        QuadraticRoots(1, 2, 5, x1, x2, hasRoots);
        if (hasRoots) 
        {
            cout << "Результат: Корені існують: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else {
            cout << "Результат: Дійсних коренів немає" << endl;
        }
        cout << "==========================================" << endl;
        // Дискримінант 0, однакові корені - 2
        cout << "Рівняння №3: x^2 - 4x + 4 = 0" << endl;
        QuadraticRoots(1, -4, 4, x1, x2, hasRoots);
        if (hasRoots) 
        {
            cout << "Результат: Корені існують: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else
        {
            cout << "Результат: Дійсних коренів немає" << endl;
        }
        cout << "==========================================" << endl;
    }


    // Завдання 2
    bool IsPower5(int k) 
    {
        // за умовою задачі k > 0, але k < 3000
        // тому всі можливі степені 5: 1, 5, 25, 125, 625
        // 3125 також степінь 5, але 3125 > 3000
        // перевіряємо числа через логічне "АБО" оператор ||
        if (k == 1 || k == 5 || k == 25 || k == 125 || k == 625)
        {
            return true;  // Є степьнью 5
        }
        return false;  // НЕ Є степінью 5
    }

    void task_proc36()
    {
        cout << "\n Завдання 2" << endl;
        
        cout << "=============================" << endl;
        
        int test1 = 25;
        int test2 = 55;
        int test3 = 625;
        int test4 = 38;
        int test5 = 65;
        int test6 = 125;
        int test7 = 5;
        int test8 = 3125;
        int test9 = 0;
        int test10 = 1;
        
         int total_powers = 0; //
        
        cout << "Число " << test1 << (IsPower5(test1) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        cout << "Число " << test2 << (IsPower5(test2) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        cout << "Число " << test3 << (IsPower5(test3) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        cout << "Число " << test4 << (IsPower5(test4) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        cout << "Число " << test5 << (IsPower5(test5) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        cout << "Число " << test6 << (IsPower5(test6) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        cout << "Число " << test7 << (IsPower5(test7) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        cout << "Число " << test8 << (IsPower5(test8) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        cout << "Число " << test9 << (IsPower5(test9) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        cout << "Число " << test10 << (IsPower5(test10) ? (total_powers++, " Є ") : " НЕ Є ") << "степенем 5" << endl;
        
        cout << "=============================" << endl;
        
        cout << "Кількість степенів числа 5: " << total_powers << endl;
    }
    
    
    // Завдання 3
    
    // введення з перевіркою коректності даних
    bool input_Integer5(int &a, int &b) 
    {
        cout << "Введіть ціле число a: ";  // довжина великого відрізка, a > b
        cin >> a;
        cout << "Введіть ціле число b: ";  // довжина малого відрізка, b < a
        cin >> b;

        // перевірка на коректність введених данних
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            return true; // повернення true вказує на введення некоректних данних
        }

        // за умовою задачі a > b, обидва числа є додатніми, та якщо немає обмежень, перевіряємо діапазон [-100, 100]
        // тож якщо числа мають бути додатними, робочий діапазон [1, 100]
        if (a <= 0 || b <= 0 || a <= b || a > 100 || b > 100)
        {
            return true; // не коректні дані, видає помилку
        }

        return false; // коректні дані
    }

    // підрахунок залишку
    int calculate_Integer5(int a, int b)
    {
        return a % b;  // для знаходження незайнятої частини, користуємося оператором % для взяття залишку
    }

    // виведення результату в консоль
    void print_Integer5(int result)
    {
        cout << "Довжина незанятої частини відрізка a становить: " << result << endl;
    }

    void task_integer5()
    {
        cout << "\n Завдання 3" << endl;
        int A = 0, B = 0;

        if (input_Integer5(A, B))
        {
            // у разі введення некоректних даних вивести повідомлення і розрахунки НЕ виконувати
            cout << "Помилка: Введено некоректні дані" << endl;
            return;  // вихід з функції, розрахунки нижче ігноруються
        }

        // якщо дані введено вірно, передаємо змінні А, В у функцію розрахунку
        int remainder = calculate_Integer5(A, B);

        // виводимо пораховий залишок у консоль
        print_Integer5(remainder);
    }