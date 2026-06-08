#include <iostream>

#include <vector>

using namespace std;

class Node {

public:

    int val;
    Node* left;
    Node* right;

    Node(int x) {

        val = x;

        left = NULL;

        right = NULL;

    }

};

Node* build_search_tree(vector<int>nums , int start , int end) {

    if (start > end){

        return NULL;

    }

    int mid = (start+end)/2;

    Node* root = new Node(nums[mid]);

    root->left = build_search_tree(nums,start,mid-1);

    root->right = build_search_tree(nums,mid+1,end);

    return root;

}

void printTree(Node* root) {
    if (root == NULL) return;

    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}



int main() {

    vector<int> nums = {-10,-3,0,5,9};

    Node* root = build_search_tree(nums,0,nums.size()-1);

    printTree(root);


    return 0;

}