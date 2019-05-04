class Desert : public Mancare{
protected:
    vector< pair<string, double> > desert = {{"inghetata", 4}, {"tort Krantz", 25} };
public:
    void alegeMancare();
};

void Desert::alegeMancare()
{
    cout<<"Alegeti numarul corespunzator: "<<'\n';
    for(int i = 0 ; i < desert.size() ; i ++){
        cout<<i<<". "<<desert[i].first << " "<<desert[i].second<<" lei"<<'\n';
    }
    int raspuns;
    cin>>raspuns;
    if(raspuns == 0){
        cout<<"Doriti 3, 4 sau 5 cupe? "<<'\n';
        cin>>raspuns;
        if(raspuns < 3 || raspuns > 5)
            raspuns = 3;
        mancareAleasa.push_back(make_pair(desert[0].first, raspuns * desert[0].second));
    }
    else{
        mancareAleasa.push_back(desert[raspuns]);
    }
}
