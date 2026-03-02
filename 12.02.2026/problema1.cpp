#include <iostream>
using namespace std;
int numarcolegi, nota[11], notecolegi[32], i;
int main()
{
    cin  >> numarcolegi;
    for(i = 1;i <= numarcolegi;i++) {
        cin >> notecolegi[i];
    }
    
    for(i = 1;i <= numarcolegi;i++)
    {
        if(notecolegi[i] >= 1 && notecolegi[i] <= 10) { 
            nota[notecolegi[i]]++;
        }
    }

    for(i = 1;i <= 10;i++) {
        cout << "Nota " << i << " apare de " << nota[i] << " ori" << "\n";
    }
    
    return 0;
}