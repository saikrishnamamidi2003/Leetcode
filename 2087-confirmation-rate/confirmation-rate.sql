# Write your MySQL query statement below
select su.user_id, Round(ifnull (sum(cn.action = 'confirmed')/count(cn.action), 0), 2) as confirmation_rate
from Signups su
left join 
Confirmations cn
on su.user_id = cn.user_id
Group By su.user_id;

