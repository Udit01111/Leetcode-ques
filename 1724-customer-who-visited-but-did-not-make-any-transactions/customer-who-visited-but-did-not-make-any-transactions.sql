# Write your MySQL query statement below
/***select customer_id , COUNT(customer_id) AS count_no_trans 
FROM Visits
left join Transactions on Visits.visit_id = Transactions.visit_id  where transaction_id  is NULL
Group by customer_id***/

select v.customer_id,  COUNT(customer_id) AS count_no_trans
from Visits v
left join Transactions t  on
v.visit_id = t.visit_id where t.visit_id is null 
group by customer_id;

