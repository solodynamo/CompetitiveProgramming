// PS: Two strings need to take uber pool . However the second one who is a girl doesn't want 
//to sit with a boy with similar characteristics like her.

//expectation : magic('aghbs', 'ioahs')  => gbio

var pooler2Insights=[];
function magic(pooler1,pooler2) {
var uberPool='';
for(var i = 0;i<pooler2.length;i++){pooler2Insights[pooler2[i]]=1;}
for(var j=0;j<pooler1.length;j++){if(pooler2.includes(pooler1[j])){pooler2Insights[pooler1[j]]=2;}else uberPool+=pooler1[j];}
for(var k=0;k<pooler2.length;k++){if(pooler2Insights[pooler2[k]]!=2){uberPool+=pooler2[k]}}return uberPool;
}console.log(magic('aghbs','ioahs'));