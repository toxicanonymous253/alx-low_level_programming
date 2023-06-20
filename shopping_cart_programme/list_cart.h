#ifndef LIST_CART_H_
#define LIST_CART_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct item{
	char price_name[120];
	int price_item;
	int price_quantity;
};

struct cart{
	int num_items;
	struct item *items;
};

void add_item(struct cart *cart, const char *price_name, int price_item,int price_quantity);
void view_cart(struct cart *cart);
void remove_item(struct cart *cart, const char *price_name);
void delete_cart(struct cart *cart);
int compute(struct cart *cart);

#endif
