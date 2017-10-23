#ifndef SYGNALLOADER_HPP_INCLUDED
#define SYGNALLOADER_HPP_INCLUDED

class SygnalLoader
{
public:
    SygnalLoader();
    Sygnal wczytajSygnal(std::string nazwaPliku);
    void zapiszSygnal(Sygnal& sygnal,std::string nazwaPliku);
};


#endif // SYGNALLOADER_HPP_INCLUDED
