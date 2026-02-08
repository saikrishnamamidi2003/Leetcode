# Write your MySQL query statement below
select product_id, coalesce(
    (
    select new_price
    from Products p2
    where
        p2.product_id = p.product_id and
        change_date <= '2019-08-16'
    order By change_date desc
    Limit 1
    
    ),10
)as price
from Products p
group by p.product_id