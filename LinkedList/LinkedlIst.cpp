#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert(int data){
    struct node *newNode = new node();
    if(head==NULL){
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    }
    else{
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(int data){
    struct node *newNode = new node();

    if(head==NULL){
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    else{
        newNode->data = data;
        newNode->next = NULL;
        struct node *tmp = head;
        while(tmp->next!=NULL){
            tmp=tmp->next;
        }
        tmp->next = newNode;
       
    }
}

void print(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        struct node *tmp = head;
        while(tmp!=NULL){
            cout<<tmp->data<<" ";
            tmp = tmp->next;
        }
    }
}

int main(){

    int n;
    cout<<"enter the number of element to be inserted:"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
       insertAtEnd(a);
    }

    

    print();

    return 0;
}