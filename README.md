# Health-Care Management App Portfolio

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Name</dt>
<dd>P SAI SUDHEER</dd>
<dt>USN</dt>
<dd>01FE21BCS096</dd>
<dt>Course Instructor</dt>
<dd>Prakash Hegade</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
</dl>

* * *

## 1. Introduction

In today's world, healthcare apps play a crucial role in managing health records, booking appointments, and providing online consultations. This portfolio showcases various algorithmic solutions implemented in C and C++ to enhance functionalities within a healthcare app. I got the idea of healthcare apps from Practo. Practo offers a range of services, including the ability to search for doctors and book appointments online, order medicines, consult with doctors online through video calls or chat, store and manage medical records, and read health-related articles and tips[17]. I have  done research about Practo and found out the functionalities that Practo is implementing. My idea is to make a health app that provides the functionalities of Practo and add some additional features that will improve the app and make the app efficient. This app will be useful for both doctors and patients.This app not only facilitates easier access to healthcare services but also contributes to better health outcomes by providing timely medical advice, tracking health metrics, and maintaining health records. By using algorithmic problem-solving techniques, we can further improve  the efficiency, accuracy, and scalability of these apps, ensuring they meet the evolving needs of users.

## 2. Why Portfolio

This portfolio serves as a demonstration of applying advanced algorithmic techniques to solve real-world problems in healthcare management. It highlights the practical implementation of algorithms to optimize various functionalities such as doctor search, appointment booking, symptom checking and many more. My portfolio provides a comprehensive guide for developing efficient, reliable, and scalable healthcare solutions using algorithmic approaches. By presenting detailed code implementations and explaining the underlying concepts, this portfolio can serve as a valuable resource for students, developers, and healthcare professionals interested in the intersection of technology and healthcare. these algorithms help us to implement new functionalities and also improve the already present functionality.

## 3. Objectives

The main objectives of this portfolio are:

- **Demonstrate Algorithmic Techniques**: Showcase the use of algorithmic problem-solving techniques in healthcare applications.
- **Provide Efficient Solutions**: Develop efficient solutions for common healthcare app functionalities to improve user experience.
- **Illustrate Practical Applications**: Highlight the application of data structures and algorithms in real-world scenarios.
- **Enhance Healthcare Management**: Contribute to better healthcare management through optimized app functionalities.
- **Promote Scalability and Accuracy**: Ensure the solutions are scalable to handle large datasets and maintain high accuracy.

## 4. Design

The design of this portfolio involves selecting specific functionalities within a healthcare app and applying relevant algorithms to optimize their performance. Each functionality is paired with an appropriate algorithm and is demonstrated with C and C++ code examples. I have written some codes and some of them I have gathered from various internet resources. The following functionalities and algorithms are covered:

### 1. Doctor Search by Specialty

This functionality is for searching doctors based on their specialty in a large dataset. It allows patients to find medical professionals with specific  health conditions. A linear search is inefficient as it takes more time to search. The best approach would be using a Trie data structure, which allows for efficient prefix-based searching. Time Complexity and Space complexity are O(number of words * maxLengthOfWord). Here is my code for the [Trie data structure](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/trie.cpp)[1].

![Doctor Search by Specialty](images/patient_by_specialiity.png)
*This image represents the Doctor search by specialty in the Practo app[13].*

### 2. Appointment Scheduling

This functionality is to efficiently manage appointment scheduling to optimize healthcare provider availability and patient convenience. Traditional methods may lead to inefficient scheduling and patient wait times. The best approach would be using the Min-Heap data structure, which allows for efficient retrieval and insertion of appointments based on priority, such as urgency or patient condition severity. Time Complexity is O(n*logn) and space complexity is O(n). Here is my code for [Min-Heap implementation](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/min_heap.cpp)[2].

![Appointment Scheduling](images/appointment_scheduling.png)

*This image represents the Appointment Scheduling[8]*
### 3. Patient Record Management

This use case is used for managing and retrieving patient records efficiently. This ensures that healthcare providers have access to accurate and up-to-date patient data, which is essential for delivering quality care. Linear search would be too slow. The best approach would be using a Binary Search Tree (BST) for efficient insertion, deletion, and search operations. Time Complexity and Space complexity are O(n). Here is my code for [BST implementation](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/bst.c).

![patient record management](images/patient%20record%20management.jpg)
*This image represents the Patient Record Management[13]*

### 4. Prescription Management

This functionality ensures that healthcare providers can access accurate prescription information quickly, improving patient care . Searching through a list is too slow. The best approach would be using Hash Tables, which offer average O(1) time complexity for lookups. Here is my code for [Hash Table implementation](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/hashing.cpp)[3].

![Prescription Management](images/prescription%20management%202.jpg)
*This image represents the Prescription Management[15]*

### 5. Emergency Response System

This functionality is for providing quick access to emergency services based on location. The best approach would be using Dijkstra's Algorithm, which finds the shortest path in weighted graphs. Time Complexity is O(n^2) and space complexity is O(n). Here is my code for [Dijkstra's Algorithm](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/dijkstras.c).

### 6. Medicine Availability

For checking the availability of medicines in various pharmacies, a linear search is impractical. The best approach would be using Breadth-First Search (BFS) to explore all nearby pharmacies systematically. Time Complexity and Space complexity are O(n). Here is my code for [BFS](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/bst.c).
![Prescription Management](images/prescription%20management.png)
*This image represents the Medicine Availability From Medplus[14]*

### 7. Patient Queue Management

For managing patient queues in clinics, a first-come-first-served approach may be inefficient because some patients should be treated based on emergencies. The best approach would be using a Priority Queue to handle patients based on urgency. Time Complexity is O(n) and Space complexity is O(1). Here is my code for [Priority Queue](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/priority_q.c).

![Patient Queue management](images/queue%20management.png)
*This image represents the Patient Queue Management[16]*
### 8. Symptom Tracking Over Time

This use case  is to track changes in symptoms over time. A person experiencing normal leg pain might initially ignore it, but if the pain continues for several days, it could be a sign of a more serious condition like bone cancer. Therefore, it is crucial to monitor the symptoms continuously at regular intervals. The best approach would be using the Sliding Window Algorithm to analyze data within specific intervals. Time Complexity is O(n) and space complexity is O(1). Here is my code for the [Sliding Window Algorithm](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/sliding_window.cpp)[4].

![Symptom Tracking Over Time](images/synptom%20tracking.png)
*This image represents the Symptom Tracking Over Time[9]*
### 9. Insurance Claim Processing

This functionality is to efficiently process insurance claims while minimizing processing time and maximizing accuracy. Traditional methods may struggle with the complexity and volume of claim data. The best approach would be using a Graph-based approach, such as Dijkstra's Algorithm, to optimize the routing and processing of claims through the insurance network. Time Complexity is O(n^2) and space complexity is O(n). Here is my code for [Dijkstra's Algorithm](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/dijkstras.c).

### 10. Healthcare Resource Allocation

Optimize the allocation of healthcare resources such as staff and equipment to meet patient demand efficiently. The best approach would be using a Max-Flow Min-Cut Algorithm, such as the Ford-Fulkerson method, to maximize resource allocation while minimizing costs and bottlenecks. Time Complexity is O(V * E^2) and space complexity is O(V). Here is my code for the [Ford-Fulkerson algorithm implementation](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/ford_fulkerson.cpp)[5].

### 11. Electronic Health Record (EHR) Retrieval

Efficiently retrieve patient Electronic Health Records (EHR) from a large database. Basic search methods may be inefficient for large datasets. The best approach would be using an Indexing technique like B+ Tree, which allows for fast retrieval of records based on patient identifiers or timestamps. Time Complexity and Space complexity are O(logn). Here is my code for [B+ Tree implementation](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/bplus.cpp)[6].

![Electronic Health Record (EHR) Retrieval](images/Electronic_medical_record.jpg)

*This image represents the Electronic Health Record (EHR) Retrieval[10]*

### 12. Medical Inventory Management

Manage and optimize the inventory of medical supplies and medications in hospitals or pharmacies. Simple inventory management methods like first-in, first-out (FIFO) may lead to overstocking or stockouts. The best approach would be using a Min-Heap data structure to prioritize and manage inventory levels based on demand and expiration dates. The time complexity is O(n*logn) and the space complexity is O(n). Here is my code for Min-Heap implementation. [Min-Heap implementation](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/min_heap.cpp)[2].

![Medical Inventory Management](images/inventory_management.png)
*This image represents the Medical Inventory Management[11]*

### 13. Personalized Treatment Recommendation

Recommend personalized treatment plans for patients based on medical history and current conditions. Traditional methods may provide generic recommendations. The best approach would be using a Decision Support System, such as the A* Search Algorithm, which evaluates treatment options based on patient-specific factors like medical history, allergies, and genetic predispositions. Time Complexity is O(E*logn) and space complexity is O(n). Here is my code for [A* Search Algorithm implementation](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/Astar.cpp)[7].

### 14. Healthcare Facility Routing Optimization

This use case is to optimize the routing of healthcare professionals within hospital facilities to minimize travel time and maximize patient care. The best approach would be using a Shortest Path algorithm like Dijkstra's Algorithm, which computes the most efficient routes based on dynamic factors such as patient locations and emergency situations. Time Complexity is O(n^2) and space complexity is O(n). Here is my code for [Dijkstra's Algorithm](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/dijkstras.c) in facility routing.

### 15. Patient Discharge Planning

Optimize the discharge planning process for patients to ensure timely and smooth transitions from hospital care to home or rehabilitation facilities. Check list is a option but may lead to delays and inefficiencies. The best approach would be using a Graph Traversal algorithm like Breadth-First Search (BFS), which identifies the shortest path and optimal sequence of discharge tasks based on patient needs and facility resources. Time Complexity and Space complexity are O(n). Here is my code for [BST implementation](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/bst.c) in discharge planning.

### 16. Healthcare Supply Chain Optimization

Optimize the supply chain management of healthcare products and equipment to ensure timely availability and reduce costs. Traditional supply chain methods may lack visibility and responsiveness. The best approach would be using a Network Flow algorithm like the Ford-Fulkerson method, which maximizes the flow of supplies through the healthcare supply chain network while considering capacity constraints and demand fluctuations. Time Complexity is O(V * E^2) and space complexity is O(V). Here is my code for [Ford-Fulkerson algorithm implementation](https://github.com/saisudheerp/Aps_portfolio/blob/main/Codes/ford_fulkerson.cpp)[7].

![Healthcare Supply Chain Optimization](images/Healthcare%20Supply%20Chain%20Optimization.png)
*This image represents the working of Healthcare Supply Chain Optimization[12]*

## 5. Challenges

- **Efficiency**: Ensuring the algorithms run efficiently given the potentially large dataset of patient records and symptoms. With the ever-increasing amount of healthcare data, it is crucial to maintain performance without compromising on speed and accuracy.
- **Scalability**: Designing solutions that can scale with the growing number of users and data. As the user base and data volume grow, the algorithms must be able to handle increased load without degradation in performance.
- **Accuracy**: Maintaining high accuracy in functionalities such as symptom checking and prescription management. Accurate diagnosis and treatment recommendations are vital for patient safety and care quality.
- **Integration**: Integrating these algorithms into the existing app infrastructure. This includes ensuring compatibility with various platforms, maintaining data security, and providing a smooth user experience.


## 6. To-Do

To further enhance this portfolio, the following tasks are planned:

- **Implement Additional Functionalities**: Develop more functionalities using advanced algorithms to cover a wider range of healthcare needs.
- **Optimize Existing Algorithms**: Continuously improve the performance of the implemented algorithms for faster and more efficient operations.
- **Extend Use Cases**: Expand the use cases to include more aspects of healthcare management, such as telemedicine, remote monitoring, and patient engagement.
- **Develop User Interface**: To create a user-friendly interface to demonstrate these functionalities in a live healthcare app prototype, making it easier for users to interact with the app and benefit from its features.


## 7. References

[1] GeeksforGeeks, "Trie (Insert and Search)," [https://www.geeksforgeeks.org/trie-insert-and-search/](https://www.geeksforgeeks.org/trie-insert-and-search/).

[2] GeeksforGeeks, "Introduction of min-heap data structure," [https://www.geeksforgeeks.org/introduction-to-min-heap-data-structure/](https://www.geeksforgeeks.org/introduction-to-min-heap-data-structure/).

[3] GeeksforGeeks, "Hashing Set 1 (Introduction)," [https://www.geeksforgeeks.org/hashing-set-1-introduction/](https://www.geeksforgeeks.org/hashing-set-1-introduction/).

[4] GeeksforGeeks, "Sliding Window Maximum (Maximum of all subarrays of size k)," [https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/](https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/).

[5] GeeksforGeeks, "A* Search Algorithm," [https://www.geeksforgeeks.org/a-search-algorithm/](https://www.geeksforgeeks.org/a-search-algorithm/).

[6] GeeksforGeeks, "B+ Tree Introduction and Insertion," [https://www.geeksforgeeks.org/b-tree-set-1-introduction-2/](https://www.geeksforgeeks.org/b-tree-set-1-introduction-2/).

[7] GeeksforGeeks, "Ford-Fulkerson Algorithm for Maximum Flow Problem," [https://www.geeksforgeeks.org/ford-fulkerson-algorithm-for-maximum-flow-problem/](https://www.geeksforgeeks.org/ford-fulkerson-algorithm-for-maximum-flow-problem/).

[8] [https://code.daypilot.org/44666/html5-doctor-appointment-scheduling-javascript-php](https://code.daypilot.org/44666/html5-doctor-appointment-scheduling-javascript-php)

[9] [https://www.vyvgart.com/gmg/getting-started/symptom-tracking](https://www.vyvgart.com/gmg/getting-started/symptom-tracking)

[10] [https://en.wikipedia.org/wiki/Electronic_health_record](https://en.wikipedia.org/wiki/Electronic_health_record)

[11] [https://dribbble.com/shots/15867006-Medicotary-medical-inventory-management-system-dashboard](https://dribbble.com/shots/15867006-Medicotary-medical-inventory-management-system-dashboard)

[12] Mittal A and Mantri A. A literature survey on healthcare supply chain management [version 2; peer review: 1 approved with reservations]. F1000Research 2023, 12:759 (https://doi.org/10.12688/f1000research.131440.2)

[13] [practo.com](https://www.practo.com/)

[14] [medplus.com](https://www.medplusmart.com/)

[15] [https://www.altexsoft.com/blog/pharmacy-management-system/](https://www.altexsoft.com/blog/pharmacy-management-system/)

[16] [https://www.unotech.io/clinic-queue-management-system-qms](https://www.unotech.io/clinic-queue-management-system-qms)

[17] [https://www.quora.com/What-is-a-practo](https://www.quora.com/What-is-a-practo)
