//massimo in un vettore
#include <iostream>
using namespace std;

double massimo (const double vett[], unsigned int n) {
    if (n == 0)
        return 0;
    double max = vett[0];
    for (int i = 0; i < n; ++i) {
        if (vett[i] > max)
            max = vett[i];
    }
        return max;

}

 int main (){
    const int DIM=6;
    double vett[6]= {9.0, 4.5, 2.4, 8.4, -3.14, -3.14};
    cout<< massimo (vett,DIM);
    return 0;

}
