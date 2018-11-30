#include <iostream>

struct Node{

    int numar;
    bool selected;
    struct Node *prev;
    struct Node *next;
};

void create_list(int numbers[])
{
    struct Node first;
    first.numar = numbers[0];
    int i;
    struct Node next;
    first.next -> next;
    for(i = 1; i < 6; i++)
    {

    }
}
int main(int argc, char const *argv[])
{
    int turns = 6;
    int value[6];
    int i;
    for(i = 0; i < turns; i++)
    {
        std::cin>>value[i];
    }
    create_list(value);

    return 0;
}
