class BankAccount:
    def _init_(self, account_number, account_holder, balance=0):
        self.account_number = account_number
        self.account_holder = account_holder
        self.balance = balance
        self.transactions = []

    def deposit(self, amount):
        self.balance += amount
        self.transactions.append(f"Deposit: +${amount}")

    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
            self.transactions.append(f"Withdrawal: -${amount}")
        else:
            print("Insufficient funds.")

    def display_info(self):
        print(f"Account Number: {self.account_number}")
        print(f"Account Holder: {self.account_holder}")
        print(f"Balance: ${self.balance}")
        print("Transaction History:")
        for transaction in self.transactions:
            print(transaction)
        print("\n")


class amountAccount(BankAccount):
    interest_rate = 0.02

    def add_interest(self):
        interest = self.balance * self.interest_rate
        self.deposit(interest)
        self.transactions.append(f"Interest Added: +${interest}")

        