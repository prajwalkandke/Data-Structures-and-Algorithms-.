#include <stdio.h>
void push()
{
    int val;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("not able to push the element");
    }
    else
    {
        printf("Enter the value");
        scanf("%d", &val);
        if (head == NULL)
        {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
        printf("Item pushed");
    }
}