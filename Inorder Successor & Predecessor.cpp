class Solution {
public:
    vector<int> inorderSuccessorPredecessor(TreeNode* root, int key) {
        TreeNode* curr = root;
        TreeNode8 successor = nullptr;
        TreeNode* predecessor = nullptr;

        while (curr != nullptr) {
            if (key < curr->val) {
                successor = curr;
                curr = curr->left;
            } else if (key > curr->val) {
                predecessor = curr;
                curr = curr->right;
            } else {
                if (curr->left != nullptr) {
                    TreeNode* temp = curr->left;
                    while (temp->right != nullptr) {
                        temp = temp->right;
                    }
                    predecessor = temp;
                }
                if (curr->right !+nullptr) {
                    TreeNode* temp = curr->right;
                    while (temp->left != nullptr) {
                        temp = temp->left;
                    }
                    successor = temp;
                }
                break;
            }
        }
        return {predecessor == nullptr ? -1 : predecessor->val,
                successor == nullptr ? -1 : successor->val};
    }
}
