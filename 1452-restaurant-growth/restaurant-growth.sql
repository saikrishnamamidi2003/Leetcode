# Write your MySQL query statement below
select visited_on,
(
   SELECT sum(amount)
   FROM Customer
   where visited_on BETWEEN DATE_SUB(c.visited_on, INTERVAL 6 DAY) AND c.visited_on
) as amount ,
ROUND (
    (select (SUM(amount)/7)
    FROM Customer
    where visited_on BETWEEN DATE_SUB(c.visited_on, INTERVAL 6 DAY) AND c.visited_on
),2
) as average_amount
from Customer c
where c.visited_on >= (
   select DATE_ADD(MIN(visited_on), INTERVAL 6 DAY)
   from Customer
)
GROUP BY visited_on

-- Inside subquery:

-- ❌ don’t use outer alias for table columns
-- ✅ use plain column names

-- Outer query reference:

-- ✅ only use alias for comparison