var countBits = function(n) {
  let binaryValue = n.toString(2);
  let arrayValue = binaryValue.split('');
  let retorno = 0;
  for(let i=0; i<arrayValue.length;i++) {
    let value = arrayValue[i];
    if(value === '1'){
      retorno++;
    }
  }
  
  return retorno;
};
