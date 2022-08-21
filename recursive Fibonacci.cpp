#include <iostream>
using namespace std;

int fibonacci (int a);
void prints (int a);

int main(){

int n;

cout << "Please inform which term you want to calculate: ";
cin >> n;

cout << "The " << n << "th term of the sequence is " << fibonacci(n);

return 0;
}

int fibonacci (int a){

    if(a <= 1){

        return 1;

    } else {

    return fibonacci(a-1)+fibonacci(a-2);

    }
}
