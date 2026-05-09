class Solution {
    fun isPalindrome(s: String): Boolean {
        val word = s.trim().filter{ it.isLetterOrDigit() }.lowercase() //WasitacaroracatIsaw
        var left = 0
        var right = word.length - 1

        while(left < right){
            if(word[left] != word[right]) return false
            left++
            right-- 
        }

        return true
    }
}


