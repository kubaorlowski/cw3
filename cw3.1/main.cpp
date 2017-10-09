#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
#include <string>


using namespace std;

    struct Probka
    {
        double t;
        double x;
        Probka(double _t,double _x)
        {
            t=_t;
            x=_x;
        }
    };

    vector <Probka> wczytaj (string abc)
    {
      vector <Probka> tablica;
      ifstream plik (abc);
      string linia;
      while (getline(plik,linia))
      {
          cout << linia << endl;
      };
      plik close;
      return tablica;
    }

    //tablica push_back (probka1);
    //cout<<tablica[a].t<<endl;

int main(int argc, char* argv[])
{

    if (argc !=2)
    {
        return -1;
    }

    vector <Probka> dane=wczytaj(argv[1]);






    return 0;
}
