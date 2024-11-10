This project is a simple Aadhar Management System developed in C, designed to enroll new users and update existing user information such as name, date of birth, mobile number, gender, and address. The application stores each user’s data in a text file named after their Aadhar number.

Features

- Enroll New Users: Allows new users to enroll by entering their Aadhar details.
- Update Existing Users: Enables users to update their existing Aadhar details, including name, date of birth, mobile number, gender, and address.
- View User Details: Displays the stored details of an existing user based on their Aadhar number.

Getting Started
1. Clone the Repository:

  git clone https://github.com/Nikhil2906R/Aadhar-Management-System.git

  cd aadhar-management-system

2. Compile the Code: Ensure you have a C compiler installed (such as GCC). Then, compile the code:

  gcc aadhar_management.c -o aadhar_management

3. Run the Application:

  ./aadhar_management

Usage

Upon running the application, you will be prompted with two options:

1. Enroll a New User:

- Select option 1 to enroll a new user.
- Enter the required details such as Aadhar number, date of birth, first and last name, mobile number, gender, village, - mandal, and district.
- The application will save the user's information in a text file named after the Aadhar number (e.g., 123456789012.txt).

2. Update Existing User Details:

- Select option 2 to update details for an existing user.
- Enter the 12-digit Aadhar number and the date of birth for verification.
- Choose from the options to update the desired information (name, date of birth, mobile number, gender, address).
- The updated information is saved back to the file.
