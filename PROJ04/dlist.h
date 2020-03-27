//**********************************************//
//  GAVIN DASSATTI                              //
//  CS 2401                                     //
//  PROJECT 04                                  //
//                                              //
//  THIS FILE IS THE HEADER FILE FOR THE        //
//  DLIST CLASS. IT IS A TEMPLATED CONTAINER    //
//  CLASS THAT OFFERS A DOUBLY LINKED LIST      //
//  THAT USES POINTERS AT THE BEGINNING AND END //
//  OF THE LIST.                                //
//**********************************************//

#ifndef DLIST_H
#define DLIST_H
#include <iostream>
#include "dnode.h"
#include "node_iterator.h"

template<class G>
class dlist{

    public:

        // ITERATOR DECLARATION
        typedef node_iterator<G> iterator;

        // DEFAULT CONSTRUCTOR
        dlist();

        // DECONSTRUCTOR
        ~dlist();
        // COPY CONSTRUCTOR
        dlist(const dlist& other);
        // ASSIGNMENT OPERATOR
        dlist& operator =(const dlist& other);

        // MEMBER FUNCTIONS
        void front_insert(const G& item);
        void rear_insert(const G& item);
        void front_remove();
        void rear_remove();
        void clear_list();
        void show();
        void reverse_show();
        int size();

        // ITERATOR MEMBER FUNCTIONS
        void insert_before(iterator index, G item);
        void insert_after(iterator index, G item);
        void remove(iterator index);

        // ITERATOR FUNCTIONS
        iterator begin(){ return iterator(head); }
        iterator end(){ return iterator(NULL); }
        iterator r_begin(){ return iterator(tail); }
        iterator r_end(){ return iterator(NULL); }


    private:

        dnode<G>* head;
        dnode<G>* tail;

};

#include "dlist.template"
#endif