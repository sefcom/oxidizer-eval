ulong _ZN21ruff_python_formatter9statement11stmt_assign37is_attribute_with_parenthesized_value17hd5324170738abb14E
                (int *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined8 unaff_RBP;
  undefined7 uVar4;
  ulong uVar3;
  
  uVar4 = (undefined7)((ulong)unaff_RBP >> 8);
  iVar1 = *param_1;
  while (uVar3 = CONCAT71(uVar4,1), iVar1 == 0x19) {
    cVar2 = _ZN21ruff_python_formatter10expression15has_parentheses17heb1fda5cfc7f167dE
                      (*(undefined8 *)(param_1 + 0xc),param_2);
    if (cVar2 != '\x02') goto LAB_0041c8d8;
    param_1 = *(int **)(param_1 + 0xc);
    iVar1 = *param_1;
  }
  if (iVar1 != 0x1a) {
    if (iVar1 == 0x10) {
      uVar3 = CONCAT71(uVar4,*(long *)(param_1 + 6) + *(long *)(param_1 + 10) != 0);
    }
    else {
      uVar3 = 0;
    }
  }
LAB_0041c8d8:
  return uVar3 & 0xffffffff;
}