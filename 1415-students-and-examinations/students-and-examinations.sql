# Write your MySQL query statement below
-- select student_id, student_name, subject_name, attended_exams
select st.student_id, st.student_name, sb.subject_name, count(ex.subject_name) as attended_exams 
from Students st
Cross Join Subjects sb
left join Examinations ex
on ex.student_id = st.student_id and sb.subject_name = ex.subject_name
Group By 
st.student_id,st.student_name, sb.subject_name
Order By 
st.student_id , sb.subject_name


