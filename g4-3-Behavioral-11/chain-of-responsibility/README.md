# Chain of Responsibility

## Intent



## Example
Without Chain of Responsibility
```
public bool Validate(){
    if (doc.Title ....) {
        return false;
    }

    if (doc.Version ....) {
        return false;
    }

    if (doc.Approved ....) {
        return false;
    }
    return true;
}
```

Discount
```
    const ndiscount = new NumberDiscount();
    ndiscount.setNext(new PriceDiscount());
    pdiscount.setNext(new NoneDiscount());
   
    const discount = ndiscount.exec(products);
```

Document validation
