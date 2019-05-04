class Apa: public Bautura{
protected:
    vector< pair<string, double> > apa = {{"plata", 4}, {"minerala", 5}};
public:
    Apa():
        Bautura(){};

    void alegeBautura();
};

void Apa::alegeBautura(){
    cout<<"Alege numarul corespunzator : "<<'\n';
    for(int i = 0 ; i < apa.size() ; i++)
        cout<<i << ". "<<apa[i].first<<" "<<apa[i].second<<" lei"<<'\n';
    int raspuns;
    cin>>raspuns;

    if(raspuns >= 0 && raspuns < apa.size()){
        bauturaAleasa = "Apa";
        tipBauturaAleasa = apa[raspuns].first;

        cantitateBauturaAleasa = 500;

        pretBauturaAleasa = apa[raspuns].second;

        //cout<<bauturaAleasa << " "<<tipBauturaAleasa<<" "<<cantitateBauturaAleasa<< " "<<pretBauturaAleasa;
    }
}

