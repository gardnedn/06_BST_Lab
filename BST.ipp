#define NULL 0
#include <string>

template <class Key, class T>
BST<Key,T>::BST(){
	root = new Node<Key,T>;
//	Node<Key, T>* root=
//	root = NULL;
//std::cout<<root << std::endl;
//std::cout<<root->k << std::endl;
//std::cout<<root->data <<std::endl;
	root->left = NULL;
	root->right = NULL;
//	std::cout<<root->right;
	//next(k,root) = NULL;	
}

template <class Key, class T>
BST<Key,T>::~BST(){
	while (root != NULL)
		remove(root->k);
	delete root;

}

  
//Return the number of items currently in the SSet
template <class Key, class T>
unsigned long BST<Key,T>::size(){
  //return size(k);
  return 10;
}

template <class Key, class T>
unsigned long BST<Key,T>::size(Node<Key,T>* r){
	/*if (r == NULL)
		return 0;
    return 1 + size(r->left) + size(r->right);
	*/
	return 11;
}

//Add a new item, x, with Key k.
// If an item with Key k already exists, overwrite it
template <class Key, class T>
void BST<Key,T>::add(Key k, T x){
	//std::cout << "PRINT";
	root = add(k, x, root);
}

//Remove the item with Key k. If there is no such item, do nothing.
template <class Key, class T>
void BST<Key,T>::remove(Key k){
	//root = remove(k, root);
}

//Return the item with Key k. 
// If there is no such item, throw an exception.
template <class Key, class T>
T BST<Key,T>::find(Key k){
	Node<Key,T>* temp = find(k,root);
	return temp->data;
	//T temp;
	//return temp;
}
//Return true if there is an item with Key k in the table. If not,
// return false
template <class Key, class T>
bool BST<Key,T>::keyExists(Key k){
	if (find(k,root) != NULL)
		return true;
	return false;
	//return true;
}

//If there is a key in the set that is > k,
// return the first such key. If not, return k
template <class Key, class T>
Key BST<Key,T>::next(Key k){
  Key fakeKey;
  return fakeKey;
}

template <class Key, class T>
Node<Key,T>* BST<Key,T>::next(Key k, Node<Key,T>* r){
  //TODO
  return NULL;
}

//If there is a key in the set that is < k,
// return the first such key. If not, return k
template <class Key, class T>
Key BST<Key,T>::prev(Key k){
  //TODO
  return NULL;
}

template <class Key, class T>
Node<Key,T>* BST<Key,T>::prev(Key k, Node<Key,T>* r){
  //TODO
  return NULL;
}


template <class Key, class T>
Node<Key,T>* BST<Key,T>::add(Key k, T x, Node<Key,T>* r){
// std::cout << "D" << r->left;
// std::cout << "LLL" << k << std::endl;

	if (r == NULL) {
		Node<Key,T>* t = new Node<Key,T>;
		t->data = x;
		t->k = k;
		return t;
	}
	
	else if (r->k == k) {
		r->data = x;
		return r;
	}
	else if (k < r->k){
	//	std::cout << "RRR" << r->data;
		r->left = add(k,x,r->left);	
	}
	else {
		r->right = add(k,x,r->right);
	//	std::cout << "Right";
	}
	//return r;
	return r;
}

template <class Key, class T>
Node<Key,T>* BST<Key,T>::remove(Key k, Node<Key,T>* r){
 
	/*if (r == NULL) {
		return NULL;
	}
	else if (r->k == k){
		if (r->left == NULL && r->right == NULL){
			delete r;
			return NULL;
		}
		else if (r->left == NULL || r->right == NULL){
			Node<Key, T>* newr = r->left;
			if (newr == NULL){
				newr = r->right;
				delete r;
				return newr;
				}
			else {
				Node<Key,T>* maxr = max(r->left);
				Key temp = maxr->k;
				maxr->k = r->k;
				r->k = temp;
				T tempData = maxr->data;
				maxr->data = r->data;
				r->data = tempData;
				r->left = remove(k,r->left);
				return r;
			}
		}
	}
	else if (k < r->k) {
		r->left = remove(k, r->left);
		}
	else {
		r->right = remove(k, r->right);
	}

	return r;*/
	return NULL;
 
}

template <class Key, class T>
Node<Key,T>* BST<Key,T>::find(Key k, Node<Key,T>* r){
  	if (r == NULL)
		return NULL;
	else if (k < r->k)
		r->left = find(k, r->left);
	else if (k > r->k)
		r->right = find(k, r->right);
	else if (k == r->k)
		return r;
	else
		//return NULL;*/
	return NULL;
}

template <class Key, class T>
Node<Key,T>* BST<Key,T>::max(Node<Key,T>* r){
	/*if (r == NULL)
		return NULL;
	else if (r->right == NULL)
		return r;
	else
		return max(r->right);*/
	return NULL;
}

template <class Key, class T>
Node<Key,T>* BST<Key,T>::min(Node<Key,T>* r){
	/*if (r == NULL)
		return NULL;
	else if (r->left == NULL)
		return r;
	else
		return min(r->left);*/
	return NULL;
}
