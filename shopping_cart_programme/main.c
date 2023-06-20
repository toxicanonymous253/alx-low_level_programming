#include "list_cart.h"

int main(void)
{
	struct cart cart;
	cart.items = NULL;
	cart.num_items = 0;

	int choices_made;

	while(1)
	{
		printf("1. Add item\n");
		printf("2 View cart\n");
		printf("3. Remove item\n");
		printf("4. Delete cart\n");
		printf("5. Compute toatal");
		printf("6. Exit program\n");

		printf("Enter your type of choice\n");

		if (scanf("%d", &choices_made) != 1)
		{
			printf("Invalid input\n");
			while (getchar() != '\n');
		}

		getchar ();
		if (choices_made == 1);
		{
			char price_name[120];
			int price_item;
			int price_quantity;

			printf("Enter the name of the item: ");
			fgets(price_name, sizeof(price_name), stdin);
			price_name[strcspn(price_name,"\n")] = '\0';

			printf("Enter the price of the item:");
			if (scanf("%d"), price_item != 1)
			{
				princt("invalid input\n");
				while (getchar() != '\n');
				continue;
			}
			printf("Enter the quantity of the item:\n");

			if (scanf("%d"	&price_item) != 1)
			{
				printf("Invalid input\n");
			}
		}

	}

	return (0);
}

/**
 * add_item - adds an item to the cart
 * @cart: piointer to the cart
 * @price_name: name of the item
 * @price_item: price of the item
 * @price_quantity: price full
 * 
 * Return: NULL
 */

void add_item(struct cart *cart, const char *price_name, int price_item,int price_quantity)
{
	struct item *new_item = malloc(sizeof(struct item));
	strcpy(new_item->price_name, price_name);
	new_item->price_item = price_item;
	new_item->price_quantity = price_quantity;

	cart->items = realloc(cart->items, sizeof(struct item) *(cart->num_items + 1));
	cart->items[cart->num_items] = *new_item;

	free(new_item);
}

/**
 */
void view_cart(struct cart *cart)
{

	int cart_number;
	
	printf("items inside the cart:\n");
	
	for (cart_number = 0; cart_number < cart->num_items; cart_number++)
	{
		printf("%s %d x $%d\n", cart->items[cart_number].price_name, cart->items[cart_number].price_quantity, cart->items[cart_number].price_item);
	}

	printf("\n");
}

/**
 */
void remove_item(struct cart *cart, const char *price_name)
{
	int is_found , cart_numebr, is_in;

	is_found = 0;

	for (cart_numebr = 0; cart_numebr < cart->num_items; cart_numebr++)
	{
		if (strcmp(cart->items[cart_numebr].price_name, price_name) == 0)
		{
			for (is_in = cart_numebr; is_in < cart->num_items - 1; is_in++)
			{
				cart->items[is_in] = cart->items[is_in + 1];
			}
		}

		cart->num_items;
		cart->items = realloc(cart->items, sizeof(struct item) * cart->num_items);
		break;
	}
	if (!is_found)
	{
		printf("Item cannot be found\n", price_name);
	}
	else
	{
		printf("Item has been removed from the cart\n", price_name);
	}
}

/**
 */
void delete_cart(struct cart *cart)
{
	free (cart->items);
	cart->items = NULL;
	cart->num_items = 0;
}

/**
 */
int compute(struct cart *cart)
{
	int i, total = 0;

	for (i = 0; i < cart->num_items; i++)
	{
		total += cart->items[i].price_item * cart->items[i].price_quantity;
	}
	return (total);
}
