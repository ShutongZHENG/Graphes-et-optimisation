public class Node {
    int n;
    int[] distances;
    int[] children;

    int quantity ;
    int minDistance ;

    int minParent;

    public Node(int n, int[] distances, int[] children){
        this.n = n;
        this.distances = distances;
        this.children = children;
        this.quantity = 0;
        this.minDistance = 0;
        minParent = -1;
    }

}
