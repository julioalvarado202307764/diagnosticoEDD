#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Persona {
protected:
    string id;
    string nombre;
    string email;

public:
    Persona(string id, string nombre, string email) 
        : id(id), nombre(nombre), email(email) {}

    virtual ~Persona() {} 

    string getNombre() const { return nombre; }
    void setNombre(string nombre) { this.nombre = nombre; }

    virtual void mostrarDetalles() const = 0;
};

class Empleado : public Persona {
private:
    string puesto;
    double salario;

public:
    Empleado(string id, string nombre, string email, string puesto, double salario)
        : Persona(id, nombre, email), puesto(puesto), salario(salario) {}

    void mostrarDetalles() const override {
        cout << "Empleado: " << nombre << " | Puesto: " << puesto << " | Salario: $" << salario << endl;
    }
};

class Cliente : public Persona {
private:
    bool esVip;

public:
    Cliente(string id, string nombre, string email, bool esVip)
        : Persona(id, nombre, email), esVip(esVip) {}

    void mostrarDetalles() const override {
        cout << "Cliente: " << nombre << " | VIP: " << (esVip ? "Sí" : "No") << endl;
    }
};

class Proveedor : public Persona {
private:
    string categoriaSuministro;

public:
    Proveedor(string id, string nombre, string email, string categoriaSuministro)
        : Persona(id, nombre, email), categoriaSuministro(categoriaSuministro) {}

    void mostrarDetalles() const override {
        cout << "Proveedor: " << nombre << " | Suministro: " << categoriaSuministro << endl;
    }
};

class SistemaEmpresa {
private:
    vector<Persona*> contactos; 

public:
    void registrarContacto(Persona* p) {
        contactos.push_back(p);
    }

    void mostrarTodos() const {
        for (const auto& p : contactos) {
            p->mostrarDetalles(); 
        }
    }
};