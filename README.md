this program an answer to a question(with my own perspective)

Write a program that gets two company information from the user, simulate a merger between these two companies by adding them up into a single company and print out its information. The user will first give the information regarding the two companies in the following format: name as a string, number of employees as an integer, total revenue as an integer, and size as a string.

  Then both the companies should be added up into a single company by

      Name of the summation should be the name of the first company + “ and “ + name of the second company
      Adding the number of employees together
      Adding the total revenues together
      Type the summation should be “SE” if the number of employees is smaller than 40; “ME”, if it is less than 100, “Company” if more than 100.
      Finally, the program will print out the name of the company followed by its total revenue and type by casting the order into a string.

  Requirements:

      You should define and use a class for the company objects.
      All related information should be kept as private inside the class.
      Class should take the related input in its constructor function.
      You MUST define an overloaded summation operation as explained above and use the ‘+’ operator to add the two company objects together.
      You MUST define an overloaded casting operator into an std::string and use this operator to get the printable version of the object.
