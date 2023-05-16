create database sandc;
use sandc;


create table salseperosn
    (S_No int,
     S_Name varchar(20),
     City varchar(20),
     Comm float(5,2),
     primary key (S_No));
  
create table customer(
     cnm int,
     C_Name varchar(20),
     City varchar(20),
     Rating int,
     S_no int,
     primary key(cnm),
     foreign key(S_no) references salseperosn(S_No));
     
     
insert into salseperosn (S_No,S_Name,City,Comm)
values (1001,'Peel','London','.12'),
       (1002,'Serres','San Jose','.13'),
       (1004,'Motika','London','.11'), 
       (1007,'Rsfkin','Barcelona','.15'), 
       (1003,'Axelrod','New York','.1');
       
       
insert into customer (cnm,C_Name,City,Rating,S_no)
values (201,'Hoffman','London','100','1001'),
       (202,'Giovanne','Roe','200','1003'),
	   (203,'Liu','San Jose','300','1002'),
	   (204,'Grass','Baecelona','100','1002'), 
       (206,'Clemens','London','300','1007'), 
       (207,'Pereira','Roe','100','1004');
    
    
-- a) All orders for more than $1000. 



-- b) Names and cities of all salespeople in London with commission above 0.12 

     select S_Name,City from salseperosn where comm > 0.12 and City = 'London';

-- c) All salespeople either in Barcelona or in London 

     select S_Name,City from salseperosn where City in  ('London','Barcelona');

-- d) All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded). 

     select S_Name,Comm from salseperosn where comm > 0.10 and comm < 0.12;

-- e) All customers excluding those with rating <= 100 unless they are located in Rome.
 
      select C_Name from customer where Rating <= 100 and City = 'Rome';