// ---------------------------------------------------------------------------

#pragma hdrstop

#include "SpecialTree.h"

int SpecialTree:: CountNodesInTree(Node* tmp) {
	if (tmp == NULL)
		return 0;

	return CountNodesInTree(tmp->pLeft) + CountNodesInTree(tmp->pRight) + 1;
}
// ---------------------------------------------------------------------------
#pragma package(smart_init)
