#include <iostream>
#include "primaLibreria.h"
using namespace std;

float x=0;

int main() {
    int d=0;
    cin >> d;

    float a[d];
    for(int i=0; i<d; i++){
        cin >> a[i];
    }
    for(int i=1; i<d; i++){
        float n=max(a[i],a[i-1]);
        if(n>x){
            x=n;
        }
    }
    cout << x;
    return 0;
}
