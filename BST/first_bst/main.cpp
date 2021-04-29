//
// Created by Angel on 4/27/2021.
//

// https://www.youtube.com/watch?v=COZK7NATh4k&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=29
#include <iostream>
#include <queue>

struct BSTNode{
    int data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* CreateNode(int data){
    BSTNode* newNode = new BSTNode{};
//    malloc(sizeof (BSTNode))
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;

}
bool Search(BSTNode* root, int data){
    if (root == nullptr) return false;
    if (root->data == data) return true;
    else if (data <= root->data) return Search(root->left, data);
    else return Search(root->right, data);
}

// Insert a node into the tree. Recusive
void Insert(BSTNode*& root, int data){ // Or do pointer to pointer instead of double pointer
    if (root == nullptr){
        root = CreateNode(data);
    }
    else if (data <= root->data)
    {
        Insert(root->left, data);
    }
    else{
        Insert(root->right, data);
    }
    return;
}

// Inserts by looping
void insert(BSTNode*& root, int data)
{

    if (root == nullptr){
        root = CreateNode(data);
    }

    else
    {
        BSTNode* tmp = root;
        BSTNode* prev = tmp;
        while (tmp != nullptr)
        {

            if (data <= tmp->data)
            {
                prev = tmp;
                tmp = tmp->left;
            } else {
                prev = tmp;
                tmp = tmp->right;
            }
        }

        if (data <= prev->data)
            prev->left = CreateNode(data);
        else prev->right = CreateNode(data);
    }

}

// Deleting trees with breadth first search
void deleteTree(BSTNode*& root){
    std::queue<BSTNode*> nodesQ;

    if (root != nullptr)
    {
        BSTNode* node;
        nodesQ.push(root);
        while(nodesQ.empty() == false)
        {
            node = nodesQ.front();
            std::cout << node->data << " ";
            nodesQ.pop();

            if (node->left != nullptr)
                nodesQ.push(node->left);

            if (node->right != nullptr)
                nodesQ.push(node->right);
            delete node;

        }
    }

}


int main(){

    std::cout << "TEsting\n";

    BSTNode* root; // pointer to root node.
    root = nullptr;

    insert(root, 15);
    insert(root, 10);
    insert(root, 20);
    insert(root, 25);
    insert(root, 8);
    insert(root, 12);
    std::cout << root->data << '\n';

    deleteTree(root);
    std::cout << root->data << '\n';

    int number=15;
//    std::cin >> number;
//    if (Search(root,number) == true) std::cout << "Found\n";
//    else std::cout << "Not Found\n";


    return 0;
}

