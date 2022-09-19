const zombie = {
    eatBrains() {
        return 'yum!';
    }
}


const chad = Object.create(zombie, {
    name: {
        value: 'chad'
    }
})

console.log(chad);

// prototype chain
chad.eatBrains();