#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu()
{
  return main();
}
int patient(void)
{
  char control = 0;
  printf("[1] - Login\n");
  printf("[2] - Cadastro\n");
  printf("[3] - Elogio ou reclamação\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      login_patient();
      break;
    case '2':
      register_patient();
      break;
    case '3':
      reclamacao_elogio();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!\n");
  return patient();
}
int login_patient(void)
{
  char control = 0;
  char email[100];
  int senha[8];
  printf("E-mail:\n");
  scanf("\n%s",email);
  printf("Senha:\n");
  scanf("\n%id",senha);
  printf("Usuário: %s - Seja bem vindo à NuVida!\n", email);
  printf("-----------------------------------\n");
  printf("[1] - Atestado médico\n");
  printf("[2] - Marcar consulta\n");
  printf("[3] - Cancelar consulta\n");
  printf("[4] - Realizar pagamento\n");
  printf("[5] - Voltar ao menu\n");
  printf("[6] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      atestado();
      break;
    case '2':
      agendar();
      break;
    case '3':
      cancelamento_de_consultas();
      break;
    case '4':
      pagamento();
      break;
    case '5':
      menu();
      break;
    case '6':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 6);
  printf("Por favor, escolha uma opção válida!\n");
  return login_patient();
}
int register_patient(void)
{
  struct signUp
  {
    char nome[110];
    char data[10];
    char sexo[2];
    char cpf[15];
    char tel[13];
    char endereco[110];
    char alergia[30];
    char plano[20];
    char email[110];
    int senha[8];
  };

  struct signUp patient;

  int juntas = 7121;
  printf("Nome:\n");
  scanf("%s",patient.nome, 100, stdin);
  printf("Data de nascimento:\n");
  scanf("%s",patient.data, 8, stdin);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  scanf("%s",patient.sexo, 2, stdin);
  printf("CPF:\n");
  scanf("%s",patient.cpf, 13, stdin);
  printf("Telefone:\n");
  scanf("%s",patient.tel, 10, stdin);
  printf("Endereço:\n");
  scanf("%s",patient.endereco, 100, stdin);
  printf("Você possui alguma alergia? Se sim, quais? Se não, não preencha\n");
  scanf("\n%s",patient.alergia, 25, stdin);
  printf("Você possui plano de saúde? Se não, não preencha\n");
  scanf("\n%s",patient.plano, 18, stdin);
  printf("E-mail:\n");
  scanf("%s",patient.email, 100, stdin);
  printf("Senha:\n");
  scanf("%id",patient.senha, 10, stdin);
  printf("Você foi cadastro com sucesso!\n");
  juntas++;
  printf("Parabéns, seja bem vindo! Você é o patient número: %i da rede\n", juntas);
  printf("Você será redirecionado para a página de login\n");
  return login_patient();
}
int medico(void)
{
  char control = 0;
  printf("[1] - Login\n");
  printf("[2] - Cadastro\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      login_medico();
      break;
    case '2':
      register_medico();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida!\n");
  return medico();
}
int login_medico(void)
   {
  char control = 0;
  char email[100];
  int senha[8];
  printf("E-mail:\n");
  scanf("\n%s", email);
  printf("Senha:\n");
  scanf("\n%id", senha);
  printf("Usuário: %s - Seja bem vindo à NuVida!\n", email);
  printf("-----------------------------------\n");
  printf("[1] - Atestado médico\n");
  printf("[2] - Marcar consulta\n");
  printf("[3] - Cancelar consulta\n");
  printf("[4] - Registrar internação\n");
  printf("[5] - Relatórios\n");
  printf("[6] - Voltar ao menu\n");
  printf("[7] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      atestado();
      break;
    case '2':
      agendar();
      break;
    case '3':
      cancelamento_de_consultas();
      break;
    case '4':
      internacao();
      break;
    case '5':
      relatorio();
      break;
    case '6':
      menu();
      break;
    case '7':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 7);
  printf("Por favor, escolha uma opção válida!\n");
  return login_medico();
}
int register_medico(void)
{
  struct signUp
  {
    char nome[110];
    char data[10];
    char sexo[2];
    char cpf[15];
    char tel[13];
    char endereco[110];
    char email[110];
    int senha[8];
  };

  struct signUp medico;

  printf("Nome:\n");
  scanf("%s",medico.nome, 100, stdin);
  printf("Data de nascimento:\n");
  scanf("%s",medico.data, 8, stdin);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  scanf("%s",medico.sexo, 2, stdin);
  printf("CPF:\n");
  scanf("%s",medico.cpf, 13, stdin);
  printf("Telefone:\n");
  scanf("%s",medico.tel, 10, stdin);
  printf("Endereço:\n");
  scanf("%s",medico.endereco, 100, stdin);
  printf("E-mail:\n");
  scanf("%s",medico.email, 100, stdin);
  printf("Senha:\n");
  scanf("%id",medico.senha, 10, stdin);
  printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");
  return login_medico();
}
int funcionario(void)
{
  char control = 0;
  printf("[1] - Login\n");
  printf("[2] - Cadastro\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      login_funcionario();
      break;
    case '2':
      register_funcionario();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida!\n");
  return funcionario();
}
int login_funcionario(void)
{
  char control = 0;
  char email[100];
  int senha[8];
  printf("E-mail:\n");
  scanf("\n%s",email);
  printf("Senha:\n");
  scanf("\n%id",senha);
  printf("Usuário: %s - Seja bem vindo à NuVida!\n", email);
  printf("-----------------------------------\n");
  printf("[1] - Marcar consulta\n");
  printf("[2] - Cancelar consulta\n");
  printf("[3] - Relatórios\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      agendar();
      break;
    case '2':
      cancelamento_de_consultas();
      break;
    case '3':
      relatorio();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!\n");
  return login_funcionario();
}
int register_funcionario(void)
{
  struct signUp
  {
    char nome[110];
    char data[10];
    char sexo[2];
    char cpf[15];
    char tel[13];
    char endereco[110];
    char email[110];
    int senha[8];
  };

  struct signUp funcionario;

  printf("Nome:\n");
  scanf("%s",funcionario.nome, 100, stdin);
  printf("Data de nascimento:\n");
  scanf("%s",funcionario.data, 8, stdin);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  scanf("%s",funcionario.sexo, 2, stdin);
  printf("CPF:\n");
  scanf("%s",funcionario.cpf, 13, stdin);
  printf("Telefone:\n");
  scanf("%s",funcionario.tel, 10, stdin);
  printf("Endereço:\n");
  scanf("%s",funcionario.endereco, 100, stdin);
  printf("E-mail:\n");
  scanf("%s",funcionario.email, 100, stdin);
  printf("Senha:\n");
  scanf("%id",funcionario.senha, 10, stdin);
  printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");
  printf("-----------------------------------\n");
  return login_funcionario();
}
int pagamento(void)
{
  char control = 0;
  printf("Olá, você está na área de pagamentos\n");
  printf("[1] - Pré-pagamento\n");
  printf("[2] - Pós-pagamento\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      prePagamento();
      break;
    case '2':
      posPagamento();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida!\n");
  return pagamento();
}
int prePagamento(void)
{
  char control = 0;
  printf("Olá, tudo bem? Quero te informar que o pré-pagamento não tem taxas ou juros.\n");
  printf("Por favor, escolha uma opção:\n");
  printf("[1] - Consulta médica\n");
  printf("[2] - Consulta odontológica\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      prePagamentoConsultaMedica();
      break;
    case '2':
      prePagamentoConsultaOdontologica();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida!\n");
  return prePagamento();
}
char * findLastDigits(char digits[]){
    char *pnumber;
    int i = 0;
    while(digits[i] != '-'){
        i++;
    }
    i++;
    pnumber =  &digits[i];
    return pnumber;
}
int prePagamentoConsultaMedica(void)
{
  char control = 0;
  char card[15];
  char nome[100];
  char dataValidade[8];
  char dataPagamento[8];
  int cv[3];
  char *p;
  char c, s;
  
  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Aceitamos: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("\n%s",card);
  printf("Nome no cartão:\n");
  scanf("\n%s",nome);
  printf("Data de validade:\n"); 
  scanf("\n%s",dataValidade);
  printf("Código de segurança:\n"); 
  scanf("\n%id",cv);
  printf("Data de pagamento\n");
  scanf("\n%s",dataPagamento);
  p = findLastDigits(card);
  printf("O ultimo digito do seu cpf é %s ?\n",p);
  printf("Se sim, digite (s)\n");
  scanf("\n%c", &s);
  if (s == 's' || s == 'S'){
  printf("Para confirmar o pagamento, digite (c)\n");
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("Por favor, acesse o link a seguir e apresente-o na clínica: \n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");  
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
  }
  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
}
int prePagamentoConsultaOdontologica(void)
{
 char control = 0;
  char card[15];
  char nome[100];
  char dataValidade[8];
  char dataPagamento[8];
  int cv[3];
  char *p;
  char c, s;
  
  printf("O valor da nossa consulta odontológica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Aceitamos: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("\n%s",card);
  printf("Nome no cartão:\n");
  scanf("\n%s",nome);
  printf("Data de validade:\n"); 
  scanf("\n%s",dataValidade);
  printf("Código de segurança:\n"); 
  scanf("\n%id",cv);
  printf("Data de pagamento\n");
  scanf("\n%s",dataPagamento);
  p = findLastDigits(card);
  printf("O ultimo digito do seu cpf é %s ?\n",p);
  printf("Se sim, digite (s)\n");
  scanf("\n%c", &s);
  if (s == 's' || s == 'S'){
  printf("Para confirmar o pagamento, digite (c)\n");
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("Por favor, acesse o link a seguir e apresente-o na clínica: \n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");  
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
  }
  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
}
int posPagamento(void)
{
  char control = 0;
  printf("Olá, tudo bem? Quero te informar que o pós-pagamento tem 1% de juros.\n");
  printf("Por favor, escolha uma opção:\n");
  printf("[1] - Consulta médica\n");
  printf("[2] - Consulta odontológica\n");
  printf("[3] - Voltar ao menu\n");
  printf("[4] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      posPagamentoConsultaMedica();
      break;
    case '2':
      posPagamentoConsultaOdontologica();
      break;
    case '3':
      menu();
      break;
    case '4':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 4);
  printf("Por favor, escolha uma opção válida!\n");
  return posPagamento();
}
int posPagamentoConsultaMedica(void)
{
  char control = 0;
  char card[15];
  char name[100];
  char date[10];
  int cv[3];
  float price = 50;
  int payday;
  char *p;
  char s, c;
  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Bandeiras: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("%id", card);
  printf("Nome no cartão:\n");
  scanf("\n%s",name);
  printf("Data de validade:\n");
  scanf("%id", date);
  printf("Código de segurança:\n");
  scanf("\n%s",cv);
  printf("Data do pagamento:\n");
  scanf("\n%id", &payday);
  p = findLastDigits(card);
  printf("O ultimo digito do seu cpf é %s ?\n",p);
   printf("Se sim, digite (s)\n");
  scanf("\n%c", &s);
  if (s == 's' || s == 'S'){
  if (payday == 16)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", price + 0.33);
  }
  else if (payday == 17)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", price + 0.66);
  }
  else if (payday == 18)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", price + 0.99);
  }
  else if (payday == 19)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", price + 1.32);
  }
  else if (payday == 20)
  {
    printf("Por causa dos juros, o valor da sua conta é: R$%f\n", price + 1.65);
  }
  else if (payday <= 15 && payday != 0)
  {
    printf("O valor final da consulta é: R$%2.f\n", price);
  }
  else
  {
    printf("A data de pagamento está muito atrasada, por favor entre em contato conosco no número: (11)9123-4578\n");
  }
  }
  printf("Para confirmar o pagamento, digite (c)\n");
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");  
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
  
  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
}
int posPagamentoConsultaOdontologica(void)
{
   char control = 0;
  char card[15];
  char name[100];
  char date[10];
  int cv[3];
  float price = 50;
  int payday;
  char *p;
  char s, c;
  printf("O valor da nossa consulta médica é de R$50,00\n");
  printf("Para a sua segurança só aceitamos cartões de crédito\n");
  printf("Bandeiras: Mastercard, Visa e AmericaExpress\n");
  printf("Número do cartão:\n");
  scanf("%id", card);
  printf("Nome no cartão:\n");
  scanf("\n%s",name);
  printf("Data de validade:\n");
  scanf("%id", date);
  printf("Código de segurança:\n");
  scanf("\n%s",cv);
  printf("Data do pagamento:\n");
  scanf("\n%id", &payday);
  p = findLastDigits(card);
  printf("O ultimo digito do seu cpf é %s ?\n",p);
   printf("Se sim, digite (s)\n");
  scanf("\n%c", &s);
  if (s == 's' || s == 'S'){
  if (payday == 16)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", price + 0.33);
  }
  else if (payday == 17)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", price + 0.66);
  }
  else if (payday == 18)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", price + 0.99);
  }
  else if (payday == 19)
  {
    printf("Por causa dos juros, o valor da sua consulta é: R$%f\n", price + 1.32);
  }
  else if (payday == 20)
  {
    printf("Por causa dos juros, o valor da sua conta é: R$%f\n", price + 1.65);
  }
  else if (payday <= 15 && payday != 0)
  {
    printf("O valor final da consulta é: R$%2.f\n", price);
  }
  else
  {
    printf("A data de pagamento está muito atrasada, por favor entre em contato conosco no número: (11)9123-4578\n");
  }
  }
  printf("Para confirmar o pagamento, digite (c)\n");
  scanf("\n%c", &c);
  if (c == 'c' || c == 'C')
  {
    printf("Seu pagamento foi aprovado!\n");
    printf("-----------------------------------\n");
    printf("Digite [1] para voltar ao menu\n");
    printf("Digite [2] para encerrar o programa\n");  
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
  
  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
}
int agendar(void)
{
  char control = 0;
  char nome[100];
  char sexo[1];
  char email[100];
  char cpf[13];
  char data[10];
  char horario[10];
  printf("Digite seu nome completo:\n");
  scanf("\n%s",nome);
  printf("Qual seu sexo? Digite (m) se masculino ou (f) se feminino\n");
  scanf("\n%s",sexo);
  printf("E-mail:\n");
  scanf("\n%s",email);
  printf("CPF:\n");
  scanf("\n%s",cpf);
  printf("-----AGENDE ABAIXO-----\n");
  printf("Data:");
  scanf("\n%s",data);
  printf("Horário:");
  scanf("\n%s",horario);
  printf("Sua consulta foi marcada para o dia: %s às %s\n", data, horario);
  printf("-----------------------------------\n");
  printf("Digite [1] para voltar ao menu\n");
  printf("Digite [2] para encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 2);
  printf("Por favor, escolha uma opção válida!\n");
  return menuOuSaida();
}
int internacao(void)
{
  char control = 0;
  char nome[100];
  int idade[2];
  char motivo[200];
  char data[8];
  printf("Nome do paciente:\n");
  scanf("\n%s",nome);
  printf("Idade:\n");
  scanf("\n%id",idade);
  printf("Motivo:\n");
  scanf("\n%s",motivo);
  printf("Data da internação:\n");
  scanf("\n%s",data);
  printf("O paciente %s foi internado por motivo de: %s, na data de: %s", nome, motivo, data);
  printf("Digite [1] para voltar ao menu\n");
  printf("Digite [2] para encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 2);
  printf("Por favor, escolha uma opção válida!\n");
  return menuOuSaida();
}
int cancelamento_de_consultas(void)
{
  char control = 0;
  char email[100];
  int senha[8];
  char data[10];
  printf("E-mail:\n");
  scanf("\n%s",email);
  printf("Senha:\n");
  scanf("\n%id",senha);
  printf("Digite a data da consulta a ser cancelada:\n");
  scanf("\n%s",data);
  printf("Você tem certeza?\n");
  printf("Para confirmar digite [c]\n");
  scanf("\n%c", &control);
  if (control == 'c' || control == 'C')
  {
    printf("A consulta do dia %s foi cancelada\n", data);
    printf("-----------------------------------\n");
    printf("[1] - Voltar ao menu\n");
    printf("[2] - Encerrar o programa\n");
   
    scanf("\n%c", &control);
    do{
    switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
    }while(control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
  else
  {
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
}
int reclamacao_elogio(void)
{
  char mensagem[200];
  printf("Deixe seu mensagem abaixo:\n");
  scanf("\n%s",mensagem);
  printf("Sua mensagem foi enviada.\n");
  printf("Nós da NuVida te agradecemos por isso!\n");
  printf("-----------------------------------\n");
  return menuOuSaida();
}
int atestado(void)
{
  char nome[100];
  char data[10];
  char horario[10];
  printf("Digite seu nome completo:\n");
  scanf("\n%s",nome);
  printf("Digite a data da sua consulta:\n");
  scanf("\n%s",data);
  printf("Digite o horário da sua consulta:\n");
  scanf("\n%s",horario);
  printf("Paciente: %s  seu atestado foi gerado!\n", nome);
  printf("Por favor, acesse o link a seguir e o imprima: \n");
  printf("-----------------------------------\n");
  return menuOuSaida();
}
int relatorio(void)
{
  char control = 0;
  printf("Você está na área de relatórios agora\n");
  printf("[1] - Unidade Paraisopólis\n");
  printf("[2] - Unidade Morumbi\n");
  printf("[3] - Unidade Vila Sônia\n");
  printf("[4] - Todas unidades da rede NuVida\n");
  printf("[5] - Voltar ao menu\n");
  printf("[6] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      paraisopolis();
      break;
    case '2':
      morumbi();
      break;
    case '3':
      vilaSonia();
      break;
    case '4':
      totalRede();
      break;
    case '5':
      menu();
      break;
    case '6':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 6);
  printf("Por favor, escolha uma opção válida!\n");
  return relatorio();
}
int paraisopolis(void)
{
  char control = 0;
  printf("Relatórios da Unidade Paraisopólis\n");
  printf("[1] - Faturamento diário\n");
  printf("[2] - Faturamento mensal\n");
  printf("[3] - Número de pacientes dessa unidade\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      faturamento_diario();
      break;
    case '2':
      faturamento_mensal();
      break;
    case '3':
      numberOfPatientsParaisopolis();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!\n");
  return paraisopolis();
}
int morumbi(void)
{
  char control = 0;
  printf("Relatórios da Unidade Morumbi\n");
  printf("[1] - Totalização do faturamento diário\n");
  printf("[2] - Totalização do faturamento mensal\n");
  printf("[3] - Número de pacientes dessa unidade\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      faturamento_diario();
      break;
    case '2':
      faturamento_mensal();
      break;
    case '3':
      numberOfPatientsMorumbi();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!\n");
  return morumbi();
}
int vilaSonia(void)
{
  char control = 0;
  printf("Relatórios da Unidade Vila Sônia\n");
  printf("[1] - Totalização do faturamento diário\n");
  printf("[2] - Totalização do faturamento mensal\n");
  printf("[3] - Número de pacientes dessa unidade\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      faturamento_diario();
      break;
    case '2':
      faturamento_mensal();
      break;
    case '3':
      numberOfPatientsVilaSonia();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!!\n");
  return vilaSonia();
}
//para acessar faturamento tem senha (1010),(2020),(3535)
int faturamento_diario(void)
{
  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  int credencial = 0;
  printf("Por favor, digite sua credencial abaixo\n");
  scanf("\n%id",&credencial);
  if(credencial == 1010 ||credencial == 2020  || credencial == 3535){
  printf("Abaixo, digite a quantidade de serviços prestados hoje nesta unidade\n");
  printf("Digite o número de exames feitos hoje: ");
  scanf("\n%f", &ex);
  printf("Digite o número de consultas odontológicas feitas hoje: ");
  scanf("\n%f", &dent);
  printf("Digite o número de vacinas vendidas hoje: ");
  scanf("\n%f", &vac);
  printf("Digite o número de cirurgias feitas hoje: ");
  scanf("\n%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento diário de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento diário de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento diário de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento diário de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento diário da unidade: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
  printf("-----------------------------------\n");
  return menuOuSaida();
  }else {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOuSaida();
  }
}
int faturamento_mensal(void)
{
  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  int credencial = 0;
  printf("Por favor, digite sua credencial abaixo\n");
  scanf("\n%id",&credencial);
  if(credencial == 1010 ||credencial == 2020  || credencial == 3535){
  printf("Abaixo, digite a quantidade de serviços prestados no mês nesta unidade\n");
  printf("Digite o número de exames feitos no mês: ");
  scanf("\n%f", &ex);
  printf("Digite o número de consultas odontológicas feitas no mês: ");
  scanf("\n%f", &dent);
  printf("Digite o número de vacinas vendidas no mês: ");
  scanf("\n%f", &vac);
  printf("Digite o número de cirurgias feitas no mês: ");
  scanf("\n%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento mensal de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento mensal de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento mensal de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento mensal de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento mensal da unidade: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
  printf("-----------------------------------\n");
  return menuOuSaida();
  }else {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOuSaida();
  }
}
int faturamento_diarioRede(void)
{
  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  int credencial = 0;
  printf("Por favor, digite sua credencial abaixo\n");
  scanf("\n%id",&credencial);
  if(credencial == 1010 ||credencial == 2020  || credencial == 3535){
  printf("Abaixo, digite a quantidade de serviços prestados hoje em toda a rede\n");
  printf("Digite o número de exames feitos hoje: "); 
  scanf("\n%f", &ex);
  printf("Digite o número de consultas odontológicas feitas hoje: ");
  scanf("\n%f", &dent);
  printf("Digite o número de vacinas vendidas hoje: ");
  scanf("\n%f", &vac);
  printf("Digite o número de cirurgias feitas hoje: "); 
  scanf("\n%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento diário de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento diário de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento diário de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento diário de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento diário de toda a rede: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
  printf("-----------------------------------\n");
  return menuOuSaida();
  }else {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOuSaida();
  }
}
int faturamento_mensalRede(void)
{
  float ex, dent, vac, cirur;
  float valEx = 50;
  float valDent = 60;
  float valVac = 120;
  float valCirur = 5000;
  int credencial = 0;
  printf("Por favor, digite sua credencial abaixo\n");
  scanf("\n%id",&credencial);
  if(credencial == 1010 ||credencial == 2020  || credencial == 3535){
  printf("Abaixo, digite a quantidade de serviços prestados no mês em toda a rede\n");
  printf("Digite o número de exames feitos no mês: ");
  scanf("\n%f", &ex);
  printf("Digite o número de consultas odontológicas feitas no mês: ");
  scanf("\n%f", &dent);
  printf("Digite o número de vacinas vendidas no mês: ");
  scanf("\n%f", &vac);
  printf("Digite o número de cirurgias feitas no mês: ");
  scanf("\n%f", &cirur);
  printf("Calculando...\n");
  printf("Faturamento mensal de exames: R$%1.f\n", ex * valEx);
  printf("Faturamento mensal de odontologia: R$%1.f\n", dent * valDent);
  printf("Faturamento mensal de vacinas: R$%1.f\n", vac * valVac);
  printf("Faturamento mensal de cirurgias: R$%1.f\n", cirur * valCirur);
  printf("Faturamento mensal da unidade: R$%1.f\n", ex * valEx + dent * valDent + vac * valVac + cirur * valCirur);
  printf("-----------------------------------\n");
  return menuOuSaida();
  }else {
    printf("Você não tem autorização para acessar essa área!\n");
    printf("-----------------------------------\n");
    return menuOuSaida();
  }
}

//quantidade de pacientes para cada unidade é diferente
void numberOfPatients(void)
{
  int paraisopolis = 5050;
  int morumbi = 1115;
  int vilaSonia = 956;
  int juntas = paraisopolis + morumbi + vilaSonia;
  printf("Calculando...\n");
  printf("Todas as clínicas da NuVida juntas somam: %i pacientes até o momento.\n", juntas);
}
void numberOfPatientsParaisopolis(void)
{
  printf("A unidade Paraisopólis tem 5050 pacientes\n");
  printf("Acesse o link a seguir para ver a lista de pacientes: \n");
}
void numberOfPatientsMorumbi(void)
{
  printf("A unidade Morumbi tem 1115 pacientes\n");
  printf("Acesse o link a seguir para ver a lista de pacientes: \n");
}
void numberOfPatientsVilaSonia(void)
{
  printf("A unidade Vila Sônia tem 956 pacientes\n");
  printf("Acesse o link a seguir para ver a lista de pacientes: \n");
}
int totalRede(void)
{
  char control = 0;
  printf("[1] - Faturamento diário da rede NuVida\n");
  printf("[2] - Faturamento mensal da rede NuVida\n");
  printf("[3] - Número de pacientes da rede\n");
  printf("[4] - Voltar ao menu\n");
  printf("[5] - Encerrar o programa\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      faturamento_diarioRede();
      break;
    case '2':
      faturamento_mensalRede();
      break;
    case '3':
      numberOfPatients();
      break;
    case '4':
      menu();
      break;
    case '5':
      exit(0);
      break;
    }
  } while (control > 0 & control <= 5);
  printf("Por favor, escolha uma opção válida!\n");
  return totalRede();
}
int main(void)
{
  char control = 0;
  printf("-----BEM VINDO Á NUVIDA!-----\n");
  printf("Digite [1] se você é um paciente\n");
  printf("Digite [2] se você é um médico\n");
  printf("Digite [3] se você é um funcionário\n");
  scanf("\n%c", &control);
  do
  {
    switch (control)
    {
    case '1':
      patient();
      break;
    case '2':
      medico();
      break;
    case '3':
      funcionario();
    }
  } while (control > 0 & control <= 3);
  printf("Por favor, escolha uma opção válida!\n");
  return menu();
}
int menuOuSaida(void){
  char control = 0;
  printf("[1] - Voltar ao menu\n");
  printf("[2] - Encerrar o programa\n");
  scanf("\n%c",&control);
  do{
   switch (control)
    {
    case '1':
      menu();
      break;
    case '2':
      exit(0);
      break;
    }
 }while (control > 0 & control <= 2);
    printf("Por favor, escolha uma opção válida!\n");
    return menuOuSaida();
  }
