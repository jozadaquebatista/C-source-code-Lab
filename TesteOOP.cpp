/* ARQUIVO MOSTRANOME.CPP  */
#include "mostranome.hpp"
void mostranome::setNome(std::string x){
	nome = x;
}

std::string mostranome::getNome(){
	return nome;
}
/*******************************************************************/

/* ARQUIVO MOSTRANOME.HPP */
#include <iostream>
#include <string>
#include <locale.h>

class mostraNome{

	private:
		std::string nome;

	public:
		mostraNome(std::string x){

			std::cout << "Essa e um simples mensagem do metodo construtor." << std::endl;
			setNome(x);
		}

		void setNome(std::string x);
		std::string getNome();
};
/*******************************************************************/

/* ARQUIVO MAIN.CPP*/
#include "mostraNome.hpp"

int main(int argc, char **argv){

  setlocale(0, "portuguese");
  
	mostranome obj("nao inserido."), obj2("nao inserido.");
	obj.setNome("Ruffy");

	std::cout << "Seu nome e': " << obj.getNome() << "!" << std::endl;
	std::cout << "Seu nome e': " << obj2.getNome() << "!" << std::endl;

	return 0;
}
