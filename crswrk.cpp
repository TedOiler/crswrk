#include <stdio.h>
#include <string.h>
#include <stdlib.h>


FILE* fd;
char line[120];
char* pline;
char* token;
char s[2]=";";
int allignment = 0;
char seperator = '|';
int i= 0;
float qtyin[10];
float qtyout[10];
float balance[10];

int main(){

  if((fd = fopen("raw18.txt", "r")) == NULL)
    return 1;
  printf("%-11s%-25s%-10s%-7s%12s\n", "ITEM ID", "DESCRIPTION", "QTY IN", "QTY OUT", "BALANCE");
  while(fgets(line, sizeof line, fd)){
    if (line[strlen(line)-1]<' ')
      line[strlen(line)-1]='\0';
    token = strtok(line, s);
    while(token){
        while(allignment<2){
          printf("%-11s", token);
          token = strtok(NULL,s);
          allignment++;
    }
      printf("%11c", seperator);
      while(allignment <4){
          char* temp = token;
          float qty = atof(temp);
          if(allignment==2){
          qtyin[i]= qty;}
          else{
          qtyout[i]= qty;}
          printf("%10.2f", qty);
          token = strtok(NULL,s);
          allignment++;
          balance[i]=qtyin[i]-qtyout[i];
    }
    allignment = 0;
  }
  printf("%3c  %7.2f\n", seperator, balance[i]);
  i++;
}
  return 0;
}


/*TODO: OPTIMIZATION: make the while loops cound DOWN*/
