#include <stdio.h>
#include <locale.h>
 int main(void){
     setlocale(LC_ALL,"Ukrainian");
 printf("������ ����� ������: \n");
 int lenth;
 scanf("%d",&lenth);
 int nam;
 char mnA[100];
 char mnB[100];
 int potA = 0;
 int potB = 0;
 int aa, bb;
 for(int m = 0; m<lenth; m++){
     printf("������ %d ��� ������� �: ",m);
     scanf("%s", &mnA[m]);
     printf("\n");
   }
 for(int n = 0; n<lenth; n++){
     printf("������ %d ��� ������� �: ", n);
     scanf("%s", &mnB[n]);
      printf("\n");
    }

    //г����� ������
    printf("г����� ������� � � � ={");
 for(int x = 0; x<lenth; x++){
        nam = 0;
   for(int y = 0; y<lenth; y++){
        if(mnA[x]!=mnB[y]){
        nam++;
     }
   }
     if(nam == lenth){
        printf("1,  ");
     }else{
         printf("0,  ");
     }}

  printf("}\n");
  printf("г����� ������� � � A ={");
 for(int x = 0; x<lenth; x++){
        nam = 0;
   for(int y = 0; y<lenth; y++){
     if(mnB[x]!=mnA[y]){
      nam++;
      }
    }
     if(nam == lenth){
        printf("1,  ");
     }else{printf("0,  ");}
  }

  //���������� ������
  printf("}\n");
  printf("���������� ������� �  ={");
     for(int x = 0; x<lenth; x++){
        nam = 0;
       for(int y = 0; y<lenth; y++){
         if(mnB[x]!=mnA[y]){
         nam++;
     }
   }
      if(nam == lenth){
        printf("1,  ");
     }else{printf("0,  ");}
  }
  printf("}\n");
 printf("���������� ������� B  ={");

  for(int x = 0; x<lenth; x++){
        nam = 0;
   for(int y = 0; y<lenth; y++){
     if(mnA[x]!=mnB[y]){
      nam++;
     }
   }
     if(nam == lenth){
        printf("1,  ");
     }else{printf("0,  ");}
  }

  //��������� ������
  printf("}\n");
   for(int x = 0; x<lenth; x++){
      aa = 0;
     for(int y = 0; y<lenth; y++){
     if(mnA[x]!=mnA[y]){
       aa++;
       }
     }
     if(aa == lenth-1){
        potA++;
      }
    }
    for(int x = 0; x<lenth; x++){
        bb = 0;
     for(int y = 0; y<lenth; y++){
       if(mnB[x]!=mnB[y]){
       bb++;
         }
       }

     if(bb == lenth -1){
        potB++;
      }
   }
   if(potA == lenth){
    printf("��������� ������� � = %d\n",potA);

   }
    else{
     potA++;
     printf("��������� ������� � = %d\n",potA);
    }
        if(potB == lenth){
    printf("��������� ������� B = %d\n",potB);

   }
    else{
     potB++;
     printf("��������� ������� B = %d\n",potB);
    }
 }
