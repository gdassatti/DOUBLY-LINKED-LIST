//**************************************************//
//  GAVIN DASSATTI                                  //
//  CS 2401                                         //
//  PROJECT 04                                      //
//                                                  //
//  HEADER FILE FOR THE NODE ITERATOR CLASS, THE    //
//  CLASS CONSISTS OF A TEMPLATED EXTERNAL ITERATOR //
//**************************************************//

#ifndef NODE_ITERATOR_H
#define NODE_ITERATOR_H

template<class G>
class dlist;
template<class G>
class node_iterator{

    public:

        friend class dlist<G>;

        node_iterator(dnode<G>* current = NULL){ current_node = current; }

        bool operator ==(const node_iterator& other){ return current_node == other.current_node; }
        bool operator !=(const node_iterator& other){ return current_node != other.current_node; }

        G operator *(){ return current_node -> data(); }

        node_iterator operator ++(){
            current_node = current_node -> next();
            return *this;
        }

        node_iterator operator --(){
            current_node = current_node -> previous();
            return *this;
        }

        node_iterator operator ++(int){
            node_iterator original(current_node);
            current_node = current_node -> next();
            return original;
        }

        node_iterator operator --(int){
            node_iterator original(current_node);
            current_node = current_node -> previous();
            return original;
        }


    private:

        dnode<G>* current_node;

};

#endif