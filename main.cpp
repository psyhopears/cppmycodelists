#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct List {
    int data;
    struct List* next;
};

//добавление элементов в начало списка
List* Listbeginadd(List* head, int i) 
{
    List* l = new List;//выделение памяти для добавления нового элемента в начало списка

    l->data = i;
    l->next = head;

    return l;
}




//вывод списка
void List_output(List* head)
{
    List* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    //проверка на пустой список
    if (head == NULL)
        cout << "List empty\n";
    else
        cout << "\n";
}

//очистка списка
void Listdel(List *head)
{
    List* curr = head;
    List* next = NULL;

    while (curr!=NULL)
    {
        next = curr->next; //сейвим текущий элемент
        delete curr;//очистка элемента
        curr = next;//переход к следующему элементу
    }

    cout << "\nlist is clear\n";
}

//количество элементов
void Listcount_elements(List *head)
{
    List* curr = head;
    List* next = NULL;

    int count = 0;

    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }

    cout << "count: " << count << endl;
}

//поиск
void search_element(List* head, int i) 
{
    List* curr = head;
    int position=0;
    bool found = false;
    if(curr!=NULL)
        while (curr!=NULL)
        {
            position++;
            if (curr->data == i) { 
                found = true;
                break;
            }
            curr = curr->next;
        }
    if (found)
        cout << i << " found, at position = " << position-1 << ".\n";
    else
        cout << i << " not found in list\n";
}

int main()
{
    List* List_one = NULL;//создаем список
    List_output(List_one);//проверка на пустой список
    //добавляем элементы( в начало )
    List_one = Listbeginadd(List_one, 234);
    List_one = Listbeginadd(List_one, 236);
    List_one = Listbeginadd(List_one, 237);
    List_one = Listbeginadd(List_one, 238);

    //количество
    Listcount_elements(List_one);
    //вывод списка
    List_output(List_one);
    //тест поиска элементов
    search_element(List_one, 433);
    List_one = Listadd(List_one, 433);
    search_element(List_one, 237);
    //очистка
    Listdel(List_one);
}

