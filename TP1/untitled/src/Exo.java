import java.util.ArrayList;

public class Exo {


    public static void main(String[] args){
        ArrayList<Node> nodes = new ArrayList<>();
        Node node1 = new Node(1,new int[]{7,6,3}, new int[]{2,3,4});
        Node node2 = new Node(2,new int[]{2}, new int[]{5});
        Node node3 = new Node(3,new int[]{5,4},new int[]{5,6});
        Node node4 = new Node(4,new int[]{7,3},new int[]{6,7});
        Node node5 = new Node(5,new int[]{9},new int[]{8});
        Node node6 = new Node(6,new int[]{2,5},new int[]{8,9});
        Node node7 = new Node(7,new int[]{2,7},new int[]{9,10});
        Node node8 = new Node(8,new int[]{3},new int[]{11});
        Node node9 = new Node(9,new int[]{6},new int[]{11});
        Node node10 = new Node(10,new int[]{4},new int[]{11});
        Node node11 = new Node(11,new int[]{},new int[]{});
        nodes.add(node1);
        nodes.add(node2);
        nodes.add(node3);
        nodes.add(node4);
        nodes.add(node5);
        nodes.add(node6);
        nodes.add(node7);
        nodes.add(node8);
        nodes.add(node9);
        nodes.add(node10);
        nodes.add(node11);

        for (int i = 1 ; i< nodes.size() ; i++){

            int n = nodes.get(i).n;
            // find parent nodes
            ArrayList<Integer> lsParents = new ArrayList<>() ;
            ArrayList<Integer> lsIndex = new ArrayList<>();
            for (int j = 0 ; j< nodes.size() ; j++){
                for (int k = 0 ; k < nodes.get(j).children.length; k++){
                    if (nodes.get(j).children[k] == n){
                        lsParents.add(j);
                        lsIndex.add(k);
                    }
                }
            }

            //cal minimum distance of this node.
            int minDistance =  nodes.get(lsParents.get(0)).minDistance+nodes.get( lsParents.get(0)).distances[lsIndex.get(0)];
            int minParent =  nodes.get( lsParents.get(0)).n;
            int quantity = nodes.get( lsParents.get(0)).quantity+1;
            for (int j = 1; j< lsParents.size(); j++){
                if ( minDistance >    nodes.get( lsParents.get(j)).minDistance+nodes.get( lsParents.get(j)).distances[lsIndex.get(j)]){
                    minDistance =    nodes.get( lsParents.get(j)).minDistance+nodes.get( lsParents.get(j)).distances[lsIndex.get(j)];
                    minParent =  nodes.get( lsParents.get(j)).n;
                    quantity = nodes.get( lsParents.get(j)).quantity+1;
                }
            }
            nodes.get(i).minDistance = minDistance;
            nodes.get(i).minParent = minParent;
            nodes.get(i).quantity = quantity;



        }



        for (int i = 0 ; i< nodes.size(); i++){
            System.out.println("node: "+nodes.get(i).n + " miniDistance: "+ nodes.get(i).minDistance+ " Quantity: "+ nodes.get(i).quantity + " MiniParent: "+ nodes.get(i).minParent);

        }

      //  print min-track
        int index = nodes.size()-1;
        String track ="";
        do {

           track +=  nodes.get(index).n + " ";
           index = nodes.get(index).minParent-1;

        }while(index != -2);

        System.out.println("minimum track :"+ (new StringBuffer(track).reverse()));

    }
}
