'use strict';

const fs = require('fs');

const file = fs.readFileSync('./data_for_graph.txt','utf8');
const temp = file.split('\n');
temp.pop();
for (let i = 0;i < temp.length;i++){
  temp[i] = temp[i].split(',');
}

console.dir(temp);
