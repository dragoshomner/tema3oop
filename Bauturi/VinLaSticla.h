class VinLaSticla : public Bautura{
protected:
    vector< pair<string, double> > vinlasticla = {{"Bordeaux 1996", 550}, {"Castel Bolovanu 2004", 290}};
public:
    VinLaSticla():
        Bautura(){};

    void alegeBautura();
};

void VinLaSticla::alegeBautura(){
    cout<<"Alege numarul corespunzator : "<<'\n';
    for(int i = 0 ; i < vinlasticla.size() ; i++)
        cout<<i << ". "<<vinlasticla[i].first<<" "<<vinlasticla[i].second<<" lei"<<'\n';
    int raspuns;
    cin>>raspuns;

    if(raspuns >= 0 && raspuns < vinlasticla.size()){
        bauturaAleasa = "Vin la sticla";
        tipBauturaAleasa = vinlasticla[raspuns].first;

        cantitateBauturaAleasa = 750;

        pretBauturaAleasa = vinlasticla[raspuns].second;

        //cout<<bauturaAleasa << " "<<tipBauturaAleasa<<" "<<cantitateBauturaAleasa<< " "<<pretBauturaAleasa;
    }
}
