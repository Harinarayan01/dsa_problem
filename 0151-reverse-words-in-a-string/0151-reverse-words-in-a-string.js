/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let h="";
    const hari=s.split(" ");
    const stack=[];
    for(let i of hari){
        stack.push(i);

    }
    while(stack.length){
        let hk=stack.pop();
        if(hk){
        h+=" "+hk;

        }
    }



    return h.trim();

};