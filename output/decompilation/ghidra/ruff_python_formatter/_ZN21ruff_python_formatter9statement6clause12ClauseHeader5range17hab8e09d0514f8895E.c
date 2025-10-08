void _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range17hab8e09d0514f8895E
               (int *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  uint uStack_48;
  undefined8 local_44;
  int local_3c;
  uint local_34;
  
  _ZN21ruff_python_formatter9statement6clause12ClauseHeader19first_keyword_range17h4514c6d97d3066b6E
            (&local_50);
  uVar5 = uStack_48;
  if (local_50 != 4) {
    param_1[5] = local_3c;
    *(undefined8 *)(param_1 + 3) = local_44;
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = uStack_48;
    return;
  }
  local_34 = local_4c;
  local_58 = 0;
  _ZN21ruff_python_formatter9statement6clause12ClauseHeader5visit17ha21c76b62b7c1677E
            (param_2,param_3,&local_58);
  uVar3 = 0xc;
  if (param_2 - 3U < 0xc) {
    uVar3 = param_2 - 3U;
  }
  uVar4 = (&switchD_00417f74::switchdataD_00187978)[uVar3] + 0x187978;
  switch(param_2) {
  case 3:
  case 4:
    uVar5 = local_54;
    if ((local_58 & 1) == 0) {
      uVar5 = *(uint *)(param_3 + 0x34);
    }
    goto LAB_00417f83;
  default:
    uVar4 = local_58;
    break;
  case 8:
    cVar1 = *(char *)(param_3 + 0x37);
    if (cVar1 != -0x26) {
      uVar4 = *(uint *)(param_3 + 0x1c);
    }
    if (cVar1 == -0x26) {
      uVar4 = local_54;
    }
    local_54 = uVar4;
    uVar4 = 1;
    if (cVar1 == -0x26) {
      uVar4 = local_58;
    }
  }
  if ((uVar4 & 1) != 0) {
    uVar5 = local_54;
  }
LAB_00417f83:
  _ZN21ruff_python_formatter9statement6clause11colon_range17ha3df4110d5faf4caE
            (&local_50,uVar5,param_4,param_5);
  if (local_50 == 4) {
    if (uStack_48 < local_34) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,
                 &PTR_s_crates_ruff_python_formatter_src_0067e7b0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1[1] = local_34;
    param_1[2] = uStack_48;
    *param_1 = 4;
  }
  else {
    param_1[5] = local_3c;
    *(undefined8 *)(param_1 + 3) = local_44;
    *param_1 = local_50;
    *(ulong *)(param_1 + 1) = CONCAT44(uStack_48,local_4c);
  }
  return;
}