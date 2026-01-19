# Write your MySQL query statement below
-- LEFT JOIN (or LEFT OUTER JOIN)

-- Returns all rows from the left table , and matching rows from the right table .

-- If no match → NULL is shown for right table.

select empun.unique_id, emp.name
from Employees emp
Left join EmployeeUNI empUn
on emp.id = empUn.id