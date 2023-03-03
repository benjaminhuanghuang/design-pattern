# Design Patterns in TypeScript
https://www.udemy.com/course/design-patterns-typescript/

https://www.bilibili.com/video/BV1PQ4y1i7t7

https://github.com/sean-bradley/design-patterns-in-typescript

## Setup
```
    npm install -g typescript
    tsc -v

    npm i @types/node


    create /src/tsconfig.json
```

## Compile and Run 
```
    # -p Compiles the TypeScript project located at the specified path.
    # -w watch file change
    tsc -p ./src -w

    ./dist/1_creational/factory/chair-factory/client.js
```

## Use ts-node
```
    cd 1_creational/factory/chair-factory/
    ts-node .\client.ts
```

### Factory
Factory is about adding extra abstraction between the object creation and where it is used.