struct DoublyLinkedList {
    struct Node* Head;
    struct Node* Tail;
};

struct Node {
    int Value;
    struct Node* Next;
    struct Node* Previous;
};

typedef struct DoublyLinkedList DoublyLinkedList;
typedef struct Node Node;

//Создаем двусвязный список
DoublyLinkedList* CreateNewList(void);

//Проверяем на пустоту
unsigned ListIsEmpty(DoublyLinkedList*);

//Добавляем в начало элемент
void InsertFirstElement(DoublyLinkedList*, int);

//Добавляем элемент в конец
void InsertLastElement(DoublyLinkedList*, int);

//Добавление элемента до передаваемого элемента
void InsertBeforeElement(DoublyLinkedList*, Node*, int key);

//Добавление элемента после передаваемого элемента
void InsertAfterElement(DoublyLinkedList*, Node*, int key);

//Показать ключ элемента
void Show(Node*);

//Удаление элемента
void RemoveNode(Node*);

//Удаление элемента с начала списка
void RemoveHeadElement(DoublyLinkedList*);

//Удаление элемента с конца списка
void RemoveTailElement(DoublyLinkedList*);

//Вывод на экран всех элементов
void PrintList(DoublyLinkedList*);
