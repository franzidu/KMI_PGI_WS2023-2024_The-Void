#ifndef KONTO_H
#define KONTO_H


class Konto{
    private:
        float kontostand;
        float limit;
    public:
        Konto();  //constructor
        ~Konto(); //destructor
        Konto(float dispo);

        void setLimit(double dispo);
        float getLimit() const;

        void kontostandAnzeigen();
        void limitAnzeigen();
        void einzahlen();
        void auszahlen();
};

#endif // KONTO_H
