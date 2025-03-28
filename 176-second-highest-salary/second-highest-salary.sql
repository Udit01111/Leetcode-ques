# Write your MySQL query statement below
#SELECT salary as  SecondHighestSalary 
#FROM employee 
#ORDER BY salary desc limit 1,1

SELECT (
        SELECT DISTINCT salary 
            FROM Employee 
                ORDER BY salary DESC 
                    LIMIT 1 OFFSET 1
 ) AS SecondHighestSalary;
                   
                         
                            
                                
      

                                        
                  
