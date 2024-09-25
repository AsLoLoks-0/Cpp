// void advanceIteratorBy(set<int>::iterator itr, int amount) {
//     if(amount > 0){
//         for(int i = 0; i < amount; i++){
//             itr++;
//         }
//         return;
//     }
//     for(int i = 0; i < amount; i++){
//         itr--;
//     }
// }

// void advanceIteratorBy(set<int>::iterator itr, int amount, set<int>* container) {
//     if(amount > 0){
//         for(int i = 0; i < amount; i++){
//             itr++;
//             if(itr == (*container).end())
//                 cout << "Iterator went out of bounds, end crossed" << endl;
//         }
//         return;
//     }
//     for(int i = 0; i < amount; i++){
//         itr--;
//         if(itr == (*container).begin())
//             cout << "Iterator went out of bounds, begin crossed" << endl;
//     }
// }

// void setIteratorTo(set<int>::iterator itr, int position) {
    
// }

// void setIteratorTo(set<int>::iterator itr, int position, bool closerToIteratorEnd) {
    
// }
// int getIteratorValueAtPosition(int position, set<int>* container) {
//     set<int>::iterator itr;
//     itr = (*container).begin();
//     for (size_t i = 0; i < position; i++)
//     {
//         itr++;
//     }
//     return *itr;
// }