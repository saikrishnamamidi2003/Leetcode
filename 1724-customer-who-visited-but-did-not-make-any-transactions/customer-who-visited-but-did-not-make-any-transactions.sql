# Write your MySQL query statement below
-- 🔑 WHY GROUP BY IS NEEDED HERE

-- Because:

-- COUNT(visit_id) is an aggregate function

-- We want the count per customer, not for the whole table

select customer_id, count(visit_id) as count_no_trans
from Visits
where (
    visit_id not in (
       select visit_id from Transactions 
    )
)
 Group By customer_id 
-- select customer_id, count(visit_id) as count_no_trans
-- from Visits
-- where (
    -- visit_id not in (
    --    select visit_id from Transactions
    -- )

-- )
-- Group By customer_id
#we kept customer id as group because in the first colum there is custumer id -> so dhaniki thaggattu pakkana group laa raavalii , dhaniki match kaadaniki.