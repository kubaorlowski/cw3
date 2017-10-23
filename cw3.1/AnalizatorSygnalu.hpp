#ifndef ANALIZATORSYGNALU_HPP_INCLUDED
#define ANALIZATORSYGNALU_HPP_INCLUDED

class AnalizatorSygnalu
{
public:
    AnalizatorSygnalu();
    double dlugosc(const sygnal Sygnal&);
    double minimum(const sygnal Sygnal&);
    double srednia(const sygnal Sygnal&);
    double calka(const sygnal Sygnal&);
};


#endif // ANALIZATORSYGNALU_HPP_INCLUDED
