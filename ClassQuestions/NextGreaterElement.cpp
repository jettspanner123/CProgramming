#include<iostream>
#include<cstdio>


auto nextGreatestElement(std::vector<int>& nums) -> std::vector<int> {
   std::vector<int> result;

   for (size_t i = 0; i<std::size(nums); i++) {
      auto maxOtherThanThis = nums[i];
      for (size_t j = i+1; j<std::size(nums); j++) if (nums[j] >= nums[i]) maxOtherThanThis = nums[j];
      result.push_back(maxOtherThanThis);
   }
   return result;
}

auto main() -> signed {
   std::string temp;
   std::getline(std::cin, temp);

   const int base_number = std::stoi(temp);

   std::vector<int> vector;
   for (int i = 0; i < base_number; i++) {
      std::getline(std::cin, temp);
      vector.push_back(std::stoi(temp));
   }


   for (const auto i: vector) std::cout << i << " ";


   for (const auto next_greatest_element = nextGreatestElement(vector); const auto i: next_greatest_element) std::cout << i << " ";
   return 0;
}


