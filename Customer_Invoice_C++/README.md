In order to send our customers - in this case called A, B and C - information on things we sell, we want to generate files for them.  
/// Each customer should gets it's own file which differ, depending on the customers requirements. Because of this, our full set of things we sell (4 items in this case) 
/// needs to processed according to the customers wishes, then turned into a file. It should be implemented with future extension in mind, 
/// e.g. by adding  a new customer D with minimal effort required.

public class CustomerA
    {
        // TODO: implement behaviour
        // expected: file for customer A contains all items and all information
    }

    public class CustomerB
    {
        // TODO: implement behaviour
        // expected: file for customer B only contains items cheaper than 50€ and all information
    }

    public class CustomerC
    {
        // TODO: implement behaviour
        // expected: file for customer C only contains all items but only contains their name and price but not their id.
        // Additionaly, customer C wants a column listing the price including VAT (gross price)
    }
