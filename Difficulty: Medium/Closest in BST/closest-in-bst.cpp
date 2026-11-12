/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int ans = 1e8;
    
    void func(Node *root, int k){
        if(!root)return ;
        
        ans = min(ans, abs(root->data-k));
        
        if(k> root->data){
            func(root->right , k);
        }else{
            func(root->left , k);
        }
    }
    
    int minDiff(Node *root, int k) {
        // code here
        func(root , k);
        
        return ans ;
    }
};
