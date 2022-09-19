class Database {
    constructor(data) {
      if (Database.exists) {
        return Database.instance;
      }
      this._data = data;
      // Static
      Database.instance = this;
      Database.exists = true;
      // return this;  // I think constructor returns 'this' by default
    }
  
    getData() {
      return this._data;
    }
  
    setData(data) {
      this._data = data;
    }
  }

  export default Database