// program to implement queue using array
#include <stdio.h>
#define MAX 40
int queue[MAX];
int front = -1, rear = -1;

// Function to check if queue is empty
int isEmpty()
{
    return (front == -1 || front > rear);
}

// Function to check if queue is full
int isFull()
{
    return (rear == MAX - 1);
}

// Function to insert element into queue (Enqueue)
void insertElement()
{
    if (isFull())
    {
        printf("Queue is full!\n");
    }
    else
    {
        int value;
        printf("Enter value to insert: ");
        scanf("%d", &value);
        if (front == -1)
            front = 0; // First element
        rear++;
        queue[rear] = value;
        printf("Element %d inserted successfully!\n", value);
    }
}

// Function to delete element from queue (Dequeue)
void deleteElement()
{
    if (isEmpty())
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front++;
        // Reset queue when it becomes empty
        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

// Function to display all elements in queue
void displayQueue()
{
    if (isEmpty())
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
        printf("Front index: %d, Rear index: %d\n", front, rear);
    }
}

// Function to display menu
void displayMenu()
{
    printf("\n========== QUEUE OPERATIONS ==========\n");
    printf("1. Insert (Enqueue)\n");
    printf("2. Delete (Dequeue)\n");
    printf("3. Display Queue\n");
    printf("4. Exit\n");
    printf("======================================\n");
    printf("Enter your choice: ");
}

int main()
{
    int choice;
    printf("Queue Implementation using Array\n");
    printf("Maximum queue size: %d\n", MAX);

    while (1)
    {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertElement();
            break;
        case 2:
            deleteElement();
            break;
        case 3:
            displayQueue();
            break;
        case 4:
            printf("Exiting program. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice! Please enter a number between 1-4.\n");
        }
    }
}
