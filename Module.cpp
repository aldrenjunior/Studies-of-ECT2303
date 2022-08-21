#include <iostream>>
using namespace std;

int calculate_module (int a);

int main(){

int n1, module;

cout << "Please enter an integer number: ";
cin >> n1;

module = calculate_module(n1);

cout << "Number module: " << module;

return 0;
}

int calculate_module(int a){

int res = a;

if(a<0){

    res = a*(-1);
}

return res;

}
