class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* first, int n) {
        ListNode *temp = first, *prev = NULL, *fast = first; 
        if(first == NULL){
            return NULL;
        }
        else{
            while(n > 0){            
                fast = fast->next;
                n--;
            }
            while(fast != NULL){
                prev = temp;
                temp = temp->next;
                fast = fast->next;
            }
            if(prev == NULL){
                first = first->next;  
                delete temp;
            }
            else{
                prev->next = temp->next;
                delete temp;
            }
        }
        return first;                
    }
};
