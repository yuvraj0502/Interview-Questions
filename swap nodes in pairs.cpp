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
    ListNode* swapPairs(ListNode* head){
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* prev=nullptr;
        ListNode* firstNode=head;
        ListNode* secondNode=head->next;

        while(firstNode!=nullptr && secondNode!=nullptr){
            ListNode* thirdNode=second->next;
            secondNode->next=firstNode;
            firstNode->next=thirdNode;

            if(prev!=nullptr){
                prev->next=secondNode;
            }else{
                head=secondNode;
            }

            prev=firstNode;
            firstNode=thirdNode;

            if(thirdNode!=nullptr){
                secondNode=thirdNode->next;
            }else[
                secondNode=nullptr;
            ]
        }
        return head;
    }
}