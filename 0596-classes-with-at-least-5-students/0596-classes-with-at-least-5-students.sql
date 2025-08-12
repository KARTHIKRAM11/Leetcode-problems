/* Write your PL/SQL query statement below */
SELECT class FROM Courses group by class having COUNT(DISTINCT(student)) >=5;