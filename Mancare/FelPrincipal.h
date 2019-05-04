class FelPrincipal : public Mancare{
protected:
    vector< pair<string, double> > felprincipal = {{"frigarui de pui", 24}, {"tocana de pui", 16}, {"file de vita", 34}, {"vita Chateaubriand", 54}, {"vita Stroganoff", 65} };
    vector< pair<string, double> > garnitura = {{"cartofi prajiti", 8}, {"piure de cartofi", 10}, {"orez sarbesc", 11} };
public:
    FelPrincipal():
        Mancare() {}

    void alegeMancare();
};

void FelPrincipal::alegeMancare()
{
    cout<<"Alegeti numarul corespunzator: "<<'\n';
    for(int i = 0 ; i < felprincipal.size() ; i++){
        cout<<i<< ". "<< felprincipal[i].first << " " << felprincipal[i].second << " lei"<< '\n';
    }
    int raspuns;
    cin>>raspuns;

    mancareAleasa.push_back(felprincipal[raspuns]);

    cout<<"Doriti garnitura? (da/nu)"<<'\n';
    string raspuns2;
    cin>>raspuns2;
    if(!raspuns2.compare("da")){
        cout<<"Alegeti numarul corespunzator: "<<'\n';
        for(int i = 0 ; i < garnitura.size() ; i++){
            cout<<i<<". "<<garnitura[i].first<< " "<<garnitura[i].second << " lei"<< '\n';
        }
        cin>>raspuns;

        mancareAleasa.push_back(garnitura[raspuns]);
    }
}
