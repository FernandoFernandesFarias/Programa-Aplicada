#include <iostream>

using namespace std;

class Pessoa {
  private:
    string nome_, email_;
    int idade_, tel_;

  public: 
    Pessoa(string nome, string email, int idade, int tel);
    Pessoa(string nome, string email, int idade);
    Pessoa();
    void exibirInfo();
};

Pessoa::Pessoa(string nome, string email, int idade, int tel) {
  nome_ = nome;
  email_ = email;
  idade_ = idade;
  tel_ = tel;
}

Pessoa::Pessoa(string nome, string email, int idade) {
  nome_ = nome;
  email_ = email;
  idade_ = idade;
  tel_ = 0;
}

Pessoa::Pessoa() {
  nome_ = "Desconhecido";
  email_ = "Desconhecido";
  idade_ = 0;
  tel_ = 0;
}

void Pessoa::exibirInfo() {
  cout << "Nome: " << nome_ << endl;
  cout << "Email: " << email_ << endl;
  cout << "Idade: " << idade_ << endl;
  cout << "Telefone: " << tel_ << endl;
}

int main() {

  Pessoa pessoa1("Jorge", "jorge@gmail.com", 20, 99999);
  pessoa1.exibirInfo();

  cout << endl;

  Pessoa pessoa2("Lucas", "lucas@gmail.com", 20);
  pessoa2.exibirInfo();

  cout << endl;

  Pessoa pessoa3;
  pessoa3.exibirInfo();

  return 0;
}