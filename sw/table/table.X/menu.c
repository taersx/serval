/*  menu.c
    created by Ellen Fluehr
 */

#include "include.h"

#include "menu.h"
#include "object.h"
#include "wifi.h"

static struct Menu menu1, menu2, menu3, menu4;

/* parameters
 *  id: the food's id
 *  name: the food's name
 *  desc: the food's description
 *  category: the food's category
 *  price: the food's price
 * return
 *  none
 * purpose
 *  adds a food to the menu
 */
void menu_addItem(int id, char* name, char* desc, int category, float price){
    struct Menu *m;
    if (category == ENTREE){
	m = &menu1;
    }
    else if (category == APPETIZER){
	m = &menu2;
    }
    else if (category == DRINK){
	m = &menu3;
    }
    else{
	m = &menu4;
    }

    if (m->length >= 20){
	return;
    }

    m->foods[m->length].id = id;
    strcpy(m->foods[m->length].name, name);
    //m->foods[m->length].name = name;
    strcpy(m->foods[m->length].desc, desc);
    //m->foods[m->length].desc = desc;
    m->foods[m->length].category = category;
    m->foods[m->length].price = price;
    m->length++;
}

/* parameters
 *  category: the category of the menu to retrieve
 * return
 *  the menu of the selected category
 * purpose
 *  retrieves a reference to the desired menu
 */
struct Menu * menu_getRoot(int category){
    if (category == ENTREE){
	return &menu1;
    }
    else if (category == APPETIZER){
	return &menu2;
    }
    else if (category == DRINK){
	return &menu3;
    }
    else{
	return &menu4;
    }
}

/* parameters
 *  none
 * return
 *  none
 * purpose
 *  initializes the menu
 */
void menu_init(void){
    //wifi_reqItems();

    menu_addItem(1, "Bacon Cheeseburger", "1/2 pound beef burger with fries and cole slaw", ENTREE, 7.99);
    menu_addItem(2, "Sushi", "Twelve pieces of salmon, cucumber, and tuna sushi with the rice on the inside", ENTREE, 12.49);
    menu_addItem(3, "Spanakopita", "Flaky pastry filled with spinach and four different cheeses", APPETIZER, 4.75);
    menu_addItem(4, "Crab Rangoon", "Crunchy wonton with cream cheese and krab filling", APPETIZER, 3.75);
    menu_addItem(5, "Coke", "", DRINK, 1.50);
    menu_addItem(6, "Sprite", "", DRINK, 1.50);
    menu_addItem(7, "Tang", "", DRINK, 1.50);
    menu_addItem(8, "Napoleonas Torte", "Rich six-layer pastry with almond filling", DESSERT, 7.49);
    menu_addItem(9, "Spumone", "Light and refreshing fruity ice cream", DESSERT, 4.99);
//    menu_addItem(1, "Toast", "is toasty and has quite a long description that needs to wrap around, perhaps even over as many as three lines", ENTREE, 11.12);
//    menu_addItem(2, "Eggs", "are eggy", ENTREE, 23.11);
//    menu_addItem(3, "Jam", "it's very jammy", ENTREE, 2.11);
//    menu_addItem(5, "Spider Goulash", "ndesc", ENTREE, 99.99);
//    menu_addItem(6, "Ramen", "ndesc", ENTREE, 99.99);
//    menu_addItem(7, "Shrimp Scampi", "ndesc", ENTREE, 99.99);
//    menu_addItem(13, "Oni Giri", "ndesc", ENTREE, 99.99);
//    menu_addItem(4, "Doughnuts", "are frosted", DESSERT, 99.99);
//    menu_addItem(9, "Napoleonas Torte", "ndesc", DESSERT, 99.99);
//    menu_addItem(12, "Pudding", "ndesc", DESSERT, 99.99);
//    menu_addItem(12, "ice cream", "ndesc", DESSERT, 11.99);
//    menu_addItem(10, "Shasta", "ndesc", DRINK, 99.99);
//    menu_addItem(11, "Cactus juice", "It's the quenchiest", DRINK, 99.99);
//    menu_addItem(8, "Spring Roll", "ndesc", APPETIZER, 99.99);
}