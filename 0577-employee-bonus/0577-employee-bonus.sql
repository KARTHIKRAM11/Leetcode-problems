/* Write your PL/SQL query statement below */
select name , bonus from Employee LEFT JOIN Bonus ON Employee.empId = Bonus.empId where Bonus.bonus<1000 or bonus is null;