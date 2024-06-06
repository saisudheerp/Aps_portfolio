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

    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            if (!node->children[c]) {
                return false;
            }
            node = node->children[c];
        }
        return true;
    }
};

int main() {
    Trie trie;
    trie.insert("fever");
    trie.insert("headache");
    trie.insert("cough");

    cout << "Searching for 'fever': " << (trie.search("fever") ? "Found" : "Not Found") << endl;
    cout << "Searching for 'flu': " << (trie.search("flu") ? "Found" : "Not Found") << endl;
    cout << "Prefix search 'hea': " << (trie.startsWith("hea") ? "Found" : "Not Found") << endl;

    return 0;
}
