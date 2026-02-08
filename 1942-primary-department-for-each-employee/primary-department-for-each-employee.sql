# Write your MySQL query statement below
select employee_id, department_id
from Employee 
where (
    Primary_flag = 'Y'
)
union
select employee_id, department_id
from Employee
group by employee_id
having count(employee_id) = 1