#include <stdio.h>
#include <stdlib.h>

typedef struct FamilyMember {
    int id;
    int wealth;
    struct FamilyMember** children;
    int children_count;
} FamilyMember;
int max(int a,int b)
{
    if (a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int find_max_wealth(FamilyMember* root) {
    int max_wealth = root->wealth;
    for (int i = 0; i < root->children_count; i++) {
        max_wealth = max(max_wealth, find_max_wealth(root->children[i]));
    }
    return max_wealth;
}

int main() {
    int n;
    scanf("%d", &n);
    int* wealths = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &wealths[i]);
    }
    FamilyMember** members = (FamilyMember**)malloc((n + 1) * sizeof(FamilyMember*));
    for (int i = 1; i <= n; i++) {
        members[i] = (FamilyMember*)malloc(sizeof(FamilyMember));
        members[i]->id = i;
        members[i]->wealth = wealths[i - 1];
        members[i]->children = NULL;
        members[i]->children_count = 0;
    }
    for (int i = 1; i < n; i++) {
        int parent, child;
        scanf("%d %d", &parent, &child);
        members[parent]->children_count++;
        members[parent]->children = (FamilyMember**)realloc(members[parent]->children, members[parent]->children_count * sizeof(FamilyMember*));
        members[parent]->children[members[parent]->children_count - 1] = members[child];
    }
    printf("%d\n", find_max_wealth(members[1]));
    for (int i = 1; i <= n; i++) {
        free(members[i]->children);
        free(members[i]);
    }
    free(members);
    free(wealths);
    return 0;
}
