#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct Node
{
    int data;
    struct Node *next;
};
int table[SIZE];
struct Node *chain[SIZE];
int main()
{
    int choice, n, key;
    int i, index, j, step;
    struct Node *newNode, *temp;
    // Initialize
    for(i = 0; i < SIZE; i++)
    {
        table[i] = -1;
        chain[i] = NULL;
    }
    printf("Hash Collision Resolution Techniques\n");
    printf("1. Linear Probing\n");
    printf("2. Quadratic Probing\n");
    printf("3. Double Hashing\n");
    printf("4. Separate Chaining\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    printf("Enter number of keys: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        printf("Enter key: ");
        scanf("%d",&key);
        index = key % SIZE;
switch(choice)
{
case 1:   // Linear Probing
while(table[index] != -1)
index = (index + 1) % SIZE;
table[index] = key;
break;
case 2:   // Quadratic Probing
j = 1;
while(table[index] != -1)
{
index = (key % SIZE + j * j) % SIZE;
j++;
}
table[index] = key;
break;
case 3:   // Double Hashing
step = 7 - (key % 7);
while(table[index] != -1)
index = (index + step) % SIZE;
table[index] = key;
break;
case 4:   // Separate Chaining
newNode = (struct Node *)malloc(sizeof(struct Node));
newNode->data = key;
newNode->next = NULL;
if(chain[index] == NULL)
chain[index] = newNode;
else
{
temp = chain[index];
while(temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
break;
default:
printf("Invalid Choice");
return 0;
        }
    }
printf("\nHash Table\n");
    if(choice == 4)
    {
        for(i = 0; i < SIZE; i++)       
        {
            printf("%d : ", i);
            temp = chain[i];
            while(temp != NULL)
            {
                printf("%d -> ", temp->data);
                temp = temp->next;
            }
            printf("NULL\n");
        }
    }
    else
    {
        for(i = 0; i < SIZE; i++)
        {
            printf("%d : ", i);

            if(table[i] == -1)
                printf("Empty");
            else
                printf("%d", table[i]);
            printf("\n");
        }
    }
    return 0;
}

          
