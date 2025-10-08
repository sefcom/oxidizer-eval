void _ZN21ruff_python_formatter7pattern33CanOmitOptionalParenthesesVisitor13visit_pattern17he68f7da45c4f1f30E
               (long *param_1,ulong *param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  switch(*param_2 ^ 0x8000000000000000) {
  case 0:
    if (*(int *)param_2[1] == 2) {
      bVar1 = *(byte *)((long)param_1 + 0x21);
      if (1 < bVar1 == (bVar1 == 0)) {
        param_1[2] = param_1[2] + 1;
      }
      else if ((char)((1 < bVar1) - (bVar1 == 0)) != '\x01') {
        param_1[2] = 1;
        *(undefined *)((long)param_1 + 0x21) = 1;
      }
    }
    break;
  case 1:
  case 5:
  case 6:
    break;
  default:
    *(undefined *)(param_1 + 4) = 1;
    break;
  case 4:
    *(undefined *)(param_1 + 4) = 1;
    if (*param_1 == 0) {
      *param_1 = 1;
    }
    break;
  case 7:
    uVar2 = param_2[3];
    lVar3 = 0;
    if (uVar2 != 0) {
      lVar3 = uVar2 - 1;
    }
    bVar1 = *(byte *)((long)param_1 + 0x21);
    if (2 < bVar1 == bVar1 < 2) {
      param_1[2] = param_1[2] + lVar3;
    }
    else if ((char)((2 < bVar1) - (bVar1 < 2)) != '\x01') {
      param_1[2] = lVar3;
      *(undefined *)((long)param_1 + 0x21) = 2;
    }
    if (uVar2 != 0) {
      lVar3 = uVar2 * 0x68;
      uVar2 = param_2[2];
      do {
        _ZN21ruff_python_formatter7pattern33CanOmitOptionalParenthesesVisitor17visit_sub_pattern17hfa2475e1b6bf2f40E
                  (param_1,uVar2,param_3);
        lVar3 = lVar3 + -0x68;
        uVar2 = uVar2 + 0x68;
      } while (lVar3 != 0);
    }
  }
  return;
}