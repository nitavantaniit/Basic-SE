create database employee;
use employee;

create table Employee
   (employee_id int,
    Frist_name varchar(20),
    Last_name varchar(20),
    Salary int,
    Joining_date datetime,
    Department varchar(20),
    primary key(employee_id));
    
create table Incentive(
     Employee_ref_id int,
     Incentive_date date,
     Incentive_amount int,
     foreign key(Employee_ref_id) references Employee(employee_id));
     
insert into employee (Employee_id,Frist_name,Last_name,salary,Joining_date,Department)
values (1,'John','Abraham','1000000','2013-01-01 12.00.00','Banking'),
       (2,'Michael','Clarke','800000','2013-01-01 12.00.00','Insurance'),
       (3,'Roy','Thomas','700000','2013-02-01 12.00.00','Banking'),
       (4,'Tom','Jose','600000','2013-02-01 12.00.00','Insurance'), 
       (5,'Jerry','Pinto','650000','2013-02-01 12.00.00','Insurance'),
	   (6,'Philip','Mathew','750000','2013-01-01 12.00.00','Services'),
       (7,'TestName1','123','650000','2013-01-01 12.00.00','Services'),
       (8,'TestName2','Lname%','600000','2013-01-01 12.00.00','Insurance');
       
create table Employee_deteil
   (employee_id int,
    Frist_name varchar(20),
    Last_name varchar(20),
    Salary int,
    Joining_date datetime,
    Department varchar(20));
       
select * from employee;
select * from Employee_deteil;


insert into Incentive (Employee_ref_id,Incentive_date,Incentive_amount)
values (1,'2013-02-01','5000'),
       (2,'2013-02-01','3000'),
       (3,'2013-02-01','4000'),
       (1,'2013-01-01','4500'),
       (2,'2013-01-01','3500');
       
select * from Incentive;

-- a)  Get First_Name from employee table using Tom name “Employee Name”.
      
    select Frist_name as Emolpyee_name from employee  where Frist_name = 'Tom' 
    
-- b) Get FIRST_NAME, Joining Date, and Salary from employee table.   
         
    select Frist_name,Joining_date,salary from employee
    
-- c) Get all employee details from the employee table order by First_Name Ascending and Salary descending?
    
    Select * from employee order by frist_name asc, Salary desc

-- d) Get employee details from employee table whose first name contains ‘J’.

     select * from employee where Frist_name like 'J%'

-- e) Get department wise maximum salary from employee table order by salary ascending?.

      select Department from employee order by max(salary)

-- f) Select first_name, incentive amount from employee and incentives table for those employees who have incentives and incentive amount greater than 3000 

	  select Frist_name,Incentive_amount from Employee INNER JOIN Incentive on Employee_Id = Employee_ref_id and Incentive_amount > 3000 

-- g) Create After Insert trigger on Employee table which insert records in view table 
      
      
      DELIMITER //  
      Create Trigger after_insert  
      AFTER INSERT ON Employee FOR EACH ROW  
      BEGIN  
	  INSERT INTO Employee_deteil VALUES (new.Employee_id,new.Frist_name,new.Last_name,new.salary,new.Joining_date,new.Department);
      end //
      
      
insert into employee values (10,'Ronny','Jonny','10000','2013-01-01 12.00.00','Banking');

select * from Employee_deteil