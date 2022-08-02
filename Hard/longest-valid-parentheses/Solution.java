class Solution {
    public int longestValidParentheses(String str) {
        Stack<Integer> stack = new Stack<>();
        stack.push(-1);

        int max = 0;
        for (int cur = 0; cur < str.length(); cur++) {
            if (str.charAt(cur) == '(') {
                stack.push(cur);
            } else {
                stack.pop();
                if (stack.empty()) {
                    stack.push(cur);
                } else {
                    max = Math.max(max, cur - stack.peek());
                }
            }
        }
        return max;
    }
}
