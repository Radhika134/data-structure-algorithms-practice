class Solution {
    public String reverseWords(String s) {
        String[] words = s.split("\\s+");

        StringBuilder ans = new StringBuilder();
        for (String word : words) {

            StringBuilder sb = new StringBuilder(word).reverse();
            ans.append(sb).append(" ");
           
        }
        return ans.toString().trim();

    }
}