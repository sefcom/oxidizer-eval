ulong _ZN21ruff_python_formatter10expression15CallChainLayout13apply_in_node17h39eadbd0b5ba4e1aE
                (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((char)param_1 == '\0') {
    pcVar1 = *(code **)(param_4 + 0x30);
    uVar3 = param_3;
    lVar2 = (*pcVar1)(param_3);
    if ((*(char *)(lVar2 + 0x20) == '\x03') ||
       ((param_1 = CONCAT71((int7)((ulong)uVar3 >> 8),2), *(char *)(lVar2 + 0x20) == '\x02' &&
        (*(int *)(lVar2 + 0x24) != 0)))) {
      uVar3 = _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17ha4dd26e64d596d39E
                        (param_2);
      lVar2 = (*pcVar1)(param_3);
      lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + 0x60);
      puVar4 = (undefined8 *)(*pcVar1)(param_3);
      uVar5 = _ZN21ruff_python_formatter10expression15CallChainLayout15from_expression17h8a81a54727e8f68fE
                        (0x10,uVar3,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),*puVar4
                         ,puVar4[1]);
      return uVar5;
    }
  }
  return param_1 & 0xffffffff;
}