#include<stdio.h>
#include<string.h>
int main(){
 char a[100];
 int i,l,cu=0,cl=0,cd=0,cs=0;
 printf("Enter Your Password:");
 gets(a);
 l=strlen(a);
 if(l<8){
  printf("NOT STRONG PASSWORD:");
  printf("please add more then 8 numbers");
 }
 else{
  for(i=0;i<l;i++){
   if(a[i]>='A'&&a[i]<='Z'){
    cu++;
   }
   else if(a[i]>='a'&&a[i]<='z'){
    cl++;
   }
   else if(a[i]>='0'&&a[i]<='9'){
    cd++;
   }
   else{
    cs++;
   }
  }
  if(cu!=0&&cl!=0&&cd!=0&&cs!=0){
   printf("your password is strong");
  }
  else if(cu==0&&cl!=0&&cd!=0&&cs!=0){
   printf("not strong password\n");
   printf("Warning:Upper case character needed");
  }
  else if(cu!=0&&cl==0&&cd!=0&&cs!=0){
   
   printf("Warning:Lower case character needed");
  }
  else if(cu!=0&&cl!=0&&cd==0&&cs!=0){
   printf("not strong password\n");
   printf("Warning:digit is missing in your password");
  }
  else if(cu!=0&&cl!=0&&cd!=0&&cs==0){
   printf("not strong password \n");
   printf("Warning:Special character needed");
  }
  else if(cu==0&&cl==0&&cd!=0&&cs!=0){
   printf("not strong password \n");
   printf("Warning:1)Upper case character needed \n 2)lower case character needed");
  }
  else if(cu==0&&cl!=0&&cd==0&&cs!=0){
   printf("not strong password \n");
   printf("Warning:1)Upper case character needed \n 2)digit is needed");
  }
  else if(cu==0&&cl!=0&&cd!=0&&cs==0){
   printf("not strong password \n");
   printf("Warning:1)Upper case character needed \n 2)special character is needed");
  }
  else if(cu!=0&&cl==0&&cd==0&&cs!=0){
   printf("not strong password \n");
   printf("Warning:1)Lower case character needed \n 2)digit is needed");
  }
  else if(cu!=0&&cl==0&&cd!=0&&cs==0){
   printf("not strong password \n");
   printf("Warning:1)Lower case character needed \n 2)Special character is needed");
  }
  else if(cu!=0&&cl!=0&&cd==0&&cs==0){
   printf("not strong password \n");
   printf("Warning:1)Digit is needed \n 2)Special character is needed");
  }
  else if(cu==0&&cl==0&&cd==0&&cs!=0){
   printf("not strong password \n");
   printf("Warning:1)Uppee case character is needed/n 2)lower case character is needed 3)decimal is needed");
   
  }
  else if(cu!=0&&cl==0&&cd==0&&cs==0){
   printf("not strong password \n");
   printf("Warning:1)Lower case character needed \n 2)Special character is needed \n 3) digit is needed");
  }
  else if(cu==0&&cl!=0&&cd==0&&cs==0){
   printf("not strong password \n");
   printf("Warning:1)Upper case character needed \n 2)Special character is needed \n 3) digit is needed");
  }
  else if(cu==0&&cl==0&&cd!=0&&cs==0){
   printf("not strong password \n");
   printf("Warning:1)Lower case character needed \n 2)Special character is needed \n 3) Upper case character is needed");
  }
  else if(cu==0&&cl==0&&cd==0&&cs!=0){
   printf("not strong password \n");
   printf("Warning:1)Lower case character needed \n 2)upper case is needed \n 3) digit is needed");
  }
 }
}
