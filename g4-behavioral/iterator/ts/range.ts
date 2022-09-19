function range(start: number, end: number, step = 1) {
    return {
        [Symbol.iterator](){
            return this;
        },

        next() {
            if (start < end) {
                start = start + step;
                return {
                    done: false,
                    value: start
                }
            }
            return {
                done: true,
                value: end
            }
        }
    }
}


for (const n of range(0, 111, 5)) {
    console.log(n);
}