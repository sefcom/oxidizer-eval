undefined *
_ZN3bat6output12OutputHandle9write_fmt17hec1e6f03d02f41b4E
          (undefined *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  
  if (*param_2 == 1) {
    cVar1 = (**(code **)(*(long *)(param_2 + 4) + 0x28))(*(undefined8 *)(param_2 + 2),param_3);
    if (cVar1 != '\0') {
      *param_1 = 1;
      return param_1;
    }
  }
  else {
    lVar2 = (**(code **)(*(long *)(param_2 + 4) + 0x48))(*(undefined8 *)(param_2 + 2),param_3);
    if (lVar2 != 0) {
      *param_1 = 0;
      *(long *)(param_1 + 8) = lVar2;
      return param_1;
    }
  }
  *param_1 = 0xd;
  return param_1;
}