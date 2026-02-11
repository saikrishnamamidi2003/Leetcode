# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.salary as Salary
from Employee e join Department d
on e.departmentId = d.id
where(
   (select count(distinct salary)
    from Employee e2
    where(
       e2.salary > e.salary and e.departmentId = e2.departmentId
    )) < 3
)