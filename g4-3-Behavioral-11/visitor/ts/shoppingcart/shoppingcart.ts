interface Item {
    accept(visitor: Visitor): void;
}

interface Visitor {
    visit(item: Book):void;
    visit(item: Electronics):void;
}


class Book implements Item {
    public accept(visitor: Visitor) {
     visitor.visit(this);
}
}

class Electronics implements Item {
    public accept(visitor: Visitor) {
     visitor.visit(this);
}
}

class RegularPriceVisitor implements Visitor {
    visit(item: Book) {
        console.log('Book regular price');
    }
    visit(item: Electronics) {
        console.log('Electronics regular price');
    }
}

class DiscountPriceVisitor implements Visitor {
    visit(item: Book) {
        console.log('Book discount price');
    }
    visit(item: Electronics) {
        console.log('Electronics discount price');
    }
}


function getPrice() {
    const items: Item[] = [
        new Book(),
        new Electronics()
    ];
    const regularPriceVisitor = new RegularPriceVisitor();
    const discountPriceVisitor = new DiscountPriceVisitor();
    items.forEach(item => {
        item.accept(regularPriceVisitor);
        item.accept(discountPriceVisitor);
    });

    // The data in Book and Electronics are operated.
}
