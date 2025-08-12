/* Write your PL/SQL query statement below */
select score , DENSE_RANK() OVER (order by score desc) as rank from Scores order by score desc;
