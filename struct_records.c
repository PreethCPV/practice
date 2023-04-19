#include <stdio.h>
#include <stdlib.h>
struct database{
  int roll_no;
  char name[30];
  int marks;
};
int main(){
  struct database *ptr;
  int i=0;
  char ch='Y';
  ptr=(struct database*)malloc(sizeof(struct database));
  while (ch=='Y'){
    printf("Enter the roll_no,name and marks separated by space: ");
    scanf("%d %s %d,&(ptr+i)->roll_no,&(ptr+i)->name,&(ptr+i)->marks);
    printf("Do you want to add more(Y/N): ");
    scanf("%s",&ch);
    if (ch=="Y"){
      i+=1;
      ptr=realloc(ptr,(i+1)*sizeof(struct database));
    }
    else if(ch=='N'){
      break;
    }
  }
printf("Printing the records: \n");
int j;
for(j=0;j<=i;j++)
{
    printf("%d %s %d\n,(ptr+j)->roll_no,(ptr+j)->name,(ptr+j)->marks");
}
}
          
       
