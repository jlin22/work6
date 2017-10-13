#include <stdio.h>
#include <stdlib.h>
struct node{int i; struct node *next;};
void print_list(struct node *x){
  struct node n = *x;
  while (n.next){
    printf("%d\n",n.i);
    n = *n.next;
  }
}
int main(){
  struct node x;
  x.i = 11;
  x.next = 0;
  print_list(&x);
  return 0;
}
