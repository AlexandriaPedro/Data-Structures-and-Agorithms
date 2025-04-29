public class sequentialSearch {
    public static String sequentialSearch(int array[], int target) {
        for (int index = 0; index < array.length; index++) {
            if (array[index] == target) {
                return "O elemento " + target + " foi encontrado no array";
                
            }
        }
        return "O elemento " + target + " não foi encontrado no array";
    }

    public static void main(String[] args) {
        int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        int target = 10;

        System.out.println(sequentialSearch(array, target));
    }
}