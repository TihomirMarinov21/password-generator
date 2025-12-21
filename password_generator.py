import random # for the choosing a characters randomly
import string # main purpose is the ASCII methodes

# declarations
users_choice = int(input("Select \n1 for characters only \n2 for a combination of characters and digits\n3 for a complex passwords including everything: "))
password_components= string.ascii_letters if  users_choice == 1 else \
string.ascii_letters + string.digits if users_choice == 2 else \
string.ascii_letters + string.digits + string.punctuation 

# function section

def get_length():
   while True:
      try:
         length = int(input("\nEnter the desired password length: ")) 
         if length < 1:
            print("Please enter a number greater than or equal to 1.")
            continue
         return length
      except ValueError:
         print("Invalid input!!! \nPlease enter a valid number")


def get_amount_of_passwords():
   while True:
      try:
         amount_of_passwords = int(input("\nEnter the desired amount of passwords: "))
         if amount_of_passwords < 1:
            print("Please enter a number greater than or equal to 1 for the amount of passwords.")
            continue
         return amount_of_passwords
      except ValueError:
         print("Invalid input!!! \nPlease enter a number greater than or equal to 1")


def create_password(length: int) -> str: 
   password ="".join(random.choice(password_components) for _ in range(length))
   return password


#main
def main():
   amount_of_passwords = get_amount_of_passwords() # get user input ensuring the input is valid
   length = get_length()

   for i in range(amount_of_passwords):
        password = create_password(length)
        print(f"password #{i + 1} => {password}")    

if __name__ == "__main__":
   main()


