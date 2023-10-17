#include <iostream>
#include <string>

using namespace std;

// Definição da estrutura Endereco
struct Endereco {
  string rua;
  int numero;
  string cidade;
  string estado;
};

// Definição da classe Cadastro
class Cadastro {
public:
  // Construtor que recebe os dados do cadastro
  Cadastro(string nome, string cpf, int anoNascimento, Endereco endereco)
    : nome(nome), cpf(cpf), anoNascimento(anoNascimento), endereco(endereco) {}

  // Destrutor
  ~Cadastro() {}

  void imprimirDados() {
      cout << "Nome: " << nome << endl;
      cout << "CPF: " << cpf << endl;
      cout << "Ano de Nascimento: " << anoNascimento << endl;
      cout << "Endereço:" << endl;
      cout << "Rua: " << endereco.rua << endl;
      cout << "Número: " << endereco.numero << endl;
      cout << "Cidade: " << endereco.cidade << endl;
      cout << "Estado: " << endereco.estado << endl;
  }

private:
  string nome;
  string cpf;
  int anoNascimento;
  Endereco endereco;
};

int main() {
  
  string nome, cpf;
  int anoNascimento;
  Endereco endereco;

  cout << "Informe o nome: ";
  getline(cin, nome);

  cout << "Informe o CPF: ";
  getline(cin, cpf);

  cout << "Informe o ano de nascimento: ";
  cin >> anoNascimento;
  cin.ignore();  // Limpa o caractere de nova linha no buffer

  cout << "Informe o endereço:" << endl;
  cout << "Rua: ";
  getline(cin, endereco.rua);

  cout << "Número: ";
  cin >> endereco.numero;
  cin.ignore();

  cout << "Cidade: ";
  getline(cin, endereco.cidade);

  cout << "Estado: ";
  getline(cin, endereco.estado);

  // Cria uma instância da classe Cadastro com os dados inseridos
  Cadastro cadastro(nome, cpf, anoNascimento, endereco);

  // Imprime os dados do cadastro
  cout << "Dados do Cadastro:" << endl;
  cadastro.imprimirDados();

  return 0;
}
