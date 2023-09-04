class SavingsAccount
{
	static int annual_interest_rate = 4;
	private double savings_balance;

	SavingsAccount(double initial_balance)
	{
		savings_balance = initial_balance;
	}
	
	double monthly_interest(double savings_balance)
	{
		savings_balance += (savings_balance * annual_interest_rate/12)/100;
		return savings_balance;
	}

	static void modify_int_rate(int annual_int_rate)
	{
		annual_interest_rate = annual_int_rate;
	}

	public static void main(String args[])
	{
		SavingsAccount customer1 = new SavingsAccount(2000.00);
		double balance1 = customer1.monthly_interest(2000.00);
		System.out.println(balance1);

		modify_int_rate(5);
		SavingsAccount customer2 = new SavingsAccount(3000.00);
		double balance2 = customer2.monthly_interest(3000.00);
		System.out.println(balance2);
	}
}