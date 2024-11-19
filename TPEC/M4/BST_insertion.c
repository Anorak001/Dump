struct node* creatNode(int data){
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    
    return root;
}

struct node* insert( struct node* root, int data ) {
        if(root == NULL){
            struct node* tree = creatNode(data);
            return tree;
        }else{
            struct node* cur;
            
            if(data <= root->data){
                cur = insert(root->left,data);
                root->left = cur;
            }else{
                cur = insert(root->right,data);
                root->right = cur;
            }
        }
        return root;
}
