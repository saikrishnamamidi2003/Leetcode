# Write your MySQL query statement below
select emp.employee_id, emp.name,(count(e.employee_id)) as reports_count,Round(avg(e.age)) as  average_age
from Employees e
join Employees emp
on e.reports_to = emp.employee_id
group by emp.employee_id
order by emp.employee_id asc