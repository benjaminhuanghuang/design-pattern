# Design Patterns in TypeScript
https://www.udemy.com/course/design-patterns-typescript/

https://www.bilibili.com/video/BV1PQ4y1i7t7

https://github.com/sean-bradley/design-patterns-in-typescript

## Setup
```
    npm install -g typescript
    tsc -v

    npm i @types/node

    # create /src/tsconfig.json
    tsc --init 

    npm i -D ts-node
```

## Compile and Run 
```
"scripts": {
    "build": "npx tsc",
    "start": "npm run build && node dist/index.js",
    "start:begin": "ts-node src/begin.ts",
    "test": "echo \"Error: no test specified\" && exit 1"
  },
```

### Factory
Factory is about adding extra abstraction between the object creation and where it is used.

### Abstract Factory
Use a Factory return Factories
