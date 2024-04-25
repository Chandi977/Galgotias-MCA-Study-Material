package Cos;
class Man{
    void run(){
        System.out.println("Man Runninng");
    }
}
class Boy extends Man{
    @Override
    void run(){
        System.err.println("Boy Running");    
    }
}
class Q11MethodOverriding{
    public static void main(String[] args) {
        Man man = new Man();
        man.run();

        Boy boy = new Boy();
        boy.run();
    }
}

