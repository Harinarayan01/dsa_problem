/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
    var hari=[0,1];
    for(var i=0;i<=n;i++){
        hari.push(hari[i]+hari[i+1]);
    }

    return hari[n];
    
};