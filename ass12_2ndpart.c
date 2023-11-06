#include <stdio.h>

#define max_items 100

struct shopCart {
    int items[max_items];
    int top;
};

// Initialize an empty shopping cart
struct shopCart init(int maxItems) {
    struct shopCart cart;
    cart.top = -1;
    return cart;
}

// Adding item
struct shopCart push(struct shopCart cart, int item, int maxItems) {
    if (cart.top < maxItems - 1) {
        cart.items[++cart.top] = item;
        printf("%d item added to the cart..\n", item);
    } else {
        printf("Cart full. Cannot add more items.\n");
    }
    return cart;
}

// Removing item
struct shopCart pop(struct shopCart cart) {
    if (cart.top >= 0) {
        printf("%d item removed from the cart.\n", cart.items[cart.top--]);
    } else {
        printf("Cart is empty.\n");
    }
    return cart;
}

// Process the items in the shopping cart during checkout
void checkout(struct shopCart cart) {
    printf("Checkout Process: \n");
    while (cart.top >= 0) {
        printf("Processing Item: %d\n", cart.items[cart.top]);
        cart.top--;
    }
    printf("Checkout Complete....!!\n");
}

int main() {
    int maxItems;
    printf("Enter the max number of items should be added to the cart: ");
    scanf("%d", &maxItems);

    struct shopCart cart = init(maxItems);

    cart = push(cart, 151, maxItems);
    cart = push(cart, 152, maxItems);
    cart = push(cart, 153, maxItems);
        cart = push(cart, 160, maxItems);
            cart = push(cart, 159, maxItems);
                cart = push(cart, 203, maxItems);


    checkout(cart);

    return 0;
}
