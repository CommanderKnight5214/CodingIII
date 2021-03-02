class Node
{
    private:
        int payload;
        Node* nextNode;
        
    
    public:
        Node(int payload);
        void setNextNode(Node* n);
        void setNextNodeReverse(Node* n);
        Node* getNextNode();
        Node* getNextNodeReverse();
        int getPayload();
};