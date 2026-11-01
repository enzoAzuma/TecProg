#pragma once

template <class TE> class Elemento
{
    private:
        Elemento* pProx;
        TE* item;
    public:
    Elemento();
    ~Elemento();
    void setPProx(Elemento<TE>* p) {pProx = p;}
    Elemento<TE>* getPProx() {return pProx;}
    void setItem(TE* i) {item = i;}
    TE* getItem() {return item;}
};

template<class TE> inline Elemento<TE>::Elemento()
: pProx(nullptr), item(nullptr)
{
}

template<class TE> inline Elemento<TE>::~Elemento()
{
    delete item;
}