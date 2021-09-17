struct info{
      int sz;
      int max;
      int min;
      int ans;
      bool isBST;
    };
    public:
    info dfs(Node* root){
         if (root == NULL)
        return {0, INT_MIN, INT_MAX, 0, true};
    if (root->left == NULL && root->right == NULL)
        return {1, root->data, root->data, 1, true};
 
    // Recur for left subtree and right subtrees
    info l = dfs(root->left);
    info r = dfs(root->right);
 
    // Create a return variable and initialize its
    // size.
    info ret;
    ret.sz = (1 + l.sz + r.sz);
 
    // If whole tree rooted under current root is
    // BST.
    if (l.isBST && r.isBST && l.max < root->data &&
            r.min > root->data)
    {
        ret.min = min(l.min, min(r.min, root->data));
        ret.max = max(r.max, max(l.max, root->data));
 
        // Update answer for tree rooted under
        // current 'root'
        ret.ans = ret.sz;
        ret.isBST = true;
 
        return ret;
    }
 
    // If whole tree is not BST, return maximum
    // of left and right subtrees
    ret.ans = max(l.ans, r.ans);
    ret.isBST = false;
 
    return ret;
    }
    int largestBst(Node *root){
        info ans = dfs(root);
        return ans.ans;
    }
