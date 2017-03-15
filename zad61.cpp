#include <fstream>
#include <string>
 
using namespace std;
 
int main()
{
    ifstream dane("dane_6_1.txt");
    int k = 107;
    ofstream wypis("wyniki_6_1.txt");
    string slowo;
    int a;                                         
    for (int i = 0; i<100; ++i)                    
    {
        dane >> slowo;                             
        for (int j = 0; j < slowo.size(); ++j)     
        {
            a = slowo[j];                          
            a += k;
            while (a > 90)
            {
                a -= 26;
            }
            slowo[j] = a;
        }
        wypis << slowo << endl;
    }
    dane.close();
    wypis.close();
    return 0;
}
