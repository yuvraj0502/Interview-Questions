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
    ListNode* sortList(ListNode* head){
        ListNode* curr=head;
        vector<int>result;
        while(curr!=nullptr){
            result.push_back(curr->val);
            curr=curr->next;
        }
        sort(result.begin(),result.end());
        curr=head;
        int index=0;
        while(curr!=nullptr){
            curr->val=result[index];
            index++;
            curr=curr->val;
        }
        return head;
    }
}