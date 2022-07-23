class DoublyLinkedlist {
    constructor() {
        this.head=null;
        this.tail=null;
        this.length=0;
    };

    insert(value) {
        this.length++;
        let newNode=createNode(value);

        if(this.tail) {
            this.tail.next=newNode;
            newNode.previous=this.tail;
            this.tail=newNode;
            return newNode;
        }

        this.head=this.tail=newNode;
        return newNode;
    };

    print() {
        let current = this.head;
        while (current) {
          console.log(
            `${current.previous?.value} ${current.value} ${current.next?.value}`
          );
          current = current.next;
        }
      }
};

function createNode(value) {
    return {
        value:value,
        next:null,
        previous:null,
    }
};

(function runTheExample() {
    const dLinkedList = new DoublyLinkedList();

dLinkedList.insert(7);
dLinkedList.insert(8);
dLinkedList.insert(9);
dLinkedList.print(); 
})();