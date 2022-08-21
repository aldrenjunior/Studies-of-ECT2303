#include <iostream>
using namespace std;

int calcula_mdc (int a, int b);
int calcula_mmc (int a, int b);

int main()
{

    int n1, n2, mmc, mdc;
    cout <<"Please enter two integers: ";
    cin >> n1 >> n2;

    mdc = calcula_mdc(n1, n2);
    mmc = calcula_mmc(n1, n2);

    cout << "MDC is: "<< mdc << " and MMC is: " << mmc;

    return 0;
}

int calcula_mdc (int a, int b)
{

    int mdc;

    if(a>b)
    {

        mdc = a;
    }
    else
    {

        mdc = b;
    }

    do
    {

        if((a%mdc == 0) && (b%mdc == 0))
        {

            return mdc;
        }
        else
        {

            mdc--;
        }

    }
    while (mdc != 1);
}

int calcula_mmc (int a, int b)
{

    int mmc;

    if(a>b)
    {

        mmc = a;
    }
    else
    {

        mmc = b;
    }


    do
    {

        if((mmc%a == 0) && (mmc%b == 0))
        {

            return mmc;
        }
        else
        {

            mmc++;
        }

    }

    while (mmc != 1);
}
