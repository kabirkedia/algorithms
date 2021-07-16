/*swap pairs in a linked list
eg convert 1->2->3->4
into 2->1->4->3*/



#include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
};
void append(Node** head_ref, int new_data) 
{ 
   
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->val = new_data; 

    new_node->next = NULL; 

    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
   

    while (last->next != NULL) 
        last = last->next; 
    last->next = new_node; 
    return; 
} 
Node* swap(Node* next1, Node* next2) {
    next1->next = next2->next;
    next2->next = next1;
    return next2;
}
Node *swapPairs(Node *head) {
    Node* start = new Node();//make head no longer a special case
    start->next = head;

    Node *cur = start;
    while (cur->next != NULL && cur->next->next != NULL) {
        cur->next = swap(cur->next, cur->next->next);
        cur = cur->next->next;
    }
    return start->next;
}
int main()
{
    Node* head = NULL;
    append(&head,1);
    append(&head,2);
    append(&head,3);
    append(&head,4);
    head=swapPairs(head);
    while(head!=NULL)
    {
        std::cout << head->val << std::endl;
        head=head->next;
    }
    
    return 0;
}

