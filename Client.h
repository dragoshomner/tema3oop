class Client{
protected:
    double notaPlata;
public:
    Client(double notaPlata = 0):notaPlata(notaPlata){}

    Client(const Client&);

    Client& operator=(const Client&);

    double getNotaPlata() { return notaPlata; }

    void cereBautura();
    void cereMancare();
};

Client::Client(const Client& client)
{
    notaPlata = client.notaPlata;
}

Client& Client::operator=(const Client& client)
{
    if(this == &client)
        return *this;
    notaPlata = client.notaPlata;
    return *this;
}

void Client::cereBautura()
{
    cout<<"Doriti ceva de baut? (da/nu)"<<'\n';
    string raspuns;
    cin>>raspuns;
    if(!raspuns.compare("da")){
        cout<<"Ce doriti? Alegeti numarul corespunzator:"<<'\n';
        cout<<"0. vin varsat"<<'\n'<<"1. vin la sticla"<<'\n'<<"2. bere la sticla"<<'\n'<<"3. apa"<<'\n';
        int raspuns;
        cin>>raspuns;
        if(raspuns == 0){
            VinVarsat vinvarsat;
            vinvarsat.alegeBautura();
            notaPlata += vinvarsat.getPretBauturaAleasa();
        }
        else if(raspuns == 1){
            VinLaSticla vinlasticla;
            vinlasticla.alegeBautura();
            notaPlata += vinlasticla.getPretBauturaAleasa();
        }
        else if(raspuns == 2){
            BereLaSticla berelasticla;
            berelasticla.alegeBautura();
            notaPlata += berelasticla.getPretBauturaAleasa();
        }
        else{
            Apa apa;
            apa.alegeBautura();
            notaPlata += apa.getPretBauturaAleasa();
        }
    }
}

void Client::cereMancare()
{
    cout<<"Doriti ceva de mancare? (da/nu)"<<'\n';
    string raspuns;
    cin>>raspuns;
    if(!raspuns.compare("da")){
        cout<<"Doriti ciorba? (da/nu)"<<'\n';
        cin>>raspuns;
        if(!raspuns.compare("da")){
            Ciorba ciorba;
            ciorba.alegeMancare();
            notaPlata += ciorba.calculeazaPretMancareAleasa();
        }

        cout<<"Doriti fel principal? (da/nu)"<<'\n';
        cin>>raspuns;
        if(!raspuns.compare("da")){
            FelPrincipal felprincipal;
            felprincipal.alegeMancare();
            notaPlata += felprincipal.calculeazaPretMancareAleasa();
        }

        cout<<"Doriti desert? (da/nu)"<<'\n';
        cin>>raspuns;
        if(!raspuns.compare("da")){
            Desert desert;
            desert.alegeMancare();
            notaPlata += desert.calculeazaPretMancareAleasa();
        }
    }

}
