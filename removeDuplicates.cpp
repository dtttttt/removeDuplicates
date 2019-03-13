int removeDuplicates(std::vector<int>& nums) {
	std::vector<int >::iterator it = unique(nums.begin(), nums.end());
	nums.erase(it, nums.end());
	return nums.size();
};