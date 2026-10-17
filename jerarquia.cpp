#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    int velocidadMax;

public:
    Vehiculo(string marca, string modelo, int velocidadMax)
        : marca(marca), modelo(modelo), velocidadMax(velocidadMax) {}

    virtual void mostrarInfo() const {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Velocidad maxima: " << velocidadMax << " km/h" << endl;
    }

    virtual ~Vehiculo() {}
};

class Auto : public Vehiculo {
private:
    int numPuertas;

public:
    Auto(string marca, string modelo, int velocidadMax, int numPuertas)
        : Vehiculo(marca, modelo, velocidadMax), numPuertas(numPuertas) {}

    void mostrarInfo() const override {
        cout << "[Auto]" << endl;
        Vehiculo::mostrarInfo();
        cout << "Puertas: " << numPuertas << endl;
    }
};

class Motocicleta : public Vehiculo {
private:
    int cilindrada;

public:
    Motocicleta(string marca, string modelo, int velocidadMax, int cilindrada)
        : Vehiculo(marca, modelo, velocidadMax), cilindrada(cilindrada) {}

    void mostrarInfo() const override {
        cout << "[Motocicleta]" << endl;
        Vehiculo::mostrarInfo();
        cout << "Cilindrada: " << cilindrada << " cc" << endl;
    }
};

int main() {
    Auto a("Toyota", "Corolla", 180, 4);
    Motocicleta m("Yamaha", "R6", 260, 600);

    a.mostrarInfo();
    cout << endl;
    m.mostrarInfo();

    return 0;
}
