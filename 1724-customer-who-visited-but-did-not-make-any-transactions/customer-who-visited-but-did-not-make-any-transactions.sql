# Write your MySQL query statement below
select customer_id , COUNT(customer_id) AS count_no_trans 
FROM Visits
left join Transactions on Visits.visit_id = Transactions.visit_id  where transaction_id  is NULL
Group by customer_id
