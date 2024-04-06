public class Article {
    //declaration
    private int reference;
    private String Designation;
    private int prixHT;
    private static int Tauxtva;
    //getter
    public int getReference() {
        return reference;
    }
    public String getDesignation() {
        return Designation;
    }
    public int getPrixHT() {
        return prixHT;
    }
    public static int getTauxtva() {
        return Tauxtva;
    }
    //setter
    public void setReference(int reference){
        this.reference = reference;
    }
    public void setDesignation(String designation){
        Designation = designation;
    }
    public void setPrixHT(int prixHT){
        this.prixHT = prixHT;
    }
    //constructeur par default
    public Article(){}
    //constructeur initialisant
    public Article(int ref, String des,int prix){
        this.reference=ref;
        this.Designation=des;
        this.prixHT=prix;
    }
    //methode calculeprixTTC
    public float CalculePrixTTC(){ return (prixHT*Tauxtva/100);}
    //affiche article
    public void AfficheArticle(){
        System.out.println("Reference:"+getReference());
        System.out.println("Designation:"+getDesignation());
        System.out.println("PrixHT:"+getPrixHT());
        System.out.println("TTC:"+CalculePrixTTC());
    }
    public static void main(String[] args) {
        
    }
}