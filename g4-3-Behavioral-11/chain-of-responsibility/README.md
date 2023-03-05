# Chain of Responsibility

## Intent



## Example
Discount
```
    const ndiscount = new NumberDiscount();
    ndiscount.setNext(new PriceDiscount());
    pdiscount.setNext(new NoneDiscount());
   
    const discount = ndiscount.exec(products);
```

Document validation
