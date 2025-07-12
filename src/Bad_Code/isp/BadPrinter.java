package Bad_Code.isp;

public class BadPrinter implements BadMachine {
    public void print() 
    {
        System.out.println("Printing...");
    }
    public void scan() 
    {
        // not supported
    }
    public void fax() 
    {
        // not supported
    }
}
