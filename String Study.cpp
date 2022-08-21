#include <iostream>
using namespace std;

int strlen (char s[])
{

    int i=0;
    do
    {
        i++ ;
    }
    while(s[i] != '\0');

    return i;
}

void strcpy (char s2[], char s1[])
{
    int i=0;

    do
    {
        s2[i] = s1[i];
        i++;
    }
    while(s1[i-1] != '\0');

}

void strcat (char s1[], char s2[])
{
    int i=0, j=0;

    do
    {
        i++;
    }
    while(s1[i] != '\0');

    do
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    while(s2[j-1] != '\0');

}

int strcmp (char s1[], char s2[])
{

    int i=0;

    do
    {
        if(s1[i] != s2[i])
        {
            if(s1[i] > s2[i])
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
        i++;
    }
    while(s1[i-1] != '\0');

    return 0;
}

int main()
{
    char nome1[30], nome2[30], nome3[30];

    cout << "Please enter both words: \n";
    cin >> nome1;
    cin >> nome2;

    cout << "string size: \n";
    cout << strlen(nome1) << endl;
    cout << strlen(nome2) << endl;

    strcpy(nome3, nome1);
    cout << "copy: \n";
    cout << nome3 << endl;

    strcat(nome1, nome2);
    cout << "All together: \n";
    cout << nome1 << endl;

    cout << "Comparation: \n";
    cout << strcmp (nome1, nome2) << endl;

    return 0;
}
