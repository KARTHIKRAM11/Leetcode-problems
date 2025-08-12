/* Write your PL/SQL query statement below */
select player_id , MIN(TO_CHAR(event_date , 'YYYY-MM-DD')) as first_login from Activity group by player_id;