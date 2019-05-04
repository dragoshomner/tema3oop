class VinVarsat: public Bautura{
protected:
    vector< pair<string, double> > vinvarsat = {{"rosu", 7}, {"alb", 8}};
public:
    VinVarsat():
        Bautura(){};

    void alegeBautura();
};

void VinVarsat::alegeBautura(){
    cout<<"Alege numarul corespunzator : "<<'\n';
    for(int i = 0 ; i < vinvarsat.size() ; i++)
        cout<<i << ". "<<vinvarsat[i].first<<" "<<vinvarsat[i].second<<" lei/ 100ml"<<'\n';
    int raspuns, raspuns2;
    cin>>raspuns;

    if(raspuns >= 0 && raspuns < vinvarsat.size()){
        bauturaAleasa = "Vin varsat";
        tipBauturaAleasa = vinvarsat[raspuns].first;

        cout<<"Cati ml de vin varsat doriti? "<<'\n';
        cin>>raspuns2;

        cantitateBauturaAleasa = raspuns2;

        pretBauturaAleasa = vinvarsat[raspuns].second * cantitateBauturaAleasa / 100;
    }
}
