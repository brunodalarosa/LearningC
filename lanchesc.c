/* Bruno Cesar
   Projetando o Easy Menu em pleno 2k15
*/
#include <stdio.h>


typedef struct{
  char *nome;
  char *tipo;
  char ingredientes[4];
  float preco;
} lanche;

lanche lanches[2];

void cadastrarlanche(lanche l){
  int op=1;
  int aux=0;
  puts("Cadastrando um lanche novo!\nPrimeiro digite o nome do lanche:");
  scanf("%s",l.nome);
  puts("Agora digite o nome da categoria: (Cachorro|Hamburguer|Vegetariano)");
  scanf("%s",l.tipo );
  puts("Agora defina os ingredientes que compoem o lanche:");
  while (op){
    scanf("%s",&l.ingredientes[aux]);
    puts("Deseja adicionar mais um ingrediente? (0 - Não / 1 - Sim)");
    scanf("%i",&op);
    aux++;
  }
  puts("Certo, agora defina o preço do lanche:");
  scanf("%f",&l.preco);
}

void printalanche(int tam,lanche l[]){
  int i,j;
  i = j = 0;
  for (i; i < tam; i++) {
    printf("LANCHE %i: %s\n",i,l[i].nome);
    printf("Tipo:%s\n",l[i].tipo);
    for (j; j < sizeof(l[i].ingredientes); j++) {
      printf("%s\n",&l[i].ingredientes[j]);
    }
    printf("Preço: %.2f\n",l[i].preco);
  }
  puts("");
}

float vendas(int tam, lanche l[]){
    int op=1;
    int num=0;
    float total=0;
    puts("--NOVO CLIENTE--\nBem-vindo ao cardápio do Lanches C");
    printalanche(tam,l);
    while(op){
      puts("Escolha um lanche do cardápio. Digite o numero do lanche:");
      scanf("%i\n",&num);
      total = total + l[num].preco;
      printf("Pedido feito!\nTotal até agora:%.2f\nDeseja pedir mais um lanche? (0 - Não / 1 - Sim)",total);
      scanf("%i",&op);
    }
    printf("Venda finalizada.\nTotal a pagar:%.2f",total);
    return total;
}

int main(){

  int op=1;
  int num,tam;
  float montante;
  num = tam = 0;
  puts("Bem-vindo ao sistema de Lanches C!\nPara começar cadastre pelo menos um lanche:");
  while(op){
    cadastrarlanche(lanches[tam]);
    puts("Cadastro completo!\nDeseja cadastrar mais um lanche? (0 - Não / 1 - Sim)");
    scanf("%i",&op);
    if (op) {
      tam++;
    }
  }
  op=1;
  puts("Certo agora vamos começar a simulação de vendas");
  while (op){
    montante = montante + vendas(tam,&lanches[num]);
    puts("\nMais um cliente? (0 - Não / 1 - Sim)");
    scanf("%i",&op);
    num++;
  }
  printf("Dia finalizado!\nNumero de vendas do dia: %i\nMontante arrecadado no dia: %.2f\nObrigado por usar o sistema de Lanches C\nFeito por Bruno Cesar.\n",num,montante);

}
