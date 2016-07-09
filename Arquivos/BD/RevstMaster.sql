create database RevstMaster;

create table calculo
(id_calculo serial primary key, 
nome varchar(50), 
tipo varchar(30), 
altura numeric(10,3), 
largura numeric(10,3), 
comprimento numeric(10,3),
valor numeric(10,3), id_relatorio );

create table relatório
(id_relatorio serial primary key, 
nome varchar (30),  

