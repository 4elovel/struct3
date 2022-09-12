#include <iostream>

using namespace std;

struct fractional {
    double numerator;
    double denominator;

    fractional(double numerator, double denominator) {
        this->numerator = numerator;
        this->denominator = denominator;

    }

    void print() {
        cout << "fractional equals " << numerator / denominator << endl;
    }

};

fractional multiply(fractional frac1, fractional frac2) {

    double buf1 = frac1.numerator * frac2.numerator;
    double buf2 = frac1.denominator * frac2.denominator;

    fractional result(buf1, buf2);
    return result;
}

int main()
{
    double num1, num2;
    cout << "write your first fractional:\n" << "numerator-> \n";
    cin >> num1;
    cout << "denominator-> \n";
    cin >> num2;

    if (num2 == 0) {
        cout << "\nOUT OF RANGE\n";
        return 0;
    }
    fractional first(num1, num2);
    first.print();

    cout << "write your second fractional:\n" << "numerator-> \n";
    cin >> num1;
    cout << "denominator-> \n";
    cin >> num2;

    if (num2 == 0) {
        cout << "\nOUT OF RANGE\n";
        return 0;
    }
    fractional second(num1, num2);
    second.print();

    fractional third = multiply(first, second);
    cout << "\nResult:\n";
    third.print();

}
