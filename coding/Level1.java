public class Level1 {
    /**
     * 덧칠하기 - https://school.programmers.co.kr/learn/courses/30/lessons/161989
     *
     * @param sectionLen
     * @param rollerLen
     * @param section
     * @return
     */
    public int courses30Lessons161989(int sectionLen, int rollerLen, int[] section) {
        int answer = 0;
        int pivot = 0;
        for (int part : section) {
            if (part < pivot) {
                continue;
            }

            pivot = part + rollerLen;
            answer++;

            if (pivot >= sectionLen) {
                break;
            }
        }
        return answer;
        /**
         * [Result]
         * 테스트 1 〉	통과 (0.95ms, 79MB)
         * 테스트 2 〉	통과 (0.03ms, 75MB)
         * 테스트 3 〉	통과 (1.32ms, 76.3MB)
         * 테스트 4 〉	통과 (0.03ms, 84.9MB)
         * 테스트 5 〉	통과 (1.30ms, 79.3MB)
         * 테스트 6 〉	통과 (0.03ms, 73.2MB)
         * 테스트 7 〉	통과 (0.04ms, 74.1MB)
         * 테스트 8 〉	통과 (0.60ms, 80.3MB)
         * 테스트 9 〉	통과 (0.02ms, 74.8MB)
         * 테스트 10 〉	통과 (1.73ms, 89.6MB)
         * 테스트 11 〉	통과 (0.04ms, 72.8MB)
         * 테스트 12 〉	통과 (0.88ms, 85.2MB)
         * 테스트 13 〉	통과 (0.02ms, 84.5MB)
         * 테스트 14 〉	통과 (1.71ms, 87.8MB)
         * 테스트 15 〉	통과 (0.02ms, 77.1MB)
         * 테스트 16 〉	통과 (0.41ms, 77.7MB)
         * 테스트 17 〉	통과 (1.21ms, 76.8MB)
         * 테스트 18 〉	통과 (0.03ms, 85.6MB)
         * 테스트 19 〉	통과 (1.51ms, 74.6MB)
         * 테스트 20 〉	통과 (0.42ms, 83.1MB)
         * 테스트 21 〉	통과 (1.19ms, 82MB)
         * 테스트 22 〉	통과 (1.27ms, 67.6MB)
         * 테스트 23 〉	통과 (1.24ms, 81.1MB)
         * 테스트 24 〉	통과 (0.02ms, 76.4MB)
         * 테스트 25 〉	통과 (0.81ms, 79.9MB)
         * 테스트 26 〉	통과 (0.47ms, 87.5MB)
         * 테스트 27 〉	통과 (0.25ms, 83.4MB)
         * 테스트 28 〉	통과 (0.06ms, 76.5MB)
         * 테스트 29 〉	통과 (0.02ms, 73.9MB)
         * 테스트 30 〉	통과 (0.03ms, 76MB)
         * 테스트 31 〉	통과 (0.04ms, 76.3MB)
         * 테스트 32 〉	통과 (0.05ms, 74.6MB)
         * 테스트 33 〉	통과 (0.03ms, 74.9MB)
         * 테스트 34 〉	통과 (0.02ms, 75.2MB)
         * 테스트 35 〉	통과 (1.01ms, 81.5MB)
         * 테스트 36 〉	통과 (0.02ms, 75.3MB)
         * 테스트 37 〉	통과 (0.46ms, 83.1MB)
         * 테스트 38 〉	통과 (0.02ms, 78MB)
         * 테스트 39 〉	통과 (0.49ms, 73.3MB)
         * 테스트 40 〉	통과 (0.03ms, 78.3MB)
         * 테스트 41 〉	통과 (0.03ms, 81.3MB)
         * 테스트 42 〉	통과 (0.03ms, 77.7MB)
         * 테스트 43 〉	통과 (0.03ms, 82.5MB)
         * 테스트 44 〉	통과 (0.02ms, 74MB)
         * 테스트 45 〉	통과 (0.80ms, 83.5MB)
         * 테스트 46 〉	통과 (0.11ms, 74.5MB)
         * 테스트 47 〉	통과 (1.02ms, 76MB)
         * 테스트 48 〉	통과 (0.55ms, 86.1MB)
         * 테스트 49 〉	통과 (0.46ms, 77.5MB)
         * 테스트 50 〉	통과 (0.89ms, 75.2MB)
         */
    }

    /**
     * 바탕화면 정리 - https://school.programmers.co.kr/learn/courses/30/lessons/161990
     *
     * @param wallpaper
     * @return
     */
    public int[] courses30Lessons161990(String[] wallpaper) {
        int[] answer = {};
        /**
         * [sample]
         * wallpaper	                   result
         * [".#...", "..#..", "...#."]	[0, 1, 3, 4]
         */
        int minX = wallpaper[0].length(), minY = wallpaper.length, maxX = 0, maxY = 0;
        for (int y = 0; y < wallpaper.length; y++) {
            String arr = wallpaper[y];
            int pos = arr.indexOf("#");

            if (pos == -1) {
                continue;
            }

            int lastPos = arr.lastIndexOf("#");

            if (pos < minX) {
                minX = pos;
            }
            if (lastPos > maxX) {
                maxX = pos;
            }

            if (y < minY) {
                minY = y;
            }
            if (y > maxY) {
                maxY = y;
            }
        }
        answer = new int[]{minY, minX, maxY, maxX};


        return answer;
        /**
         * [Result]
         * 테스트 1 〉	통과 (0.02ms, 75.9MB)
         * 테스트 2 〉	통과 (0.02ms, 72.9MB)
         * 테스트 3 〉	통과 (0.04ms, 74MB)
         * 테스트 4 〉	통과 (0.04ms, 76MB)
         * 테스트 5 〉	통과 (0.03ms, 83.1MB)
         * 테스트 6 〉	통과 (0.03ms, 71MB)
         * 테스트 7 〉	통과 (0.07ms, 75.6MB)
         * 테스트 8 〉	통과 (0.04ms, 67.6MB)
         * 테스트 9 〉	통과 (0.04ms, 71.9MB)
         * 테스트 10 〉	통과 (0.04ms, 74.3MB)
         * 테스트 11 〉	통과 (0.05ms, 85.3MB)
         * 테스트 12 〉	통과 (0.02ms, 82.7MB)
         * 테스트 13 〉	통과 (0.05ms, 98.1MB)
         * 테스트 14 〉	통과 (0.03ms, 73.9MB)
         * 테스트 15 〉	통과 (0.07ms, 73.3MB)
         * 테스트 16 〉	통과 (0.11ms, 71.7MB)
         * 테스트 17 〉	통과 (0.05ms, 73.5MB)
         * 테스트 18 〉	통과 (0.06ms, 76.6MB)
         * 테스트 19 〉	통과 (0.04ms, 72.5MB)
         * 테스트 20 〉	통과 (0.05ms, 73MB)
         * 테스트 21 〉	통과 (0.02ms, 73MB)
         * 테스트 22 〉	통과 (0.02ms, 74.9MB)
         * 테스트 23 〉	통과 (0.06ms, 76.5MB)
         * 테스트 24 〉	통과 (0.04ms, 74.6MB)
         * 테스트 25 〉	통과 (0.07ms, 85MB)
         * 테스트 26 〉	통과 (0.06ms, 73.2MB)
         * 테스트 27 〉	통과 (0.04ms, 70.2MB)
         * 테스트 28 〉	통과 (0.04ms, 79.5MB)
         * 테스트 29 〉	통과 (0.03ms, 73.4MB)
         * 테스트 30 〉	통과 (0.03ms, 74.8MB)
         * 테스트 31 〉	통과 (0.08ms, 78MB)
         */
    }


}
