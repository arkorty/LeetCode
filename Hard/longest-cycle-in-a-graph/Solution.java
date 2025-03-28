class Solution {
    public int longestCycle(int[] edges) {
        int[] visited = new int[edges.length];
        int max = -1;

        for (int i = 0; i < edges.length; ++i) {
            if (visited[i] > 0) {
                continue;
            }

            int current = i;
            while (current != -1 && visited[current] == 0) {
                visited[current] = i + 1;
                current = edges[current];
            }

            if (current != -1 && visited[current] == i + 1) {
                int cycle = 1;
                int temp = edges[current];
                while (temp != current) {
                    ++cycle;
                    temp = edges[temp];
                }
                max = max > cycle ? max : cycle;
            }
        }
        return max;
    }
}
