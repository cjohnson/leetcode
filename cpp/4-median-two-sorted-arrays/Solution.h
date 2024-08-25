#include <algorithm>
#include <vector>

#define MERGE

class Solution {
public:
  double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2);
};

#ifdef MERGE
inline double Solution::findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2) {
  const auto merged_size = nums1.size() + nums2.size();
  std::vector<int> merged(merged_size);

  std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());

  if (merged_size % 2 == 1) {
    return merged[merged_size / 2];
  }

  const int left_middle = merged[(merged_size / 2) - 1];
  const int right_middle = merged[merged_size / 2];
  return (double)(left_middle + right_middle) / 2;
}
#endif // MERGE
