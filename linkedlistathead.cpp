#include <iostream>
using namespace std;

void insert(int x);
void search();
struct node{
    int data;
    node * next;
};
node* head=NULL;

int main(){
    int a;
    cout<<"How many elements do you want to enter: ";
    cin>>a;
    insert(a);
    return 0;
}

void insert(int x){
    for(int i=1;i<=x;i++){
        
        int y;
        cout<<"Enter a number to enter: ";
        cin>>y;

        node* temp,* temp1;
        temp=new node;
        temp->data=y;
        temp->next=NULL;
        
        if(head==NULL){
            head=temp;
        }
        else if(head!=NULL){
            temp1=head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }
    search();
}

void search(){
    int x;
    cout<<"Enter a number you want to search: ";
    cin>>x;

    node* temp;
    temp=head;
    while(temp->data!=x && temp!=NULL){
        temp=temp->next;
    }
    if(temp->data==x){
        cout<<"Element found!"<<endl;
    }
    else if(temp==NULL){
        cout<<"Element not present in the list!"<<endl;
    }
}