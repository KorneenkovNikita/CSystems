struct Queue {
    struct Node* Front;
    struct Node* Rear;
    int Size;
};

typedef struct Queue Queue;

//Создаем узел
Node* CreateNode(int value, Node* previous);

//Создаем очередь
Queue* CreateQueue();

//Добавляем элемент в конец очереди
void QueuePush(Queue* queue, int value);

//Проверка на пустоту
int QueueIsEmpty(Queue* queue);

//Возврат элемента с начала очереди
int Peek(Queue* queue);

//Размер очереди
int QueueSize(Queue* queue);

//Удаление элемента с конца очереди и его получение
int QueuePop(Queue* queue);

//Вывод очереди на экран
void PrintQueue(Queue * queue);
