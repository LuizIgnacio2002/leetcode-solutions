class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<string>> anagramas;
        for(const auto& str:strs)
        {
            std::string key=str;
            std::sort(key.begin(), key.end());
            anagramas[key].push_back(str);
        }
        std::vector<std::vector<std::string>> resultado;
        for(const auto& [key, grupo] : anagramas) {
        resultado.push_back(grupo);
        }
    
        return resultado;
    }
};
