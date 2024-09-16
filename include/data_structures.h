typedef struct list_node{
    void *payload;
    struct list_node *next;
} single_list_node;

typedef struct tree_node {
    void *payload;
    struct tree_node *left;
    struct tree_node *right;
} binary_tree_node;

void add(single_list_node *, int, single_list_node *);