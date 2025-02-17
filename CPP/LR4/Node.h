// ---------------------------------------------------------------------------

#ifndef NodeH
#define NodeH

template<typename T>
class Node {
private:
	T data;

public:
	Node* pNext = 0;

	T GetData() {
		return data;
	}

	void SetData(T data) {
		this->data = data;
	}

	Node(T data) {
		this->data = data;
	}
};
// ---------------------------------------------------------------------------
#endif
