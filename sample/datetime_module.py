from datetime import date, datetime, timedelta

def is_palindrom(date_str):
    return date_str == date_str[::-1]

date_str = input() # ex : 05:30
format = "%H:%M"

# convert from string to time
init = datetime.strptime(date_str, format)
now = datetime.strptime(date_str, format)

# convert time to string now.strftime(format)
while not is_palindrom(now.strftime(format)):
    now += timedelta(minutes=1)

diff = int((now - init).seconds / 60)
print(diff)