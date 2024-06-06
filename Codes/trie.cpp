#include <iostream>
#include <unordered_map>

using namespace std;

struct TrieNode {
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
        root->isEndOfWord = false;
    }

    void insert(string key) {
        TrieNode* node = root;
        for (char c : key) {
            if (!node->children[c]) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->isEndOfWord = true;
    }

    bool search(string key) {
        TrieNode* node = root;
        for (char c : key) {
            if (!node->children[c]) {
                return false;
            }
            node = node->children[c];
        }
        return node != nullptr && node->isEndOfWord;
    }
};

int main() {
    Trie trie;
    trie.insert("Alice");
    trie.insert("Bob");

    cout << "Searching for Alice: " << (trie.search("Alice") ? "Found" : "Not Found") << endl;
    cout << "Searching for Charlie: " << (trie.search("Charlie") ? "Found" : "Not Found") << endl;

    return 0;
}
