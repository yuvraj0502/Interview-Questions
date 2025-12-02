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
    bool isPalimdrome(ListNode* head){
        ListNode* curr=head;
        stack<int>st;

        while(curr!=nullptr){
            st.push(curr->val);
            curr=curr->next;
        }
        while(head!=nullptr){
            int topElement=st.top();
            st.pop();
            if(head->val!=topElement){
                return false;
            }
            head=head->next;
        }
        return true;
    }
}