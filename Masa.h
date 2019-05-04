class Masa{
protected:
    int numarClienti;
    Client *client;
public:
    Masa(int numarClienti = 0):numarClienti(numarClienti){
        client = new Client[numarClienti];
    }

    Masa(const Masa&);

    Masa& operator=(const Masa&);

    void aseazaLaMasa();

    double cereNotaSeparata(int);

    ~Masa(){
        delete[] client;
    }
};

Masa::Masa(const Masa& masa)
{
    numarClienti = masa.numarClienti;
    for(int i = 0 ; i < numarClienti ; i++)
        client[i] = masa.client[i];
}

Masa& Masa::operator=(const Masa& masa)
{
    if(this == &masa)
        return *this;
    numarClienti = masa.numarClienti;
    for(int i = 0 ; i < numarClienti ; i++)
        client[i] = masa.client[i];
    return *this;
}


void Masa::aseazaLaMasa()
{
    for(int i = 0 ; i < numarClienti ; i++){
        cout<<"Client "<<i << '\n';
        client[i].cereBautura();
        client[i].cereMancare();
    }
}


double Masa::cereNotaSeparata(int index)
{
    return client[index].getNotaPlata();
}
