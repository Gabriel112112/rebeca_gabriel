#include <iostream>


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
  int cont, i;
  for(i=0;i<texto.length();i++)
  {
      if(texto[i]==letra)
      cont++;
  }
  return cont;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
{
    char string[100];
    int x, tam;
    tam=strlen(string);
    for (x=0;x<tam;x++)
        {
        if (string[x]=letra1)
        {
            letra1=letra2;
        }
    }

}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
    int cont, i;
  for(i=0;i<texto.length();i++)
  {
      if(texto[i]==palavra)
      cont++;
  }
  return cont;


}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
    char string[100];
    int x, tam;
    tam=strlen(string);
    for (x=0;x<tam;x++)
        {
        if (string[x]=palavra1)
        {
            palavra1=palavra2;
        }
    }


}

int main()
{
    string a,b,c,d;
    string x,v,n,m;
	cout << "Entre com o texto para fazer o teste:";
	cin>>a;
    x=contaLetras(a);
    cout<<x;
    cout << "Entre com o texto para fazer o teste:";
    cin>>b;
    v=substituirLetra(b);
    cout<<v;
    cout << "Entre com o texto para fazer o teste:";
    cin>>c;
    n=contaPalavras(c);
    cout<<n;
    cout << "Entre com o texto para fazer o teste:";
    cin>>d;
    m=substituirPalavras(d);
    cout<<m;




	return 0;
}
