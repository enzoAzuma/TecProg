#pragma once

namespace Listas
{
template <class TE> class Elemento
{
    private:
        Elemento<TE>* pProx;
        TE* pInfo;
    public:
    Elemento();
    ~Elemento();
    void incluir(TE* p) {pInfo = p;}
    void setProx(Elemento<TE>* pE) {pProx = pE;}
    Elemento<TE>* getProx() {return pProx;}
    TE* getInfo() {return pInfo;}
};

template<class TE> inline Elemento<TE>::Elemento()
: pProx(nullptr), pInfo(nullptr)
{
}

template<class TE> inline Elemento<TE>::~Elemento()
{
}
}