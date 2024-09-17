#include <iostream>

using namespace std;

class Carro {
  private:
    string marca;
    string modelo;
    int ano;

  public:
    void setMarca(string m) {
      marca = m;
    }

    string getMarca() {
      return marca;
    }

    void setModelo(string mod) {
      modelo = mod;
    }

    string getModelo() {
      return modelo;
    }

    void setAno(int a) {
      ano = a;
    }

    int getAno() {
      return ano;
    }

     void exibirInfo() {
      cout << "Marca: " << getMarca() << ", Modelo: " << getModelo() << ", Ano: " << getAno() << endl;
    }
  };

int main() {
  Carro meuCarro;
  // meuCarro.marca = "Toyota";
  // meuCarro.modelo = "Corolla";
  // meuCarro.ano = 2020;

  meuCarro.setMarca("Honda");
  meuCarro.setModelo("Civid");
  meuCarro.setAno(2024);
  meuCarro.exibirInfo();

  // cout << "Nova marca: " << meuCarro.getMarca() << endl;

  return 0;
}