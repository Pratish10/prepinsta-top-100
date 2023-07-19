#include <iostream>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *DeleteNodes(struct Node *head, int x)
{
    if (head == nullptr)
        return nullptr;

    struct Node *current = head;
    int sum = 0;

    while (current != nullptr && sum + current->data <= x)
    {
        sum += current->data;
        current = current->next;
    }

    head = current;

    return head;
}

// Function to print the linked list
void printLinkedList(struct Node *head)
{
    struct Node *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

int main()
{
    struct Node *head1 = createNode(10);
    head1->next = createNode(8);
    head1->next->next = createNode(6);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(2);

    int x1 = 15;

    // std::cout << "Original Linked List: ";
    printLinkedList(head1);

    struct Node *modifiedHead1 = DeleteNodes(head1, x1);

    // std::cout << "Modified Linked List: ";
    printLinkedList(modifiedHead1);

    struct Node *head2 = createNode(8);
    head2->next = createNode(7);
    head2->next->next = createNode(6);
    head2->next->next->next = createNode(5);
    head2->next->next->next->next = createNode(4);
    head2->next->next->next->next->next = createNode(3);
    head2->next->next->next->next->next->next = createNode(2);
    head2->next->next->next->next->next->next->next = createNode(1);

    int x2 = 18;

    // std::cout << "Original Linked List: ";
    printLinkedList(head2);

    struct Node *modifiedHead2 = DeleteNodes(head2, x2);

    // std::cout << "Modified Linked List: ";
    printLinkedList(modifiedHead2);

    return 0;
}
