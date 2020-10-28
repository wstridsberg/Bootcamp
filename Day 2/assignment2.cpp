#include <iostream>

struct Elem
{
    int value;
    Elem *next;
};

Elem *head = new Elem;

void printList(Elem *head)
{
    std::cout << std::endl;
    Elem *temp = head;

    std::cout << "Your list looks like this: ";

    do
    {
        std::cout << temp->value << " ";
        temp = temp->next;
    } while (temp->next != nullptr);

    std::cout << std::endl
              << std::endl;
}

void removeitem() // Missing if statement to handle if head is the only item left
{
    Elem *temp = head->next;
    delete head;
    head = temp;
    std::cout << std::endl;
}

Elem *findtail(Elem *f)
{
    for (; f->next != nullptr;)
    {
        f = f->next;
    }
    return (f);
}

void additem(int addtolist)
{
    Elem *temp = new Elem;
    temp->value = addtolist;
    temp->next = nullptr;
    findtail(head)->next = temp;

    //   Elem *tail = findtail(head);
    //  tail->next=temp;
}

int main()
{

    head->value = 12;

    Elem *secondElem = new Elem;
    secondElem->value = 99;
    head->next = secondElem;

    Elem *thirdElem = new Elem;
    thirdElem->next = nullptr;
    secondElem->next = thirdElem;
    thirdElem->value = 37;

    int choice;
    while (choice != 4)
    {
        std::cout << "What would you like to do? Press 1, 2, 3 or 4" << std::endl
                  << std::endl;
        std::cout << "1. Add an item in the end of the list " << std::endl;
        std::cout << "2. Remove an item in the beginning of the list " << std::endl;
        std::cout << "3. Print the list " << std::endl;
        std::cout << "4. Exit " << std::endl
                  << std::endl;
        std::cin >> choice;

        if (choice == 1)
        {
            int addtolist;
            std::cout << std::endl
                      << "What number would you like to add? : ";
            std::cin >> addtolist;
            additem(addtolist);
            std::cout << std::endl;
        }
        else if (choice == 2)
        {
            removeitem();
        }
        else if (choice == 3)
        {

            printList(head);
        }
    }

    return 0;
}