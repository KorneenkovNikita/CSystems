struct StackNode {
    int key;
    struct StackNode* prev;
};

struct Stack {
    struct StackNode* head;
};

typedef struct StackNode StackNode;
typedef struct Stack Stack;

//Создаем стек
Stack* CreateStack(void);

//Проверка на пустоту
unsigned StackIsEmpty(Stack*);

//Добавление элемента вверх
void Push(Stack* stack, int key);

//Удалить верхний элемент
int Pop(Stack* stack);

//Вывод стека на экран
void PrintStack(Stack* stack);