#include<stdio.h>
#include<stdlib.h>

int a[20];
int i,val,n,pos;

void create();
void display();
void insert();
void delete();


int main(){
  int choice = 1;
  while(choice){
    printf("\n.....MENU.....\n");
    printf("\n1.CREATE: ");
    printf("\n2.DISPLAY: ");
    printf("\n3.INSERT: ");
    printf("\n4.DELETE: ");
    printf("\n5.EXIT: ");
    printf("\n...........................");
    printf("\nENTER YOUR CHOICE:\t");
    scanf("%d",&choice);
    switch(choice){
      case 1:
      create();
      break;
      case 2:
      display();
      break;
      case 3:
      insert();
      break;
      case 4:
      delete();
      break;
      case 5:
      exit(0);
      default:
      printf("\nInvalied choice:");
      break;
    }
  }
  return 0;
}

void create(){
  printf("\nEnter the size of the array elements:\t");
  scanf("%d",&n);
  printf("\nEnter the elements for the array:\n");
  for (i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
}

void display(){
  int i;
  printf("\nThe array elements are:\t");
  for(i=0;i<n;i++){
    printf("%d\t",a[i]);
  }
}

void insert(){
  printf("\nEnter the position for the new element:\t");
  scanf("%d",&pos);
  printf("\nEnter the element to be inserted:\t");
  scanf("%d",&val);
  for(i=n-1;i>=pos;i--){
    a[i+1]=a[i];
 }
 a[pos]=val;
 n=n+1;
}

void delete(){
  printf("\nEnter the position of the element to be deleted:\t");
  scanf("%d",&pos);
  val=a[pos];
  for(i=pos;i<n-1;i++){
    a[i]=a[i+1];
  }
  n=n-1;
  printf("\nThe deleted element is =%d", val);
}