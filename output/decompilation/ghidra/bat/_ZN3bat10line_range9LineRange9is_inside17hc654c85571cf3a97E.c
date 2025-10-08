undefined8
_ZN3bat10line_range9LineRange9is_inside17hc654c85571cf3a97E
          (int *param_1,ulong param_2,byte param_3,ulong param_4)

{
  ulong uVar1;
  undefined7 uVar3;
  ulong uVar2;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 2);
  uVar1 = *(ulong *)(param_1 + 6);
  uVar3 = (undefined7)(uVar2 >> 8);
  if (*param_1 == 1) {
    uVar4 = 0;
    if (uVar2 <= param_4) {
      uVar4 = param_4 - uVar2;
    }
    param_3 = uVar4 <= param_2 & param_3;
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      return CONCAT71(uVar3,param_3 & param_2 <= uVar1);
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      return CONCAT71(uVar3,param_2 <= uVar1 && uVar2 <= param_2);
    }
    if ((param_3 & 1) == 0) {
      return CONCAT71(uVar3,uVar2 <= param_2);
    }
    if (param_2 < uVar2) {
      return 0;
    }
  }
  uVar2 = 0;
  if (uVar1 <= param_4) {
    uVar2 = param_4 - uVar1;
  }
  return CONCAT71((int7)(uVar2 >> 8),param_2 <= uVar2);
}