#include <iomanip>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int a, b,time;
    while(cin >> a >> b) {
            if(a<b)
        time=b-a;
    else
        time=b+24-a;

            cout<<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;


    }
}
