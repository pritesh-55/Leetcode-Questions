//Abhishek Deokar


class LRUCache {
public:
    unordered_map<int , int> m ;

    // Map Address will help us to get the iterator(pointer) of a particular Node present in our Doubly Linked List

    unordered_map<int , list<int> :: iterator> address ;

    // Doubly LinkedList L will help us to keep track of the recently used data and also to delete as well as make new entiries in our Map M

    list<int> l ;

    // Cap will store the maximum Capacity of our LRU Data Structure

    int cap ;

    // Siz will store the Current Size of our LRU Data Structure

    int siz  ;
    LRUCache(int capacity) {
         cap = capacity ;

        siz = 0 ;
    }
    
    int get(int key) {
         if(m.find(key) == m.end() )
            return -1 ;

        // Store the Address of the Key using Address Map

        list<int> :: iterator it = address[key] ;

        // Erase the Key from the List and the Address Map

        l.erase(it) ;
        address.erase(key) ;

        // Put the Key again at the Front of our Doubly LinkedList & insert in the Address Map again

        l.push_front(key) ;
        address[key] = l.begin() ;

        // Return the value associated with the Key using Map M

        return m[key] ;

    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end() )
        {
            l.erase(address[key]) ;

            address.erase(key) ;

            m.erase(key) ;

            siz-- ;
        }

        // If Siz is equal to Cap, that is, Capacity is full, we need to delete the Last Node from our Doubly LinkedList

        if(siz == cap)
        {
            // Store the Last Node's Value in variable K

            int k = l.back() ;

            // Delete the Node from Doubly LinkedList

            l.pop_back() ;

            // Remove K from Address Map & M Map as well

            address.erase(k) ;
            m.erase(k) ;

            // Decrement Siz by 1

            siz-- ;
            }

        // Now, we can insert the Key-Value Pair into our Map M as well as our List L

        siz++ ;

        // Make the Key as the First Node of our Doubly LinkedList L

        l.push_front(key) ;

        // Store the iterator / pointer of Key into Address Map

        address[key] = l.begin() ;

        // Store the Key Value pair in Map M

        m[key] = value ;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
