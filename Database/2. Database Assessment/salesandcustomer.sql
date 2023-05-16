create database salesandcustomer;
use salesandcustomer;

create table sales(
	salesman_id int,
    sname varchar(20),
    city varchar(20),
    commission float(5,2),
    primary key (salesman_id)
);

create table customer(
	customer_id int,
    cust_name varchar(20),
    city varchar(20),
    grade int,
    salesman_id int,
    primary key (customer_id),
    foreign key (salesman_id) references sales (salesman_id)
);

insert into sales (salesman_id,sname,city,commission)
values (5001,'James Hoog','New York','.15'),
       (5002,'Nail Knite','Paris','.13'),
       (5005,'Pit Alex','London','.11'), 
       (5006,'Mc Lyon','Paris','.14'), 
       (5007,'Paul Adam','Rome','.13'),
       (5003,'Lauson Hen','San Jose','.12');
       
insert into customer (customer_id,cust_name,city,grade,salesman_id)
values (3002,'Nick Rimando','New York','100','5001'),
       (3007,'Brad Davis','New York','200','5001'),
	   (3005,'Graham Zusi','California','200','5002'),
	   (3008,'Julian Green','London','300','5002'), 
       (3004,'Fabian Johnson','Paris','300','5006'), 
       (3009,'Geoff Cameron','Berlin','100','5003'),
       (3003,'Jozy Altidor','Moscow','200','5007');
       
insert into customer (customer_id,cust_name,city,salesman_id)
values (3001,'Brad Guzan','London','5005');
 
/*
a SQL query to find the salesperson(s) and the
customer(s) represented here. Return the Customer Name, City, Salesman,
commission
*/

SELECT a.cust_name AS "Customer Name", 
a.city, b.sname AS "Salesman", b.commission 
FROM customer a 
INNER JOIN sales b 
ON a.salesman_id=b.salesman_id;
