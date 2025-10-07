First Question With Optimal Approch and Solution.

Sai Problume

Problem Discreption :- Sai was working on a mini project where he needed to handle various tasks related to bank account. this include 6 operations viz. read , credit, debit, abort, rollback, and commit. The operation sementic are explained below.

Read - Read and print the current balance.
Credit - Credit the X amount to init_Balance,
Debit - Debit the X amount to init_balcnce.
AbortX= The Xth transation from the begrnning is aborted , *Note you cant abort the transation omce they are commited.
RollbackX - Rollback the Xth commit in this case the account balance will be automatically updated to what it was right after the Xth commit.
Commit - Save the changes permentely and cannot be undone using AbortX command.


The credit, debit, abort, rollback operation will always followed by a positive intiger, where as read and commit had no such operands.


Constraints
1<=init_Balance
1<=No of Operations (N)<=50


Input
The first line contain an integer denoting the initial balance,'
second line contain an integer of total number of operation to be performed.
Third line contain a loop for operations 

Output
Output the current balance each time read statement is encountered.

