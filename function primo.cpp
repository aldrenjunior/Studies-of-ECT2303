#include <iostream>
using namespace std;

bool isPrimo (int a);

int main(){

    int n1, primo;

    cout << "Please enter a number: ";
    cin >> n1;

    while(n1>0){

        if(isPrimo(n1)){

            cout << n1 << " is Primo. \n";

        } else {

            cout << n1 << " is not Primo. \n";
        }

        cout << "Please enter a number: ";
        cin >> n1;
    }

    return 0;

}

bool isPrimo (int a){

    int i;

    for(i=2; i<a; i++){

        if(a%i == 0){

        return false;

        }
    }

    return true;
}
