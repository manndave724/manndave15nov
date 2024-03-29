Que 1. What do you understand By Database ? What is Normalization?  

->A database is an organized collection of structured information,
  or data, typically stored electronically in a computer system.

->Normalization is the process to eliminate data redundancy and 
  enhance data integrity in the table. Normalization also helps 
  to organize the data in the database. It is a multi-step process 
  that sets the data into tabular form and removes the duplicated 
  data from the relational tables.
____________________________________________________________________________________

Que 2. What is Difference between DBMS and RDBMS?
->DBMS stands for Database Management System, 
  RDBMS is the acronym for the Relational Database Management system.  
->In DBMS, the data is stored as a file, whereas in RDBMS, 
  data is stored in the form of tables.

____________________________________________________________________________________

Que 3. What is MF Codd Rule of RDBMS Systems?
-> There are 12 Rules of MF Codd.

->Rule 0: The Foundation Rule
The database must be in relational form. So that the system can handle
the database through its relational capabilities.

->Rule 1: Information Rule
A database contains various information, and this information must be 
stored in each cell of a table in the form of rows and columns.

->Rule 2: Guaranteed Access Rule
Every single or precise data (atomic value) may be accessed logically 
from a relational database using the combination of primary key value, 
table name, and column name.

->Rule 3: Systematic Treatment of Null Values
This rule defines the systematic treatment of Null values in database 
records. The null value has various meanings in the database, like 
missing the data, no value in a cell, inappropriate information, 
unknown data and the primary key should not be null.

->Rule 4: Active/Dynamic Online Catalog based on the relational model
It represents the entire logical structure of the descriptive database 
that must be stored online and is known as a database dictionary. 
It authorizes users to access the database and implement a similar 
query language to access the database.

->Rule 5: Comprehensive Data SubLanguage Rule
The relational database supports various languages, and if we want to 
access the database, the language must be the explicit, linear or 
well-defined syntax, character strings and supports the comprehensive: 
data definition, view definition, data manipulation, integrity constraints, 
and limit transaction management operations. If the database allows access 
to the data without any language, it is considered a violation of the database.

->Rule 6: View Updating Rule
All views table can be theoretically updated and must be practically updated 
by the database systems.

->Rule 7: Relational Level Operation (High-Level Insert, Update and delete) Rule
A database system should follow high-level relational operations such as insert, 
update, and delete in each level or a single row. It also supports union, 
intersection and minus operation in the database system.

->Rule 8: Physical Data Independence Rule
All stored data in a database or an application must be physically independent 
to access the database. Each data should not depend on other data or an application. 
If data is updated or the physical structure of the database is changed, it will not 
show any effect on external applications that are accessing the data from the database.

->Rule 9: Logical Data Independence Rule
It is similar to physical data independence. It means, if any changes occurred 
to the logical level (table structures), it should not affect the user's view (application). 
For example, suppose a table either split into two tables, or two table joins to 
create a single table, these changes should not be impacted on the user view application.

->Rule 10: Integrity Independence Rule
A database must maintain integrity independence when inserting data into table's 
cells using the SQL query language. All entered values should not be changed or 
rely on any external factor or application to maintain integrity. It is also helpful 
in making the database-independent for each front-end application.

Rule 11: Distribution Independence Rule
The distribution independence rule represents a database that must work properly, 
even if it is stored in different locations and used by different end-users. 
Suppose a user accesses the database through an application; in that case, 
they should not be aware that another user uses particular data, and the data 
they always get is only located on one site. The end users can access the database, 
and these access data should be independent for every user to perform the SQL queries.

Rule 12: Non Subversion Rule
The non-submersion rule defines RDBMS as a SQL language to store and manipulate 
the data in the database. If a system has a low-level or separate language other 
than SQL to access the database system, it should not subvert or bypass integrity 
to transform data.

____________________________________________________________________________________

Que 4. What do you understand By Data Redundancy?  
-> Data redundancy occurs when the same piece of data exists in multiple places, 
whereas data inconsistency is when the same data exists in different formats in 
multiple tables. Unfortunately, data redundancy can cause data inconsistency, 
which can provide a company with unreliable and/or meaningless information.

____________________________________________________________________________________
Que 5. What is DDL Interpreter?
-> DDL Interpreter interprets the DDL statements and records the generated statements 
   in the table containing metadata(data about data).
____________________________________________________________________________________
Que 6. What is DML Compiler in SQL?
->  A DML compiler is a component of a database management system that is responsible
    for executing queries and updates that manipulate the data stored in a database.
-> The DML compiler takes SQL statements that include commands such as SELECT, INSERT, 
   UPDATE, and DELETE and converts them into executable code that can be executed by 
   the database engine. The DML compiler optimizes the query execution plan, validates 
   the syntax and semantic correctness of the query, and ensures that the requested 
   data is accessible and available for manipulation.
____________________________________________________________________________________
Que 7. What is SQL Key Constraints writing an Example of SQL Key Constraints.   
-> SQL constraints are used to specify rules for the data in a table. Constraints 
   are used to limit the type of data that can go into a table. This ensures the 
   accuracy and reliability of the data in the table. If there is any violation 
   between the constraint and the data action, the action is aborted.

-> The following constraints are commonly used in SQL:

-NOT NULL - Ensures that a column cannot have a NULL value
-UNIQUE - Ensures that all values in a column are different
-PRIMARY KEY - A combination of a NOT NULL and UNIQUE. Uniquely identifies each row in a table
-FOREIGN KEY - Prevents actions that would destroy links between tables
-CHECK - Ensures that the values in a column satisfies a specific condition
-DEFAULT - Sets a default value for a column if no value is specified
-CREATE INDEX - Used to create and retrieve data from the database very quickly
____________________________________________________________________________________
Que 8. What is save Point? How to create a save Point write a Query?
-> A SAVEPOINT is a point in a transaction when you can roll the transaction back to 
   a certain point without rolling back the entire transaction. 

-> The syntax for a SAVEPOINT command is as shown below. SAVEPOINT SAVEPOINT_NAME; 
   This command serves only in the creation of a SAVEPOINT among all the transactional 
   statements.
____________________________________________________________________________________
Que 9. What is trigger and how to create a Trigger in SQL?
-> A trigger is a stored procedure in database which automatically invokes whenever a 
   special event in the database occurs. For example, a trigger can be invoked when a 
   row is inserted into a specified table or when certain table columns are being updated.

-> create trigger [trigger_name] 
   [before | after]  
   {insert | update | delete}  
   on [table_name]  
   [for each row]  
   [trigger_body] 