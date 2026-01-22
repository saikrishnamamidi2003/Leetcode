# Write your MySQL query statement below
select e.name
from Employee e
join Employee m
on e.id = m.managerId
Group By e.id
having count(e.id) >= 5