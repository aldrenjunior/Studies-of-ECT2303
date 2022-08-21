#include <iostream>
using namespace std;

const int MAX = 101;

void preencheMatriz(int mat[][MAX], int n)
{

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            mat[i][j] = 0;

        }
    }

}

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

}

void calculaMatriz (int mat[][MAX], int n)
{

    preencheMatriz(mat, n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            if((i>=n/3 && i<=(n-1)-(n/3)) && (j<=(n-1)-(n/3) && j>= (n/3)))
            {

                mat[i][j] = 1;

            }
            else
            {

                if(i==j)
                {

                    mat[i][j] = 2;
                }

                else {

                    if(i+j == n-1){

                    mat[i][j] = 3;

                    }
                }
            }
        }
    }

    mat[n/2][n/2] = 4;

}

int main()
{

    int mat[MAX][MAX];
    int n;

    cout << "Please enter the matrix dimension number: ";
    cin >> n;

    calculaMatriz(mat, n);
    imprimeMatriz(mat, n);

    return 0;

}
