CFLAGS = -c -std=c++11
EXECUTAVEL = app
MAIN = main

all: $(EXECUTAVEL)

$(EXECUTAVEL): $(MAIN).o LeitorArquivo.o ListaOrdenadaDePalavras.o menu.o Ocorrencia.o Palavra.o ContList.o
	g++ -o $(EXECUTAVEL) $(MAIN).o LeitorArquivo.o ListaOrdenadaDePalavras.o menu.o Ocorrencia.o Palavra.o ContList.o

$(MAIN).o: $(MAIN).cpp ListaOrdenadaDePalavras.hpp menu.hpp Ocorrencia.hpp Palavra.hpp ContList.hpp
	g++ $(CFLAGS) $(MAIN).cpp

LeitorArquivo.o: LeitorArquivo.cpp 
	g++ $(CFLAGS) LeitorArquivo.cpp

ListaOrdenadaDePalavras.o: ListaOrdenadaDePalavras.cpp ListaOrdenadaDePalavras.hpp
	g++ $(CFLAGS) ListaOrdenadaDePalavras.cpp

menu.o: menu.cpp menu.hpp
	g++ $(CFLAGS) menu.cpp

Ocorrencia.o: Ocorrencia.cpp Ocorrencia.hpp
	g++ $(CFLAGS) Ocorrencia.cpp

Palavra.o: Palavra.cpp Palavra.hpp
	g++ $(CFLAGS) Palavra.cpp

ContList.o: ContList.cpp ContList.hpp
	g++ $(CFLAGS) ContList.cpp

clean:
	rm -f *.o $(EXECUTAVEL)

run: $(EXECUTAVEL)
	@./$(EXECUTAVEL)