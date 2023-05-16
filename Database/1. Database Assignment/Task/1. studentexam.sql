create database studentexam;
use studentexam;

create table student
(Rollno int,
NAME varchar(20),
Branch varchar(25),
primary key (Rollno)
);


create table exame
(Rollno int,
 S_code varchar(20),
 Marks int,
 P_code varchar(20),
 foreign key (Rollno) references student(Rollno)
);

insert into student(Rollno,NAME,Branch)
values (1,'Jay','Computer Science'),
(2,'Suhani','Electronic and com'),
(3,'Kriti','Electronic and com');

insert into exame(Rollno,S_code,Marks,P_code)
values (1,'CS11',50,'CS'),
(1,'CS12',60,'CS'),
(2,'EC101',66,'EC'),
(2,'EC102',70,'EC'),
(3,'EC101',45,'EC'),
(3,'EC102',50,'EC')