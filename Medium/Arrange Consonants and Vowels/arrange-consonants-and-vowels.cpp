//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}


// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/

class Solution
{
    public:
    // task is to complete this function
    // function should return head to the list after making 
    // necessary arrangements
    struct Node* arrangeCV(Node *head)
    {
        if(head->next==nullptr) return head;
        Node * dum=head;
        Node * vowel=nullptr;
        Node * vowelh=nullptr;
        
        Node * cons=nullptr;
        Node * consh=nullptr;
     
        int cont=0;
      while(dum!=nullptr){
          Node *newNode = new Node(dum->data);  
        
        newNode->next = nullptr;
          if(dum->data=='a' ||dum->data=='e' ||dum->data=='i' ||dum->data=='o' ||dum->data=='u'){
              if(vowelh==nullptr){
                  vowelh=newNode;
                  vowel=newNode;
              }
              else{
                  
                  vowel->next=newNode;
                  vowel=vowel->next;
              }
            
          }
          else{
              if(consh==nullptr){
                  consh=newNode;
                  cons=newNode;
              }
              else{
                  
                  cons->next=newNode;
                  cons=cons->next;
              }
             
             
          }
          dum=dum->next;
      }
      if(vowel==nullptr) return consh;
      if(cons==nullptr) return vowelh;
      vowel->next=consh;
      return vowelh;
    }
};


//{ Driver Code Starts.

// task is to complete this function
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
    }
	return 0;
}


// } Driver Code Ends