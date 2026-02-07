# Write your MySQL query statement below
# the aim is to find the active users on that day who are distinct
 select activity_date  as day,count(distinct user_id) as active_users
from Activity
where(
    DATEDIFF('2019-07-27', activity_date) between 0 and 29 
)
 group by activity_date