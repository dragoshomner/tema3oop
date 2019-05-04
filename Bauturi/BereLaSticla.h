class BereLaSticla: public Bautura{
protected:
    vector< pair<string, double> > bere = {{"cu alcool", 8}, {"fara alcool", 7}};
public:
    BereLaSticla():
        Bautura(){};

    void alegeBautura();
};

void BereLaSticla::alegeBautura(){
    cout<<"Alege numarul corespunzator : "<<'\n';
    for(int i = 0 ; i < bere.size() ; i++)
        cout<<i << ". "<<bere[i].first<<" "<<bere[i].second<<" lei"<<'\n';
    int raspuns, raspuns2;
    cin>>raspuns;

    if(raspuns >= 0 && raspuns < bere.size()){
        bauturaAleasa = "Bere la sticla";
        tipBauturaAleasa = bere[raspuns].first;

        cantitateBauturaAleasa = 500;

        pretBauturaAleasa = bere[raspuns].second;

        //cout<<bauturaAleasa << " "<<tipBauturaAleasa<<" "<<cantitateBauturaAleasa<< " "<<pretBauturaAleasa;
    }
}

