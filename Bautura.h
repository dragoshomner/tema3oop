class Bautura{
protected:
    string bauturaAleasa;
    string tipBauturaAleasa;
    int cantitateBauturaAleasa;
    double pretBauturaAleasa;
public:
    Bautura(string bauturaAleasa = "fara bautura", string tipBauturaAleasa = "-", int cantitateBauturaAleasa = 0, double pretBauturaAleasa = 0):
        bauturaAleasa(bauturaAleasa), tipBauturaAleasa(tipBauturaAleasa), cantitateBauturaAleasa(cantitateBauturaAleasa), pretBauturaAleasa(pretBauturaAleasa){}

    double getPretBauturaAleasa() { return pretBauturaAleasa; }

    virtual void alegeBautura() =0;
};
