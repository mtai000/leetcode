/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start

class Solution {
public:
	void splitString(vector<string>& v, string s)
	{
		string tmp = "";

		for (auto& c : s)
		{
			if (c == ' ')
			{
				v.push_back(tmp);
				tmp = "";
			}
			else
			{
				tmp += c;
			}
		}
		if (tmp != "")
			v.push_back(tmp);
	}

	bool wordPattern(string pattern, string s) {
		string arr[26] = { "" };
		int len_p = pattern.size();
		vector<string> v;
		splitString(v, s);
		int len_s = v.size();
		if (len_p != len_s)
			return false;
		map<string, char> m;
		for (int i = 0; i < len_p; i++)
		{
			if (!m.count(v[i]))
				m[v[i]] = pattern[i];
			else
				if (m[v[i]] != pattern[i])
				{
					return false;
				}

			if (arr[pattern[i] - 'a'] == "")
			{
				arr[pattern[i] - 'a'] = v[i];
			}
			else
				if (arr[pattern[i] - 'a'] != v[i])
					return false;
		}


		return true;
	}
};
// @lc code=end

