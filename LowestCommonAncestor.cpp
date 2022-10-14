#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return nullptr;
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        int cnt = ((left != nullptr) + (right != nullptr) + (root == p or root == q));
        if(cnt == 2 or (cnt == 1 and !left and !right))
            return root;
        else if(cnt == 1 and left)
            return left;
        else if(cnt == 1 and right)
            return right;
        return nullptr;
    }
};

int main(){

    return 0;
}