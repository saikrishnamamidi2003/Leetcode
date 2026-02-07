# Write your MySQL query statement below
#🔴 Reason 1 — COUNT() cannot be used in WHERE  So SQL order is:

-- FROM
-- WHERE
-- GROUP BY
-- COUNT()
-- HAVING
-- SELECT
select class
from Courses
group by class
 having  count(class) >= 5


