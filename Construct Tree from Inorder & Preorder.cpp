//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    map<int, int>m;
    int idx;
    Node* func(int in[], int pre[], int si, int ei){
        if(si>ei)   return NULL;
        Node* newNode = new Node(pre[idx]);
        idx++;
        if(si==ei){
            return newNode;
        }
        int mi = m[newNode->data];
        newNode->left = func(in, pre, si, mi-1);
        newNode->right = func(in, pre, mi+1, ei);
        return newNode;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        idx=0;
        for(int i=0; i<n; i++) m[in[i]]=i;
        Node* root = func(in, pre, 0, n-1);
        return root;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends
