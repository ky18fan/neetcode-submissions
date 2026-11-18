class MyHashMap:

    def __init__(self):
        self._hashmap = {}
        

    def put(self, key: int, value: int) -> None:
        self._hashmap.update({key: value})

    def get(self, key: int) -> int:
        return self._hashmap.get(key, -1)

    def remove(self, key: int) -> None:
        if self._hashmap.get(key):
            self._hashmap.pop(key)


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)