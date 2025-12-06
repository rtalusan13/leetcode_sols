class Solution {
  int numberOfEmployeesWhoMetTarget(List<int> hours, int target) {
    int val = 0;
    for(int i = 0; i < hours.length; i++){
        if(hours[i] >= target){
            val++;
        }
    }
    return val;
  }
}
