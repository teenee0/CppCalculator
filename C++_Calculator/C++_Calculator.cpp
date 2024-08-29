

#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class Calculator {
private:
    float num1;
    float num2;
public:

    Calculator(T1 num1, T2 num2) {
        this->num1 = static_cast<float>(num1);
        this->num2 = static_cast<float>(num2);

        cout << "Первая цифра равна " << this->num1 << " вторая цифра равна " << this->num2 << endl;

        
    }

    void plus() {
        cout << this->num1 << " + " << this->num2<< " = " << this->num1 + this->num2 << endl;
        
    }

    void minus() {
        cout << this->num1 << " - " << this->num2 << " = " << this->num1 - this->num2 << endl;

    }
    void multiply() {
        cout << this->num1 << " * " << this->num2 << " = " << this->num1 * this->num2 << endl;

    }
    void divide() {
        if (this->num2 == 0) {
            cout << "На ноль делить нельзя!";
            return;
            
        }
        cout << this->num1 << " : " << this->num2 << " = " << this->num1 / this->num2 << endl;
    }
    


};

int main()
{
    setlocale(LC_ALL, "RU");
    Calculator<int, int> calc(1, 2);
    calc.plus();
    calc.minus();
    calc.multiply();
    calc.divide();
    Calculator<int, int> calc2(45, 0);
    calc2.divide();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
