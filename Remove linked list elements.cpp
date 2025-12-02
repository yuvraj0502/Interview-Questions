/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution{
    public:
    ListNode* removeElements(ListNode* head, int val){
        while(head!=nullptr && head->val==val){
            ListNode* todeleteNode=head;
            head=head->next;
            delete todeleteNode;
        }

        ListNode* curr=head;
        while(curr!=nullptr && curr->next!=nullptr){
            if(cirr->next->val==val){
                ListNode* todeleteNode=curr_>next;
                curr->next=curr->next->next;
                delete todeleteNode;
            }else{
                curr=curr->next;
            }
        }
        return head;
    }
}