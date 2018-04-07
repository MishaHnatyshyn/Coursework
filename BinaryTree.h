struct TreeLetter{
    int data;
    TreeLetter* parent;
    TreeLetter* leftChild;
    TreeLetter* rightChild;
};

class BinaryTree{
private:
    TreeLetter * root = nullptr;
public:
    void addLetter(int);
    void deleteLetter(TreeLetter *);
    void walk(TreeLetter *);
    void printTree(TreeLetter *,int);
    TreeLetter * minimum(TreeLetter * = nullptr);
    TreeLetter * maximum(TreeLetter * = nullptr);
    TreeLetter * search(int,TreeLetter * = nullptr);
    TreeLetter * next(TreeLetter *);
    TreeLetter * getRoot();
};