#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode* childNode[26];
    bool wordEnd;

    TrieNode() {
        wordEnd = false;
        for (int i = 0; i < 26; i++) {
            childNode[i] = NULL;
        }
    }
};

void insert_key(TrieNode* root, string& key) {
    TrieNode* currentNode = root;
    for (auto c : key) {
        if (currentNode->childNode[c - 'a'] == NULL) {
            TrieNode* newNode = new TrieNode();
            currentNode->childNode[c - 'a'] = newNode;
        }
        currentNode = currentNode->childNode[c - 'a'];
    }
    currentNode->wordEnd = true;
}

bool search_key(TrieNode* root, string& key) {
    TrieNode* currentNode = root;
    for (auto c : key) {
        if (currentNode->childNode[c - 'a'] == NULL) {
            return false;
        }
        currentNode = currentNode->childNode[c - 'a'];
    }
    return currentNode->wordEnd == true;
}

int main() {
    TrieNode* root = new TrieNode();
    vector<string> inputStrings = { "and", "ant", "do", "geek", "dad", "ball" };
    int n = inputStrings.size();
    for (int i = 0; i < n; i++) {
        insert_key(root, inputStrings[i]);
    }

    vector<string> searchQueryStrings = { "do", "geek", "bat" };
    int searchQueries = searchQueryStrings.size();
    for (int i = 0; i < searchQueries; i++) {
        cout << "Query String: " << searchQueryStrings[i] << "\n";
        if (search_key(root, searchQueryStrings[i])) {
            cout << "The query string is present in the Trie\n";
        } else {
            cout << "The query string is not present in the Trie\n";
        }
    }
    return 0;
}
