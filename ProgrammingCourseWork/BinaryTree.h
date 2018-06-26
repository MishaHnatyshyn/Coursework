struct TreeLetter {
	int data;
	TreeLetter() {
		leftChild = nullptr;
		rightChild = nullptr;
		parent = nullptr;
	};
	TreeLetter* parent;
	TreeLetter* leftChild;
	TreeLetter* rightChild;
};

class BinaryTree {
private:
	TreeLetter * root = nullptr;
public:
	void addLetter(int, int*);
	void deleteLetter(TreeLetter *);
	TreeLetter * minimum(TreeLetter * = nullptr);
	TreeLetter * maximum(TreeLetter * = nullptr);
	TreeLetter * next(TreeLetter *);
	TreeLetter * getRoot();
};