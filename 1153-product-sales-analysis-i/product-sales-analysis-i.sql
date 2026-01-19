# Write your MySQL query statement below
select pro.product_name, sal.year, sal.price
from Sales sal
join Product pro
on pro.product_id = sal.product_id

