CREATE FUNCTION getNthHighestSalary(N IN NUMBER) RETURN NUMBER IS
result NUMBER;
BEGIN
    /* Write your PL/SQL query statement below */
    select salary into result
    from(
        select salary , DENSE_RANK() OVER (order by salary DESC) as rnk
        from Employee
    )
    where rnk = N and ROWNUM = 1;
    RETURN result;
END;