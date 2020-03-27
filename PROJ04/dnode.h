//**************************************************//
//  GAVIN DASSATTI                                  //
//  CS 2401                                         //
//  PROJECT 04                                      //
//                                                  //
//  THIS IS THE HEADER FILE FOR THE DNODE CLASS.    //
//  THE DNODE CLASS CONSISTS OF A TEMPLATED         //
//  DOUBLY LINKED LIST THAT OFFERS FORWARDS AND     //
//  BACKWARDS ACCESS TO ELEMENTS OF THE LIST.       //
//**************************************************//

#ifndef DNODE_H
#define DNODE_H

template<class G>
class dnode{

    public:

        // CONSTRUCTOR
        dnode(const G& item = G(), dnode* previous = NULL, dnode* next = NULL){
            data_field = item;
            previous_link = previous;
            next_link = next;
        }

        // CONST GETTERS
        const G& data() const { return data_field; }
        const dnode* next()const { return next_link; }
        const dnode* previous() const { return previous_link; }

        // NON-CONST GETTERS
        G& data(){ return data_field; }
        dnode* next(){ return next_link; }
        dnode* previous() { return previous_link; }

        // SETTERS
        void set_data(G item){ data_field = item; }
        void set_next(dnode* next){ next_link = next; }
        void set_previous(dnode* previous){ previous_link = previous; }


    private:

        G data_field;
        dnode* next_link;
        dnode* previous_link;

};

#endif
