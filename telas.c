#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char email[30];
char senha[8];
char nome[60];
char idade[2];
char cpf [12];
char endereco[60];
char data[10];
char horario[6];
char motivo[100];
char control;
float ex, dent, vac, cirur;
float valEx = 50;
float valDent = 60;
float valVac = 100;
float valCirur = 5000;
int numPacientes = 1500; 

int main(void){        
              printf("BEM VINDO Á NUVIDA!\n");
              printf("Digite (1) se você é um paciente\n");
              printf("Digite (2) se você é um médico\n");
              printf("Digite (3) se você é um funcionário\n");
              scanf("\n%c",&control);              
         switch (control){
              case '1':paciente();
                break;
              case '2':medico();
                break;
              case '3':funcionario();
                break;      
                    }
  }    
void paciente(void){            
          printf("Digite (1) para login\n");
          printf("Digite (2) para se cadastrar\n");
          printf("Digite (3) para deixar um elogio ou reclamação\n");
          scanf("\n%c",&control);
          switch(control){
              case'1':login_paciente();
                  break;
              case'2':cadastro_paciente();
                  break;
              case'3':reclamacao_elogio();
                  break;
    }               
  }
void login_paciente(void){   
     printf("E-mail:\n");
     scanf("%s",email);
     printf("Senha:\n");
     scanf("%id",senha);
     printf("Usuário: %s - Seja bem vindo à NuVida!\n",email); 
     printf("Digite (1) para gerar atestado médico\n");
     printf("Digite (2) para marcar uma consulta\n");
     printf("Digite (3) para cancelar uma consulta\n");     
     scanf("\n%c",&control);            
     switch (control){
         case '1':atestado();
           break;
         case'2':agendar();
           break;
         case'3':cancelamento_de_consultas();
           break;
   }     
  }
void cadastro_paciente(void){      
        printf("Nome:\n");
        scanf("%s",nome);
        printf("Data de nascimento:\n");
        scanf("%s",data);
        printf("CPF:\n");
        scanf("%id",cpf);
        printf("Telefone:\n");
        scanf("%id");
        printf("Endereço:\n");
        scanf("%id",endereco);
        printf("Você possui alguma alergia? Se sim, quais? Se não, não preencha\n");
        scanf("%s");
        printf("Você possui plano de saúde? Se não, não preencha\n");
        scanf("%s");       
        printf("E-mail:\n");
        scanf("%s",email);
        printf("Senha:\n");
        scanf("%id",senha);
        printf("Você foi cadastro com sucesso!\n");         
        numPacientes++;
        printf("Parabéns, seja bem vindo! Você é o nosso paciente número: %i\n", numPacientes);
        printf("Você será redirecionado para a página de login\n");
        login_paciente();           
  }
void medico(void){          
    printf("Digite (1) para login\n");
    printf("Digite (2) para se cadastrar\n");
    scanf("\n%c",&control);
       switch(control){
        case'1':login_medico();
            break;
        case'2':cadastro_medico();
            break;
             }                     
  }
void login_medico(void){      
       printf("E-mail:\n");
       scanf("%s",email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Usuário: %s - Seja bem vindo à NuVida!\n",email); 
       printf("Digite (1) para fazer um atestado médico\n");
       printf("Digite (2) para marcar uma consulta\n");
       printf("Digite (3) para cancelar uma consulta\n");
       printf("Digite (4) para registrar uma internação\n");
       printf("Digite (5) para ver os relatórios\n");
       scanf("\n%c",&control);            
       switch (control){
           case '1':atestado();
             break;
           case'2':agendar();
             break;
           case'3':cancelamento_de_consultas();
             break;
           case'4':internacao();
             break;
           case'5':relatorio();
             break;
      }
    }
void cadastro_medico(void){
      printf("Nome:\n");
      scanf("%s",nome);
      printf("CPF:\n");
      scanf("%id",cpf);
      printf("Data de nascimento:\n");
      scanf("%s",data);
      printf("Telefone:\n");
      scanf("%id");
      printf("Endereço:\n");
      scanf("%id",endereco);
      printf("E-mail:\n");
      scanf("%s",email);
      printf("Senha:\n");
      scanf("%id",senha);
      printf("Você foi cadastro com sucesso e será redirecionado para página de login!\n");
      login_medico();
   }
void funcionario(void){
        printf("Digite (1) para login\n");
        printf("Digite (2) para se cadastrar como funcionário\n");
        scanf("\n%c",&control);
        switch(control){
          case'1':login_funcionario();
             break;
          case'2':cadastro_funcionario();
             break;
        }
  }   
void login_funcionario(void){
        printf("E-mail:\n");
        scanf("%s",email);
        printf("Senha:\n");
        scanf("%id",senha);
        printf("Usuário: %s - Seja bem vindo à NuVida!\n",email);         
        printf("Digite (1) para marcar uma consulta\n");
        printf("Digite (2) para cancelar uma consulta\n");
        printf("Digite (3) para ver os relatórios\n");
        scanf("\n%c",&control);            
        switch (control){
            case '1':agendar();
              break;
            case'2':cancelamento_de_consultas();
              break;
            case'3':relatorio();
              break;
        }
   } 
void cadastro_funcionario(void){
      printf("Nome:\n");
      scanf("%s",nome);
      printf("CPF:\n");
      scanf("%id",cpf);
      printf("Data de nascimento:\n");
      scanf("%s",data);
      printf("Telefone:\n");
      scanf("%id");
      printf("Endereço:\n");
      scanf("%id",endereco);
      printf("E-mail:\n");
      scanf("%s",email);
      printf("Senha:\n");
      scanf("%id",senha);
      printf("Você foi cadastro com sucesso e será redirecionado a página de login!\n");
      login_funcionario();
  }
void internacao(void){
       printf("Nome do paciente:\n");
       scanf("%s",nome);
       printf("Idade:\n");
       scanf("%c",idade);
       printf("Motivo:\n");
       scanf("%s",motivo);
       printf("Data da internação:\n");
       scanf("%s",data);
       printf("O paciente %s foi internado por motivo de: %s, na data de: %s",nome,motivo,data);
  }                              
void agendar(void){
       printf("E-mail:\n");
       scanf("%s",email);
       printf("CPF:\n");
       scanf("%id",cpf);
       printf("AGENDE ABAIXO\n");
       printf("Data:");
       scanf("%s",data);
       printf("Horário:");
       scanf("%s",horario);
       printf("Sua consulta foi marcada para o dia: %s às %s\n",data,horario);
  }
void cancelamento_de_consultas(void){
       printf("E-mail:\n");
       scanf("%s",email);
       printf("Senha:\n");
       scanf("%id",senha);
       printf("Digite a data da consulta a ser cancelada:");
       scanf("%s",data);
       printf("Você tem certeza?\n");
       printf("Digite (1) se SIM ou (2) se NÃO\n");
       scanf("\n%c",&control);
       if(control == '1'){
         printf("A consulta do dia %s foi cancelada\n",data);
       }else{
         printf("Você foi redirecionado para a página de login\n");
         login_paciente();
       }
  }
void reclamacao_elogio(void){
       printf("Deixe seu mensagem abaixo:\n");
       scanf("%s");
       printf("Sua mensagem foi enviada.\n");
       printf("Nós da NuVida te agradecemos por isso!\n");
  }
void atestado(void){
  printf("Digite a data da sua consulta:\n");
  scanf("%id",data);
  printf("Digite o horário da sua consulta:\n");
  scanf("%id",horario);
  printf("Paciente: %s  seu atestado foi gerado\n",email);
  printf("Por favor, acesse o link a seguir e o imprima: \n");
 }
void relatorio(void){    
      do{
        printf("Você está na área de relatórios agora\n");
        printf("Digite (1) para Unidade Paraisopólis\n");
        printf("Digite (2) para Unidade Morumbi\n");
        printf("Digite (3) para Unidade Vila\n");
        printf("Digite (4) para todas as unidades da rede NuVida\n");
        scanf("\n%c",&control);
      switch (control){
         case '1':paraisopolis();
           break;
         case '2':morumbi();
           break;
         case '3':vila();
           break;
         case'4':totalRede();
           break;
     } 
      } while(control > 0 & control < 3);
  }
void paraisopolis(void){
      printf("Relatórios da Unidade Paraisopólis\n");
      printf("Digite (1) para totalização do faturamento diário\n");
      printf("Digite (2) para totalização do faturamento mensal\n");
      printf("Digite (3) para ver o número de pacientes dessa unidade\n");
      scanf("\n%c",&control);
      switch (control){
           case'1':faturamento_diario();
                 break;
            case'2':faturamento_mensal();
                 break;
            case'3':quantidadePacientes();
                 break;
          }
  }
void morumbi(void){
       printf("Relatórios da Unidade Morumbi\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
       scanf("\n%c",&control);
           switch (control){
             case'1':faturamento_diario();
                  break;
             case'2':faturamento_mensal();
                  break;
             case'3':quantidadePacientes();
                  break;
           }
  }
void vila(void){
       printf("Relatórios da Unidade Vila\n");
       printf("Digite (1) para totalização do faturamento diário\n");
       printf("Digite (2) para totalização do faturamento mensal\n");
       printf("Digite (3) para ver o número de pacientes dessa unidade\n");
       scanf("\n%c",&control);
           switch (control){
             case'1':faturamento_diario();
                  break;
             case'2':faturamento_mensal();
                  break;    
             case'3':quantidadePacientes();
                  break;       
        }
  }
void faturamento_diario(void){
  printf("Digite o número de exames feitos hoje: ");
  scanf("%f",&ex);
  printf("Digite o número de consultas odontológicas feitas hoje: ");
  scanf("%f",&dent);
  printf("Digite o número de vacinas vendidas hoje: ");
  scanf("%f",&vac);
  printf("Digite o número de cirurgias feitas hoje: ");
  scanf("%f",&cirur);
  printf("Calculando...\n");
  printf("Faturamento diário de exames: R$%1.f\n",ex*valEx);
  printf("Faturamento diário de odontologia: R$%1.f\n",dent*valDent);
  printf("Faturamento diário de vacinas: R$%1.f\n",vac*valVac);
  printf("Faturamento diário de cirurgias: R$%1.f\n",cirur*valCirur);
  printf("Faturamento diário da unidade: R$%1.f\n", ex*valEx + dent*valDent + vac*valVac + cirur*valCirur);
 }
void faturamento_mensal(void){
      printf("Abaixo, digite a quantidade de serviços prestados no mês\n");
      printf("Digite o número de exames mensais realizados: ");
      scanf("%f",&ex);
      printf("Digite o número de consultas odontológicas mensais realizadas: ");
      scanf("%f",&dent);
      printf("Digite o número de vacinas mensais vendidas: ");
      scanf("%f",&vac);
      printf("Digite o número de cirurgias mensais realizadas: ");
      scanf("%f",&cirur);
      printf("Calculando...\n");
      printf("Faturamento mensal de exames: R$%1.f\n",ex*valEx);
      printf("Faturamento mensal de odontologia: R$%1.f\n",dent*valDent);
      printf("Faturamento mensal de vacinas: R$%1.f\n",vac*valVac);
      printf("Faturamento mensal de cirurgias: R$%1.f\n",cirur*valCirur);
      printf("Faturamento mensal da unidade: R$%1.f\n", ex*valEx + dent*valDent + vac*valVac + cirur*valCirur);
  }
void quantidadePacientes(void){     
      printf("Essa unidade tem 1500 pacientes\n");     
  }
void totalRede(void){
      printf("Digite (1) para calcular o faturamento total da rede NuVida\n");
      printf("Digite (2) para ver o número de pacientes da rede\n");
  }