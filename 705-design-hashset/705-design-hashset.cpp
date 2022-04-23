class MyHashSet {
public:
    // hashvector
    vector<list<int>> hashStore;
    int siz;
    MyHashSet() {
        siz = 10;
        hashStore.resize(siz);
        
    }
    
    int hashFunc(int key){
        return key % siz;
    }
    void add(int key) {
        if(contains(key)) return;
        int index = hashFunc(key);
        hashStore[index].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int index = hashFunc(key);
        hashStore[index].erase(search(key));  
    }
    
    list<int> :: iterator search(int key){
        int index = hashFunc(key);
        return find(hashStore[index].begin(), hashStore[index].end(), key);
        
    }
    bool contains(int key) {
        int index = hashFunc(key);
        if(search(key) == hashStore[index].end()) return false;
        else return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */