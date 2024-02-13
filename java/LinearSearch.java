public class LinearSearch {

    public static int linearSearch(int[] arr, int valueToFind) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == valueToFind) {
                return i; 
            }
        }
        return -1; 
    }

    public static void main(String[] args) {
        int[] data = {3, 45, 1, 2, 9, 7}; 
        int valueToFind = 9; 

        int resultIndex = linearSearch(data, valueToFind);

        if (resultIndex == -1) {
            System.out.println("Elemento não encontrado.");
        } else {
            System.out.println("Elemento encontrado - índice: " + resultIndex);
        }
    }
}
