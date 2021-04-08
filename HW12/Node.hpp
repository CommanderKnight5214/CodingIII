class Node
{
    private:
        int payload;
        Node* leftChildNextNode;
        Node* rightChildNextNode;
        Node* nextNode;
        int leftChild;
        int rightChild;
        
    
    public:
        Node(int payload, int leftChild, int rightChild);
        /*
        void setLeftChildNextNode(Node* n);
        void setRightChildNextNode(Node* n);
        */
        void setNextNode(Node* n);
        /*
        Node* getLeftChildNextNode();
        Node* getRightChildNextNode();
        */
        Node* getNextNode();
        int getPayload();
        int leftChildvalidate();
        int rightChildvalidate();
        int leftChildCancel();
        int rightChildCancel();
        int leftChildStatus();
        int rightChildStatus();
};