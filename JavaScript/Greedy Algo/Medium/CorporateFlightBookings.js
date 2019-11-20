/**
 There are n flights, and they are labeled from 1 to n.

We have a list of flight bookings.  The i-th booking bookings[i] = [i, j, k] means that we booked k seats from flights labeled i to j inclusive.

Return an array answer of length n, representing the number of seats booked on each flight in order of their label.

 

Example 1:

Input: bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
Output: [10,55,45,25,25]
 */
var corpFlightBookings = function(bookings, n) {
  let result = Array(n).fill(0);
  for(let i = 0; i < bookings.length; i++){
      let start = bookings[i][0];
      let end = bookings[i][1];
      for(let j = start; j <= end; j++){
          result[j - 1] += bookings[i][2];
      }
  }
  return result;
};