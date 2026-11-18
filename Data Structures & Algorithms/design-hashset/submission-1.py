class MyHashSet:

    def __init__(self):
        self._hashset = set()

    def add(self, key: int) -> None:
        if key not in self._hashset:
            self._hashset.add(key)

    def remove(self, key: int) -> None:
        if key in self._hashset:
            self._hashset.remove(key)

    def contains(self, key: int) -> bool:
        return True if key in self._hashset else False


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)