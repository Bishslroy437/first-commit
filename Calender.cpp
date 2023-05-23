#include <iostream>
#include <string>

// Function to print the calendar for a given month and year
void printCalendar(int month, int year)
{
  // Array to store the names of the months
  std::string months[12] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};

  // Array to store the number of days in each month
  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // Check for leap year
  if (year % 4 == 0)
    days[1] = 29;

  // Print the calendar for the given month and year
  std::cout << "  " << months[month - 1] << " " << year << std::endl;
  std::cout << "S  M  T  W  T  F  S" << std::endl;

  // Calculate the starting day of the month
  int startDay = (1 + (13 * (month - 1)) / 5 + (year - 1) + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;

  // Print the spaces before the first day of the month
  for (int i = 0; i < startDay; i++)
    std::cout << "   ";

  // Print the days of the month
  for (int i = 1; i <= days[month - 1]; i++)
  {
    std::cout << i << "  ";

    if ((i + startDay) % 7 == 0)
      std::cout << std::endl;
  }

  std::cout << std::endl;
}

int main()
{
  int month = 1, year = 2023;

  // Print the calendar for the current month and year
  printCalendar(month, year);

  char input;

  // Prompt the user to display the next or previous month
  std::cout << "Press N to display the next month, P to display the previous month, or Q to quit: ";
  std::cin >> input;

  while (input != 'Q')
  {
    if (input == 'N')
    {
      month++;
      if (month > 12)
      {
        month = 1;
        year++;
      }
    }
    else if (input == 'P')
    {
      month--;
      if (month < 1)
      {
        month = 12;
        year--;
      }
    }

    // Print the calendar for the current month and year
    printCalendar(month, year);

    // Prompt the user to display the next or previous month
    std::cout << "Press N to display the next month, P to display the previous month, or Q to quit: ";
    std::cin >> input;
  }

  return 0;
}
