/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fastPointer = head;
        ListNode* slowPointer = head;
        while(fastPointer && fastPointer->next){
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
            
            if(slowPointer == fastPointer){
                ListNode* entrypoint = head;
                while(entrypoint != slowPointer)
                {
                    entrypoint = entrypoint->next;
                    slowPointer = slowPointer->next;
                }
                return entrypoint;
            }


        }
        return NULL;        
    }
};