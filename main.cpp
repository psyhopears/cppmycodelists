#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct List {
    int data;
    struct List* next;
};

//���������� ��������� � ������ ������
List* Listbeginadd(List* head, int i) 
{
    List* l = new List;//��������� ������ ��� ���������� ������ �������� � ������ ������

    l->data = i;
    l->next = head;

    return l;
}




//����� ������
void List_output(List* head)
{
    List* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    //�������� �� ������ ������
    if (head == NULL)
        cout << "List empty\n";
    else
        cout << "\n";
}

//������� ������
void Listdel(List *head)
{
    List* curr = head;
    List* next = NULL;

    while (curr!=NULL)
    {
        next = curr->next; //������ ������� �������
        delete curr;//������� ��������
        curr = next;//������� � ���������� ��������
    }

    cout << "\nlist is clear\n";
}

//���������� ���������
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

//�����
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
    List* List_one = NULL;//������� ������
    List_output(List_one);//�������� �� ������ ������
    //��������� ��������( � ������ )
    List_one = Listbeginadd(List_one, 234);
    List_one = Listbeginadd(List_one, 236);
    List_one = Listbeginadd(List_one, 237);
    List_one = Listbeginadd(List_one, 238);

    //����������
    Listcount_elements(List_one);
    //����� ������
    List_output(List_one);
    //���� ������ ���������
    search_element(List_one, 433);
    List_one = Listadd(List_one, 433);
    search_element(List_one, 237);
    //�������
    Listdel(List_one);
}

