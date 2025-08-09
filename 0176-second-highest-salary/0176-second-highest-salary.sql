/* Write your PL/SQL query statement below */
SELECT MAX(salary) as SecondHighestSalary from Employee WHERE salary < (SELECT MAX(salary) from Employee);