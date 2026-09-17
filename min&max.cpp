#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int heap[MAX];
int size = 0;
int type = 1;   // 1 = Max Heap, 2 = Min Heap
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int compare(int a, int b)
{
    if(type == 1)
        return a > b;   // Max Heap
    else
        return a < b;   // Min Heap
}
void heapifyUp(int index)
{
    int parent;
    while(index > 0)
    {
        parent = (index - 1) / 2;
        if(compare(heap[index], heap[parent]))
        {
            swap(&heap[index], &heap[parent]);
            index = parent;
        }
        else
            break;
    }
}
void heapifyDown(int index)
{
    int left, right, selected;
    while(1)
    {
        left = 2 * index + 1;
        right = 2 * index + 2;
        selected = index;
        if(left < size && compare(heap[left], heap[selected]))
            selected = left;
        if(right < size && compare(heap[right], heap[selected]))
            selected = right;
        if(selected != index)
        {
            swap(&heap[index], &heap[selected]);
            index = selected;
        }
        else
            break;
    }
}
void insert(int value)
{
    if(size == MAX)
    {
        printf("Heap Overflow!\n");
        return;
    }
    heap[size] = value;
    heapifyUp(size);
    size++;
    printf("%d inserted successfully.\n", value);
}
void deleteRoot()
{
    if(size == 0)
    {
        printf("Heap Underflow!\n");
        return;
    }
    printf("Deleted Root: %d\n", heap[0]);
    heap[0] = heap[size - 1];
    size--;
    heapifyDown(0);
}
void display()
{
    int i;
    if(size == 0)
    {
        printf("Heap is empty.\n");
        return;
    }
    printf("Heap Elements: ");
    for(i = 0; i < size; i++)
        printf("%d ", heap[i]);
    printf("\n");
}
int main()
{
    int choice, value;

    printf("Choose Heap Type\n");
    printf("1. Max Heap\n");
    printf("2. Min Heap\n");
    printf("Enter choice: ");
    scanf("%d", &type);
    if(type != 1 && type != 2)
    {
        printf("Invalid Heap Type!\n");
        return 0;
    }
    while(1)
    {
        printf("\n--- HEAP OPERATIONS ---\n");
        printf("1. Insert\n");
        printf("2. Delete Root\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                deleteRoot();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
