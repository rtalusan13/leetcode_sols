
- Since we are inclusive of both the upper and lower bounds, we need to utilize the floor function to remove the trailing decimal (0.5) from any integer we are dividing by 2. To get an inclusive range, we increment high by 1, while low can remain as is. We immediately return the difference of (high+1)/2 and low/2.
