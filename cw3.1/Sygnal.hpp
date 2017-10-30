#ifndef SYGNAL_HPP_INCLUDED
#define SYGNAL_HPP_INCLUDED

class Sygnal
{
private:
    std::vector <Probka> probki;
public:
    Sygnal();
    void dodajProbke(const p Probka&);
    int iloscProbek();
    operator[](int i):Probka&;
    friend std::ostream& operator<<(std::ostream& stream,const sygnal Sygnal&);

};



#endif // SYGNAL_HPP_INCLUDED
