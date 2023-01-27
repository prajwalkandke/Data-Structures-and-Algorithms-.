// struct stack by using Array

#include <stdio.h>
#include <stdlib.h>

struct stack

{
  int size;
  int top;
  int *arr;
};
int isEmpty(struct stack *ptr)
{
  if (ptr->top == -1)
    return 1;
  else
  {
    return 0;
  }
}
int isFull(struct stack *ptr)

{
  if (ptr->top == ptr->size - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main(int argc, char const *argv[])

{
  // struct struct_ stack s;
  // s.size =20;
  // s.top =-1;
  // s.arr =(int*)malloc(s.sizeof * sizeof(int));
  struct stack *s;
  s->size = 20;
  s->top = -1;
  s->arr = (int *)malloc(s->size * sizeof(int));
  s->size = 6;
  s->top = -1;
  s->arr = (int *)malloc(sizeof(struct stack));

  /* data */

  // pushing an element manually
  s->arr[0] = 7;
  s->top++;
  s->arr[1] = 5;
  s->top++;
  s->arr[2] = 8;
  s->top++;
  s->arr[3] = 9;
  s->top++;
  s->arr[4] = 10;
  s->top++;
  s->arr[5] = 15;
  s->top++;
  // chaek if stack is empty
 if(isEmpty(s)){
		printf("The stack is empty\n");
	}
	else{
		printf("The stack is not empty\n");
	}
	
	if(isFull(s)){
		printf("The stack is full\n");
	}
	else{
		printf("The stack is not full\n");
	}
	
	return 0;
	
}