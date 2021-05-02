//
// Created by Angel on 5/1/2021.
//

#include <cstdio>
#include <iostream>

struct Node{
    int data;
    Node* left;
    Node* right;
};

// Function to find a root with data.
Node* Find(Node* root, int data){
    if (root == nullptr) return nullptr;

    else if (data == root->data) return root;
    else if (data <= root->data) Find(root->left, data);
    else Find(root->right, data);
}

struct Node* FindMin(struct Node* root){
    if (root == nullptr) return nullptr;

    while(root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}
//Function to find Inorder Successor in a BST
struct Node* Getsuccessor(struct Node* root,int data) {
    // Search the Node - O(h)
}


// function to insert nodes into the tree.
void Insert(Node*& root, int data){

    if(root == nullptr) {
        root = new Node;
        root->data = data;
        root->left = nullptr; root->right = nullptr;
    } else if (data <= root->data ) Insert(root->left, data);
    else
        Insert(root->right, data);

}

//Function to visit nodes in Inorder
void Inorder(Node* root) {
    if (root == nullptr) return;

    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}

int main(){
    /*Code To Test the logic
	  Creating an example tree
                5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
    Node* root = nullptr;
    Insert(root,5); Insert(root,10);
    Insert(root,3); Insert(root,4);
    Insert(root,1); Insert(root,11);

    // testing find
    Node* testRoot = nullptr;
    testRoot = Find(root, 11);
    std::cout << testRoot->data << '\n';

    //Print Nodes in Inorder
    std::cout<<"Inorder Traversal: ";
    Inorder(root);
    std::cout<<"\n";
}