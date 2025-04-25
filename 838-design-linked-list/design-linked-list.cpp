class MyLinkedList {
public:

    class Node{
    public:
        int val;
        Node * next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
    };
    int size;
    Node *head;
    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size) return -1;
        Node * temp = head;
        for(int i=0; i<index; i++){
            temp = temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newnode = new Node(val);
        if(!head){
            head = newnode;
        }
        else {
            newnode->next = head;
            head = newnode;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node *newnode = new Node(val);
        if(!head){
            head = newnode;
            size++;
            return;
        }
        Node * temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size){
            return;
        }
        if(index ==0){
            addAtHead(val);
            return;
        }
        if(index == size){
            addAtTail(val);
            return;
        }
        Node *newnode = new Node(val);

        Node *t = head;
        for(int i=0; i<index-1; i++) t = t->next;
        newnode->next = t->next;
        t->next = newnode;
        size++;
    }
    void deleteAtHead(){
        Node * temp = head;
        head = head->next;
        delete(temp);
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;
        if(index == 0){
            deleteAtHead();
        }
        else {
            
        Node *cur = head;
        for(int i=0; i<index-1; i++) cur = cur->next;
        Node *temp = cur->next;
        cur->next = cur->next->next;
        delete(temp);
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */