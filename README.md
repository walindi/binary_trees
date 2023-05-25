## C - Binary trees

The following data structures and types for binary trees are included in the header file.
### Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```

### AVL Tree
```
typedef struct binary_tree_s avl_t;
```

### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```


- [0-binary_tree_node.c](0-binary_tree_node.c) is a function that creates a binary tree node
  - Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
  - `parent` is a pointer to the parent node of the node to create
  - `value` is the value to put in the new node
  - When created, a node does not have any child
  - The function returns a pointer to the new node, or `NULL` on failure
- [1-binary_tree_insert_left.c](1-binary_tree_insert_left.c) inserts a node as the left-child of another node
  - Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
  - `parent` is a pointer to the node to insert the left-child in
  - `value` is the value to store in the new node
  - The function returns a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
  - If `parent` already has a left-child, the new node takes its place, and the old left-child is set as the left-child of the new node.
- [2-binary_tree_insert_right.c](2-binary_tree_insert_right.c) inserts a node as the right-child of another node
  - Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
  - `parent` is a pointer to the node to insert the right-child in
  - `value` is the value to store in the new node
  - The function returns pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
  - If `parent` already has a right-child, the new node takes its place, and the old right-child is set as the right-child of the new node
- [3-binary_tree_delete.c](3-binary_tree_delete.c) is a function that deletes an entire binary tree
  - Prototype: `void binary_tree_delete(binary_tree_t *tree);`
  - `tree` is a pointer to the root node of the tree to delete
  - If `tree` is `NULL` the function does nothing
- [4-binary_tree_is_leaf.c](4-binary_tree_is_leaf.c) checks if a node is leaf
  - Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
  - `node` is a pointer to the node to check
  - The function returns `1` if `node` is a leaf, otherwise `0`
  - If `node` is `NULL`, it returns `0`
- [5-binary_tree_is_root.c](5-binary_tree_is_root.c) checks if a given node is a root
  - Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
  - `node` is a pointer to the node to check
  - The function returns `1` if `node` is a root, otherwise `0`
  - If `node` is `NULL`, it returns `0`
- [6-binary_tree_preorder.c](6-binary_tree_preorder.c) goes through a binary tree using pre-order traversal.
  - Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
  - `tree` is a pointer to the root node of the tree to traverse
  - `func` s a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function
  - If `tree` or `func` is `NULL` nothing is done
