//Кафедра "Информационная безопасность"
//ИУ8-32
//Забродина М.П.
//Лабораторная работа №3(Теория систем и системный анализ)
#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>
using namespace std;
     
const double a = 1.5, b = 4.;
//const double Tmax = 10000., Tmin = 0.1;

double func(double x) {
    return cos(x)*tanh(x);
}
double P(double delta, double T){
    return exp(-delta / T);
}
void print_delimeter(){
    cout <<setfill('-') <<"+" <<setw(7) <<"-";
       cout <<"+" <<setw(11) <<"-";
       cout <<"+" <<setw(9) <<"-";
       cout <<"+" <<setw(12) <<"-";
       cout <<"+" <<endl <<setfill(' ');
}
void SA(double Tmax, double Tmin, int function){
    print_delimeter();
    srand(static_cast<unsigned int>(time(nullptr)));
    cout <<"|   N   |     T     |    x    |";
    if (function == 1) cout <<"    f(x)    |" <<endl;
    else cout <<"f(x)*sin(5x)|" <<endl;
    print_delimeter();
    double x = a + (b - a) * rand() / RAND_MAX;
    double f;
    if (function == 1) f = func(x);
    else f = func(x)*sin(5*x);
    int N = 1;
    while (Tmax - Tmin > 0){
        cout <<"|" <<setw(7) <<N <<"|";
        cout <<setw(11) <<fixed <<setprecision(3) <<Tmax <<"|";
        cout <<setw(9) <<x <<"|";
        double x1 = a + (b - a) * rand() / RAND_MAX;
        double f1;
        if (function == 1) f1 = func(x1);
        else f1 = func(x1)*sin(5*x1);
        cout <<setw(12) <<f <<"|";
        cout <<endl;
        double delta = f1 - f;
        if (delta <= 0) {
            x = x1;
            f = f1;
        } else {
            double alpha = 0.01 * (rand() % 101);
            if (P(delta, Tmax) - alpha >= 0) {
                x = x1;
                f = f1;
            }
        }
        Tmax *= 0.95;
        N++;
    }
    print_delimeter();
    cout <<endl;
    cout <<"Result: Xmin = " <<x <<", Ymin = ";
    if (function == 1) cout <<func(x);
    else cout <<func(x)*sin(5*x);
}

int main() {
    SA(10000, 0.1, 1);
    cout <<endl;
    SA(10000, 0.1, 2);
    cout <<endl;
    return 0;
}
