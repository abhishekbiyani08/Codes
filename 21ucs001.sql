CREATE DATABASE bank;
USE bank;

CREATE TABLE acc_details (
	holder_name VARCHAR(10),
	holder_id INT NOT NULL PRIMARY KEY,
    holder_city VARCHAR(20),
    loan_amount INT
);

INSERT INTO acc_details VALUES ("Abhishek", 001, "Ichalkaranji", 15000);
INSERT INTO acc_details VALUES ("Pratik", 002, "Ichalkaranji", 20000);
INSERT INTO acc_details VALUES ("Aayush", 003, "Kolhapur", 10000);
INSERT INTO acc_details VALUES ("Aryan", 004, "Kabnoor", 5000);
INSERT INTO acc_details VALUES ("Yash", 005, "Miraj", 15000);
INSERT INTO acc_details VALUES ("Raj", 006, "Sangli", 30000);
INSERT INTO acc_details VALUES ("Tilak", 007, "Ichalkaranji", 25000);
INSERT INTO acc_details VALUES ("Shubham", 008, "Miraj", 1000);
INSERT INTO acc_details VALUES ("Harsh", 009, "Hupari", 50000);

SELECT SUM(loan_amount) FROM acc_details;

SELECT AVG(loan_amount) FROM acc_details WHERE (loan_amount > 10000);

SELECT * FROM acc_details ORDER BY loan_amount;

SELECT COUNT(holder_name), holder_city FROM acc_details GROUP BY holder_city;

UPDATE acc_details SET loan_amount = 0 WHERE holder_id = 001;

CREATE INDEX id1 ON acc_details(holder_name, holder_id, holder_city, loan_amount);

SELECT * FROM id1;

SELECT * FROM acc_details;