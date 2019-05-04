class Mancare{
protected:
    vector< pair<string, double> > mancareAleasa;
public:
    Mancare(vector< pair<string, double> > mancareAleasa = vector< pair<string, double> >()):
        mancareAleasa(mancareAleasa){}

    Mancare(const Mancare&);

    Mancare& operator=(const Mancare&);

    virtual void alegeMancare() {};

    double calculeazaPretMancareAleasa();
};

Mancare::Mancare(const Mancare& mancare)
{
    for(int i = 0 ; i < mancareAleasa.size() ; i++)
    {
        mancareAleasa[i] = mancare.mancareAleasa[i];
    }
}

Mancare& Mancare::operator=(const Mancare& mancare)
{
    if(this == &mancare)
        return *this;
    for(int i = 0 ; i < mancareAleasa.size(); i++)
    {
        mancareAleasa[i] = mancare.mancareAleasa[i];
    }
    return *this;
}

double Mancare::calculeazaPretMancareAleasa()
{
    double pretMancareAleasa = 0;
    for(vector< pair<string, double> >::iterator it = mancareAleasa.begin() ; it != mancareAleasa.end() ; it++){
        pretMancareAleasa += (*it).second;
    }
    return pretMancareAleasa;
}
