# Health-Care Portfolio

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>P Sai Sudheer</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
</dl>

* * *

## Introduction

In today's fast-paced world, healthcare apps play a crucial role in managing health records, booking appointments, and providing online consultations. This portfolio showcases various algorithmic solutions implemented in C++ to enhance functionalities within a healthcare app similar to Practo.

## Why Portfolio

This portfolio serves as a demonstration of applying advanced algorithmic techniques to solve real-world problems in healthcare management. It highlights the practical implementation of algorithms to optimize various functionalities such as doctor search, appointment booking, and symptom checking.

## Objectives

The main objectives of this portfolio are:

- To demonstrate the use of algorithmic problem-solving techniques in healthcare applications.
- To provide efficient solutions for common healthcare app functionalities.
- To illustrate the application of data structures and algorithms in real-world scenarios.

## Design

The design of this portfolio involves selecting specific functionalities within a healthcare app and applying relevant algorithms to optimize their performance. Each functionality is paired with an appropriate algorithm and is demonstrated with C++ code examples. The following functionalities and algorithms are covered:

1. **Doctor Search** - [Click to Expand](#doctor-search)
2. **Appointment Booking** - [Click to Expand](#appointment-booking)
3. **Patient Records Management** - [Click to Expand](#patient-records-management)
4. **Online Consultation** - [Click to Expand](#online-consultation)
5. **Prescription Management** - [Click to Expand](#prescription-management)
6. **Health Analytics** - [Click to Expand](#health-analytics)
7. **Symptom Checker** - [Click to Expand](#symptom-checker)
8. **Payment Gateway Integration** - [Click to Expand](#payment-gateway-integration)
9. **Feedback and Ratings** - [Click to Expand](#feedback-and-ratings)
10. **Doctor Availability** - [Click to Expand](#doctor-availability)

<details id="doctor-search">
<summary><b>Doctor Search - Longest Common Subsequence (LCS)</b></summary>

**Functionality**: The LCS algorithm is used to match the user input with doctor names. It helps in providing autocomplete suggestions or fuzzy search results.

**Explanation**: LCS finds the longest subsequence present in both strings, making it suitable for matching partial or misspelled inputs. For example, if the user searches for "Smth", it will still match "Smith".

**C++ Code**:
```cpp
// C++ code for Longest Common Subsequence (LCS) algorithm
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lcs(string s1, string s2) {
    int m = s1.length(), n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    string s1 = "Doctor Smith", s2 = "Dr. Smit";
    cout << "Length of Longest Common Subsequence: " << lcs(s1, s2) << endl;
    return 0;
}
</details>
<details id="appointment-booking">
<summary><b>Appointment Booking - Shortest Common Supersequence (SCS)</b></summary>
Functionality: The SCS algorithm helps find the shortest sequence that can represent all the appointment slots.

Explanation: SCS can be used to merge multiple appointment slots into a unified schedule without conflicts, ensuring that overlapping appointments are handled efficiently.

C++ Code:

cpp
Copy code
// C++ code for Shortest Common Supersequence (SCS) algorithm
#include <iostream>
#include <string>

using namespace std;

int scsLength(string s1, string s2) {
    int m = s1.length(), n = s2.length();
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return m + n - dp[m][n];
}

int main() {
    string s1 = "ABC", s2 = "ACB";
    cout << "Length of Shortest Common Supersequence: " << scsLength(s1, s2) << endl;
    return 0;
}
</details>
<details id="patient-records-management">
<summary><b>Patient Records Management - Trie</b></summary>
Functionality: Tries are used for storing and retrieving patient records quickly.

Explanation: The Trie data structure allows efficient insertion and search operations, which is crucial for quickly accessing patient records based on prefixes like names or IDs.

C++ Code:

cpp
Copy code
// C++ code for Trie data structure
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
   
give me in a single code
ChatGPT
Certainly! Here's the markdown code for the Health-Care Portfolio with collapsible sections and C++ code snippets:

markdown
Copy code
# Health-Care Portfolio

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>P Sai Sudheer</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
</dl>

* * *

## Introduction

In today's fast-paced world, healthcare apps play a crucial role in managing health records, booking appointments, and providing online consultations. This portfolio showcases various algorithmic solutions implemented in C++ to enhance functionalities within a healthcare app similar to Practo.

## Why Portfolio

This portfolio serves as a demonstration of applying advanced algorithmic techniques to solve real-world problems in healthcare management. It highlights the practical implementation of algorithms to optimize various functionalities such as doctor search, appointment booking, and symptom checking.

## Objectives

The main objectives of this portfolio are:

- To demonstrate the use of algorithmic problem-solving techniques in healthcare applications.
- To provide efficient solutions for common healthcare app functionalities.
- To illustrate the application of data structures and algorithms in real-world scenarios.

## Design

The design of this portfolio involves selecting specific functionalities within a healthcare app and applying relevant algorithms to optimize their performance. Each functionality is paired with an appropriate algorithm and is demonstrated with C++ code examples. The following functionalities and algorithms are covered:

<details>
<summary><b>Doctor Search - Longest Common Subsequence (LCS)</b></summary>

**Functionality**: The LCS algorithm is used to match the user input with doctor names. It helps in providing autocomplete suggestions or fuzzy search results.

**Explanation**: LCS finds the longest subsequence present in both strings, making it suitable for matching partial or misspelled inputs. For example, if the user searches for "Smth", it will still match "Smith".

**C++ Code**:
```cpp
// C++ code for Longest Common Subsequence (LCS) algorithm
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lcs(string s1, string s2) {
    int m = s1.length(), n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    string s1 = "Doctor Smith", s2 = "Dr. Smit";
    cout << "Length of Longest Common Subsequence: " << lcs(s1, s2) << endl;
    return 0;
}
</details>
<details>
<summary><b>Appointment Booking - Shortest Common Supersequence (SCS)</b></summary>
Functionality: The SCS algorithm helps find the shortest sequence that can represent all the appointment slots.

Explanation: SCS can be used to merge multiple appointment slots into a unified schedule without conflicts, ensuring that overlapping appointments are handled efficiently.

C++ Code:

cpp
Copy code
// C++ code for Shortest Common Supersequence (SCS) algorithm
#include <iostream>
#include <string>

using namespace std;

int scsLength(string s1, string s2) {
    int m = s1.length(), n = s2.length();
    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return m + n - dp[m][n];
}

int main() {
    string s1 = "ABC", s2 = "ACB";
    cout << "Length of Shortest Common Supersequence: " << scsLength(s1, s2) << endl;
    return 0;
}
</details>
