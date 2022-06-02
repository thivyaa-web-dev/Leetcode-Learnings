// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++
/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	 vector <int>ans;
    	 if(root == NULL)
    	 return ans;
    	 
    	 queue<Node*>q;
    	 q.push(root);
    	 
    	 //we need to set the condition as bool is true, and invert it whenev
         //chanes 
         bool flag = true;
         
         //now we need to traverse into the queue 
         while(!q.empty()){
             int size = q.size();
             vector<int>level;
             
             //now you need to traverse and iterate iinto the queue size 
             
             for(int i=0;i<size;i++){
                 Node*node = q.front();
                 q.pop();
                 level.push_back(node->data); //you are pushing the node's data 
                 
                 
                 //if the left node is not null, then push the left node 
                 if(node->left!=NULL)
                 q.push(node->left);
                 
                 if(node->right!=NULL)
                 q.push(node->right);
                 
             }
             if(flag == true) //now when the flag equates to true 
             {
                 
                 //when the flag comes to true 
                 //we need to iterate it 
                 //and push it back to the ans vector 
                 for(auto it:level)
                 ans.push_back(it);
                 //and after this operation gets completed you change the flag to false 
                 flag = false;
             }
             else{
                 reverse(level.begin(), level.end());
                 for(auto it:level)
                 ans.push_back(it);
                 flag = true;
             }
         }
         return ans;
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        ans = ob.zigZagTraversal(root) ;

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << endl;
     
    }
    return 0;
}
  // } Driver Code Ends