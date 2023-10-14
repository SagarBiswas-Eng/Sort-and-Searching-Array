#include<iostream>
using namespace std;

class BST {
private:
    //Building Blocks (Node) for BST
    class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int v) {
            data = v;
            left = NULL;
            right = NULL;
        }
    };

    typedef Node* TreeNode;
    TreeNode createTreeNode(int v) {
        return new Node(v);
    }

    //Implementing BST
    TreeNode root=NULL;

    TreeNode insertNode(TreeNode ptr,int v) {
        if(ptr == NULL) {
            ptr = createTreeNode(v);
        } else if(v < ptr->data) {
            ptr->left = insertNode(ptr->left,v);
        } else if(v > ptr->data) {
            ptr->right = insertNode(ptr->right,v);
        }
        return ptr;
    }
    void inorderVisit(TreeNode ptr) {
        if(ptr == NULL) {
            return;
        }
        inorderVisit(ptr->left);
        cout<<ptr->data<<" ";
        inorderVisit(ptr->right);
    }
    void postorderVisit(TreeNode ptr) {
        if(ptr == NULL) {
            return;
        }
        postorderVisit(ptr->left);
        postorderVisit(ptr->right);
        cout<<ptr->data<<" ";
    }
public:
//insertion
    void insert(int v) {
        root = insertNode(root,v);
    }
//traversal
    //inorder
    void inorder() {
        inorderVisit(root);
        cout<<endl;
    }

    //preorder
    //postorder
//search
//min
    TreeNode min() {
        TreeNode ptr= root;
        if(ptr == NULL) {
            return NULL;
        }
        while(ptr->left != NULL) {
            ptr = ptr->left;
        }
        return ptr;
    }
//max
    TreeNode max() {
        TreeNode ptr= root;
        if(ptr == NULL) {
            return NULL;
        }
        while(ptr->right != NULL) {
            ptr = ptr->right;
        }
        return ptr;
    }
//delete

//show
    void showNode(TreeNode ptr) {
        if(ptr!=NULL) {
            cout<<ptr->data<<endl;
        }
    }

};

int main() {
    BST bst;

    bst.insert(43);
    bst.insert(31);
    bst.insert(64);
    bst.insert(40);
    bst.insert(20);
    bst.insert(89);
    bst.insert(56);
    bst.insert(47);
    bst.insert(33);
    bst.insert(28);
    bst.insert(59);
    bst.inorder();
    bst.showNode( bst.min() );
    bst.showNode( bst.max() );
    return 0;
}
