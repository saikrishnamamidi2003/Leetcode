# Write your MySQL query statement below
select 'Low Salary' as category,
count(CASE WHEN income < 20000 THEN 1 END) AS accounts_count
from Accounts

UNION ALL

select 'Average Salary' as category,
COUNT(CASE WHEN income BETWEEN 20000 AND 50000 THEN 1 END) AS accounts_count
from Accounts

UNION ALL

select 'High Salary' as category,
COUNT(CASE WHEN income > 50000 THEN 1 END) AS accounts_count
from Accounts

