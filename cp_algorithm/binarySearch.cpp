#include<bits/stdc++.h>
using namespace std;
auto binarySearch = [](vector<int>& data, int target)->int
{
    int left = 0;
    int right = data.size() - 1;
    while(left <= right){
        //int mid = left + ((right - left) >> 1);
        int mid = (left&1 && right&1)?((left >> 1) + (right >> 1) + 1):((left >> 1) + (right >> 1));
        if(target == data[mid]){
            return mid;
        }else if(target < data[mid]){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return -1;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int size_;
    cin >> size_;
    vector<int> data(size_);
    for(auto &input : data){
        cin >> input;
    }
    sort(data.begin(), data.end());
    int target;
    cin >> target;
    cout << binarySearch(data, target) << endl;
    return 0;
}
