#include "QualquerMerda.h"

int main(int argc, char **argv){

	QualquerMerda obj("não informado."), obj2("não informado.");
	obj.setNome("Sir");

	std::cout << "1)Seu nome e': " << obj.getNome() << "!" << std::endl;
	std::cout << "2)Seu nome e': " << obj2.getNome() << "!" << std::endl;

	return (0);
}
