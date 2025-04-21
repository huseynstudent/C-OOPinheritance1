#include <iostream>
#include <vector>
using namespace std;

class Lada {
public:
    string _marka;
    string _model;
    int _speed;

    Lada(string marka, string model, int speed) {
        _marka = marka;
        _model = model;
        _speed = speed;
    }

    void show() {
        cout << "Brand: " << _marka << endl;
        cout << "Model: " << _model << endl;
        cout << "Speed: " << _speed << " km per hour" << endl;
    }
};
class BMW {
public:
    string _marka;
    string _model;
    int _speed;
    bool _issport;

    BMW(string marka, string model, int speed, bool sport) {
        _marka = marka;
        _model = model;
        _speed = speed;
        _issport = sport;
    }

    void show() {
        cout << "Brand: " << _marka << endl;
        cout << "Model: " << _model << endl;
        cout << "Speed: " << _speed << " km per hour" << endl;
        cout << "Is a sports car? - " << (_issport ? "Yes" : "No") << endl;
    }
};

class Toyota {
public:
    string _marka;
    string _model;
    int _speed;
    bool _isspoiler;

    Toyota(string marka, string model, int speed, bool spoiler) {
        _marka = marka;
        _model = model;
        _speed = speed;
        _isspoiler = spoiler;
    }

    void show() {
        cout << "Brand: " << _marka << endl;
        cout << "Model: " << _model << endl;
        cout << "Speed: " << _speed << " km per hour" << endl;
        cout << "Has spoiler? - " << (_isspoiler ? "Yes" : "No") << endl;
    }
};
class CarGallery {
public:
    vector<Lada> Ladas;
    vector<BMW> BMWs;
    vector<Toyota> Toyotas;

    void getAllCars() {
        cout << "========== ALL CARS ==========" << endl;
        getAllLadaCars();
        getAllBmwCars();
        getAllToyotaCars();
    }

    void getAllLadaCars() {
        cout << "\n--- Lada Cars ---" << endl;
        for (int i = 0; i < Ladas.size(); i++) {
            Ladas[i].show();
            cout << "---------------------" << endl;
        }
    }

    void getAllBmwCars() {
        cout << "\n--- BMW Cars ---" << endl;
        for (int i = 0; i < BMWs.size(); i++) {
            BMWs[i].show();
            cout << "---------------------" << endl;
        }
    }

    void getAllToyotaCars() {
        cout << "\n--- Toyota Cars ---" << endl;
        for (int i = 0; i < Toyotas.size(); i++) {
            Toyotas[i].show();
            cout << "---------------------" << endl;
        }
    }
};

void main() {
    CarGallery gallery;
    gallery.Ladas.push_back(Lada("Lada", "VAZ-2107", 140));
    gallery.Ladas.push_back(Lada("Lada", "Granta", 160));

    gallery.BMWs.push_back(BMW("BMW", "F10", 300, true));
    gallery.BMWs.push_back(BMW("BMW", "E60", 250, false));

    gallery.Toyotas.push_back(Toyota("Toyota", "Supra", 280, true));
    gallery.Toyotas.push_back(Toyota("Toyota", "Corolla", 180, false));
    gallery.getAllCars();
}
