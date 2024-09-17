#include <iostream>

using namespace std;

class CidadesBrasil {
private:
  string nome;
  int dataFundacao;
  int numeroHabitantes;
  int numeroEleitores;

public:
  void exibirDados();
  void setDados(string nomeCidade, int dataFundacaoCidade, int numeroHabitantesCidade, int numeroEleitoresCidade);
};

int main() {

  CidadesBrasil cidade1;
  CidadesBrasil cidade2;

  cidade1.setDados("Criciuma", 1900, 200000, 100000);
  cidade1.exibirDados();

  cidade1.setDados("Tubarao", 1910, 80000, 50000);
  cidade1.exibirDados();

  return 0;
}

void CidadesBrasil::exibirDados() {
  cout << "Nome: " << nome << ", data de fundacao: " << dataFundacao << ", numero de habitantes: " << numeroHabitantes << ", numero de eleitores: "<< numeroEleitores << endl;
}

void CidadesBrasil::setDados(string nomeCidade, int dataFundacaoCidade, int numeroHabitantesCidade, int numeroEleitoresCidade){
  nome = nomeCidade;
  dataFundacao = dataFundacaoCidade;
  numeroHabitantes = numeroHabitantesCidade;
  numeroEleitores =  numeroEleitoresCidade;
}
