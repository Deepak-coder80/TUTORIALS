

public class BubbleSort2 {
    
    static void bubbleSort(int arr[]){
        int size = arr.length;

        for(int i=0;i<size-1;i++){
            boolean swapped =false;
            for(int j=0;j<(size-i-1);j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                    swapped=true;
                }
            }
            if(!swapped){
                break;
            }
        }
    }
    public static void main(String[] args) {

        final double startTime = System.currentTimeMillis();

        int[] array = {19,18,17,16,15,10,5,4,3,2,1};

        bubbleSort(array);

        System.out.println("Array after Sorting:");
       
        for (int i = 0; i < array.length; i++) {
            System.out.print("["+array[i]+"]");
        }
        System.out.println();

        final double duration=System.currentTimeMillis() - startTime;
        System.out.println(duration+"ms");
    }
}
