class Restaurant{
    int numarClienti;
    int *notePlatite;
    int numarNotePlatite = 0;

    static Restaurant *instance;
    Restaurant(){}

public:
    static Restaurant *getInstance();

    void ocupaMasa();

    void start();
};

Restaurant* Restaurant::instance = 0;

Restaurant* Restaurant::getInstance(){
    if(instance == 0){
        instance = new Restaurant();
    }
    return instance;
}

void Restaurant::ocupaMasa(){
    cout<<"Numarul clientilor care s-au asezat la masa: ";
    cin>>numarClienti;

    notePlatite = new int[numarClienti];
    for(int i = 0 ; i < numarClienti ; i++)
        notePlatite[i] = 0;

    Masa masa(numarClienti);
    masa.aseazaLaMasa();

    while(numarNotePlatite < numarClienti){
        cout<<"Alege varianta: "<<'\n';
        cout<<"0. Cere nota separat"<<'\n';
        cout<<"1. Cere nota pentru restul"<<'\n';

        int raspuns;
        cin>>raspuns;

        if(raspuns == 0){
            cout<<"Scrie indicele clientului : " << '\n';
            cin>>raspuns;
            if(notePlatite[raspuns]){
                cout<<"Clientul "<<raspuns << " a platit deja"<<'\n';
            }
            else{
                cout<<"Clientul " << raspuns << " are de platit " << masa.cereNotaSeparata(raspuns)<< "lei" <<'\n';
                notePlatite[raspuns] = 1;
                numarNotePlatite ++;
            }
        }

        if(raspuns == 1){
            double sumaTotalaDePlatitInRest = 0;
            numarNotePlatite = numarClienti;
            for(int i = 0 ; i < numarClienti ; i++){
                if(!notePlatite[i]){
                    sumaTotalaDePlatitInRest += masa.cereNotaSeparata(i);
                }
            }
            cout<<"Restul clientilor mai au de platit "<<sumaTotalaDePlatitInRest << " lei";
        }
    }
}

void Restaurant::start(){
    string start = "continue";
    while(start == "continue"){
        (*this).ocupaMasa();
        cout<<'\n'<<"Scrie 'continue' pentru a continua"<<'\n';
        cin>>start;
    }
}
