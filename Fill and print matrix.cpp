#include <iostream>
using namespace std;

const int MAX = 100;

void imprimeMatriz(int mat[][MAX], int n)
{

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            cout << mat[i][j] << " ";

        }

        cout << endl;
    }

    cout << endl;

}

int preencheMatriz(int mat[][MAX], int n){

    cout << "Please enter the matrix dimension number: ";
    cin >> n;

    while(n!= 0){

    for(int i=0; i<n; i++)
    {

    int cont = 1;

        for(int j=i; j<n; j++)
        {

            mat[i][j] = cont;
            mat[j][i] = cont;
            cont++;

        }

    }

    imprimeMatriz(mat, n);

    cin>>n;

    }

}

int main()
{
    int mat[MAX][MAX];
    int n;

    preencheMatriz(mat, n);

    return 0;
}
