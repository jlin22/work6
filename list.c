#include <stdio.h>
#include <stdlib.h>
struct node{int i; struct node *next;};
void print_list(struct node *n){
  while (n->next){
    printf("%d, ",n->i);
    n = n->next;
  }
  printf("%d\n",n->i);
}
struct node * insert_front(struct node *n, int i){
  struct node* x = (struct node *)malloc(sizeof(struct node));
  x->i = i;
  x->next = n;
  return x;
}
struct node * free_list(struct node *n){
  while (n){
    struct node *b = n;
    n =n->next;
    free(b);
    b=0;
  }
  return n;
}
int main(){
  struct node *x = 0;
  for (int i = 0; i < 5; i++){
    x = insert_front(x,9*i);
  }
  printf("The list is : ");
  print_list(x);
  free_list(x);
  printf("The freeist is : ");
  print_list(x);
  return 0;
}
