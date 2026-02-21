#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //N_ELEMENTS kellene
    int *b = new int[NELEMENTS]; 
    //szimpla idezojel es hianyzo pontosvesszo
    std::cout << '1-100 ertekek duplazasa' 
    //hianyzo feltetel es leptetes
    for (int i = 0;) 
    {
        b[i] = i*2;
    }
    //a feltetel miatt 0-nal azonnal kilep
    for (int i = 0; i; i++) 
    {
        std::cout << "Ertek:" //hianyzo pontosvesszo
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //nincs inicializalva
    //vesszo a pontosvesszo helyett
    for (int i = 0; i < N_ELEMENTS, i++) 
    {
        atlag += b[i] //hianyzo pontosvesszo
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //a lefoglalt memoria nincs felszabaditva
    return 0;
}