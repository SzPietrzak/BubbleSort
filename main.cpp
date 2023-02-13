
#include "bubbleSort.h"
#include <string>

using namespace std;


int main()
{
    srand(time(NULL));
    cout << "Sprawdzenie float \n";
    float daneF[5] = {0.1 , 0.3, 1.5, -3.2, 8};
    ViewTable<float> (5, daneF);
    cout << BubbleSort2<float> (daneF, 5) << endl;
    ViewTable<float> (5, daneF);
    cout << "\n\nSprawdzenie int \n";
    int daneI[5] = {1 , 3, 15, -32, 8};
    daneI[5] = RandomTable(5, daneI);
    ViewTable<int> (5, daneI);
    cout << BubbleSort2<int> (daneI, 5) << endl;
    ViewTable<int> (5, daneI);
    cout << "\n\nSprawdzenie char \n";
    char daneC[5] = {'a' , 'f', 'c', '+', ','};
    ViewTable<char> (5, daneC);
    cout << BubbleSort2<char> (daneC, 5) << endl;
    ViewTable<char> (5, daneC);

    cout << "\n\nSprawdzenie string \n";
    string daneS[5] = {"ala", "ela", "ola", "wiola", "basia"};
    ViewTable<string> (5, daneS);
    cout << BubbleSort2<string> (daneS, 5) << endl;
    ViewTable<string> (5, daneS);
    return 0;
}
