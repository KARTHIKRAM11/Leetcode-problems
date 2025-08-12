/* Write your PL/SQL query statement below */
select name from SalesPerson where sales_id not in(select sales_id from Orders o JOIN company c on o.com_id = c.com_id where c.name = 'RED');