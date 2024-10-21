#include <iostream>
using namespace std;

class DataHora {
private:
    string data_, hora_;

public:
    DataHora(string data, string hora);
    static DataHora comData(string data);
    static DataHora comHora(string hora);
    DataHora();
    void exibirInfo();
};

DataHora::DataHora(string data, string hora) {
    data_ = data;
    hora_ = hora;
}

DataHora DataHora::comData(string data) {
    return DataHora(data, "00:00:00");
}

DataHora DataHora::comHora(string hora) {
    return DataHora("01/01/1970", hora);
}

DataHora::DataHora() {
    data_ = "Nulo";
    hora_ = "Nulo";
}

void DataHora::exibirInfo() {
    cout << "Data: " << data_ << endl;
    cout << "Hora: " << hora_ << endl;
}

int main() {
    string data, hora;

    cout << "Digite a data: ";
    cin >> data;
    cout << "Digite a hora: ";
    cin >> hora;

    DataHora dataHora1(data, hora);
    dataHora1.exibirInfo();

    cout << endl;

    DataHora dataHora2 = DataHora::comData(data);
    dataHora2.exibirInfo();

    cout << endl;

    DataHora dataHora3 = DataHora::comHora(hora);
    dataHora3.exibirInfo();

    cout << endl;
  
    DataHora dataHora4;
    dataHora4.exibirInfo();

    return 0;
}
