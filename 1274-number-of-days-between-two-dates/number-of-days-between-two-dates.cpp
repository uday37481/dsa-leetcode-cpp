class Solution {
public:
    
    // check leap year
    bool isLeap(int year) {
        if (year % 400 == 0) return true;
        if (year % 100 == 0) return false;
        if (year % 4 == 0) return true;
        return false;
    }

    // days in each month
    int daysInMonth(int year, int month) {
        if (month == 2) {
            return isLeap(year) ? 29 : 28;
        }
        if (month == 4 || month == 6 || month == 9 || month == 11)
            return 30;
        return 31;
    }

    // convert a date into total days from 1971-01-01
    int totalDays(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        int days = 0;

        // add days for all previous years
        for (int y = 1971; y < year; y++) {
            if (isLeap(y))
                days += 366;
            else
                days += 365;
        }

        // add days for all previous months of current year
        for (int m = 1; m < month; m++) {
            days += daysInMonth(year, m);
        }

        // add days in current month
        days += day;

        return days;
    }

    int daysBetweenDates(string date1, string date2) {
        int d1 = totalDays(date1);
        int d2 = totalDays(date2);
        return abs(d1 - d2);
    }
};
