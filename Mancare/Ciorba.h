class Ciorba: public Mancare{
protected:
    vector< pair<string, double> > ciorba = {{"ciorba de burta", 12}, {"ciorba de legume", 8}, {"ciorba de ciuperci", 8} };
    vector< pair<string, double> > adaos = {{"smantana", 1}, {"ardei", 1} };
public:
    Ciorba():
        Mancare(){}

    void alegeMancare();
};

void Ciorba::alegeMancare()
{
    cout<<"Alegeti numarul corespunzator: "<<'\n';
    for(int i = 0 ; i < ciorba.size() ; i++){
        cout<<i<< ". "<< ciorba[i].first << " " << ciorba[i].second << " lei"<< '\n';
    }
    int raspuns;
    cin>>raspuns;

    mancareAleasa.push_back(ciorba[raspuns]);

    for(vector< pair<string, double> >::iterator it = adaos.begin() ; it != adaos.end() ; it++){
        cout<<"Doriti "<<(*it).first << " ? (da/nu)"<<'\n';
        string raspuns2;
        cin>>raspuns2;
        if(!raspuns2.compare("da")){
            mancareAleasa.push_back((*it));
        }
    }
}
