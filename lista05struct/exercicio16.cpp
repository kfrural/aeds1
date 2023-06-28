/*Crie uma struct chamada "Jogo" que armazene o nome (string), a plataforma (string)
e a nota (float) de um jogo. Adicione métodos para permitir que os usuários avaliem o 
jogo (adicionando uma nota) e para calcular a média das notas recebidas*/

#include<iostream>
#include<string>
using namespace std;

struct Jogo {
    string nome;
    string plataforma;
    float *notas;
    int numAvaliacoes;
    int tam;

    void adicionarAvaliacao(float novaNota) {
        if (novaNota >= 0 && novaNota <= 10) {            
            notas[numAvaliacoes] = novaNota;            
            numAvaliacoes++;
            cout << "Avaliação adicionada com sucesso!" << endl;
        } else {
            cout << "A nota deve ser um valor entre 0 e 10." << endl;
        }
    }

    float calcularMedia(){
        float soma = 0;
        for(int i=0; i <= numAvaliacoes-1; i++){
            soma += notas[i];
        }

        float denominador = ((numAvaliacoes)*1.0);      
        float media = soma/denominador;
        return media;

    }

    void exibirMediaAvaliacoes() {
        float media = calcularMedia();

        cout << "--- Média das avaliações --- \n" 
			 << "Jogo: " << nome << endl 
             << "Plataforma:" << plataforma << endl
             << "Avaliacao (media):"<< media << endl;
    }
};

int main() {
	Jogo jogo;
    cout << "Informe o tamanho maximo de notas:";
    cin >> jogo.tam;
    jogo.notas = new float[jogo.tam];

	jogo.nome = "The Last of Us";
	jogo.plataforma = "PlayStation";	
	jogo.numAvaliacoes = 0;

    float nota;
    do{
        cout << "Informe a nota do jogo " << jogo.nome << ": ";
        cin >> nota;
        jogo.adicionarAvaliacao(nota);

    }while(nota != -1);

	jogo.exibirMediaAvaliacoes();

	return 0;

}
