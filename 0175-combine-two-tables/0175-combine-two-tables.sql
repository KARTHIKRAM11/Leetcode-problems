/* Write your PL/SQL query statement below */
SELECT p.firstName , p.lastName , a.city , a.state from Person p LEFT JOIN Address a ON p.personId = a.personId