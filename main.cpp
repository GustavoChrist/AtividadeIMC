/* Inserindo um coment�rio para gerar a segunda vers�o no Github*/

#include <iostream>
#include <iomanip> /*pra usar a express�o cout << fixed <<setprecision() */
using namespace std;
int main()
{
float imc, peso, altura;
  cout<< "\n Digite seu peso!\n";
  cin>> peso;
  cout<< "Digite sua altura!\n";
  cin>>altura;
  imc=peso/(altura*altura);/*altura ao quadrado � mesma coisa que altura*altura*/
  cout << fixed << setprecision(1);/*essa linha serve pra definir a quantidade de casas decimais ao mostrar o resultado, o n�mero passado em setprecision indica a quantidade de casas que a gente quer */
  cout<< " \n �ndice de Massa Corporal= "<<imc<<endl;

  if(imc<18.5)
    {
      cout<< "Obs: Voc� est� abaixo do peso\n";
     }
  if(imc>=18.5 && imc<24)
    {
      cout<< "Obs: Voc� est� com peso normal\n";
     }
  if(imc>=24 && imc<29)
    {
      cout<< "Obs: Voc� est� acima do peso \n";
     }
  if(imc>29)
    {
      cout<< "Obs: Infelizmente, voc� est� obeso\n";
     }
}
