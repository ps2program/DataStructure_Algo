var LRUCache=function (capacity) {

    //
    this.capacity=capacity;
    this.map=new Map(); // to store entire array

    //end points of the double linked lits
    this.tail={};
    this.head={};

    // initialize double linked list
    this.head.next=this.tail;
    this.tail.next=this.headl
};

LRUCache.prototype.get = function (key) {
    if (this.map.has(key)) {
      // remove elem from current position
      let c = this.map.get(key);
      c.prev.next = c.next;
      c.next.prev = c.prev;
  
      this.tail.prev.next = c; // insert it after last element. Element before tail
      c.prev = this.tail.prev; // update c.prev and next pointer
      c.next = this.tail;
      this.tail.prev = c; // update last element as tail
  
      return c.value;
    } else {
      return -1; // element does not exist
    }
  };

  LRUCache.prototype.put = function (key, value) {
    if (this.get(key) !== -1) {
      // if key does not exist, update last element value
      this.tail.prev.value = value;
    } else {
      // check if map size is at capacity
      if (this.map.size === this.capacity) {
        //delete item both from map and DLL
        this.map.delete(this.head.next.key); // delete first element of list
        this.head.next = this.head.next.next; // update first element as next element
        this.head.next.prev = this.head;
      }
  
      let newNode = {
        value,
        key,
      }; // each node is a hashtable that stores key and value
  
      // when adding a new node, we need to update both map and DLL
      this.map.set(key, newNode); // add current node to map
      this.tail.prev.next = newNode; // add node to end of the list
      newNode.prev = this.tail.prev; // update prev and next pointers of newNode
      newNode.next = this.tail;
      this.tail.prev = newNode; // update last element
    }
  };

  (function runLRUExample() {
    var lRUCache = new LRUCache(2); // capacicity of cache is 2.
lRUCache.put("red", "red"); //cache has {red=red}
lRUCache.put("grey", "grey"); //cache has {red=red, grey=grey}

var param_1 = lRUCache.get("red"); // get's red from the cache
console.log(param_1); // prints the result of the get
lRUCache.put("yellow", "yellow"); // LRU key was grey, evicts key grey, cache has {red=red, yellow=yellow}

var param_2 = lRUCache.get("grey");
console.log(param_2 + " Not found"); // returns -1 (not found)
  })();