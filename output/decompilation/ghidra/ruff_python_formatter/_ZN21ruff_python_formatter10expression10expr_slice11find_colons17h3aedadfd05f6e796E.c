void _ZN21ruff_python_formatter10expression10expr_slice11find_colons17h3aedadfd05f6e796E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               uint param_5,long param_6,long param_7)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined2 local_cc;
  undefined local_ca;
  undefined8 local_c0;
  char local_b8;
  undefined2 local_b7;
  undefined local_b5;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  char local_98;
  undefined2 local_97;
  undefined local_95;
  undefined local_70 [8];
  undefined local_68 [48];
  undefined local_38 [8];
  
  lVar2 = param_7;
  plVar6 = &local_a8;
  if (param_6 == 0) {
    plVar6 = (long *)0x0;
  }
  local_a8 = param_6;
  uVar3 = _ZN4core6option15Option_LT_T_GT_6map_or17hb1541e862108629aE(plVar6,param_4);
  if (param_5 < uVar3) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067dc18);
LAB_0040cd1b:
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067dc30);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
            (local_68,param_2,param_3,uVar3,param_5);
  local_38[0] = 0;
  _ZN4core4iter6traits8iterator8Iterator8try_fold17h574e0d0b6077c929E(&local_a0,local_68,local_38);
  if (local_98 == 'Z') {
    param_1[2] = 0;
    param_1[4] = 0x18ad33;
    *(undefined *)(param_1 + 5) = 0;
    *(undefined2 *)((long)param_1 + 0x15) = 0;
    *(undefined *)((long)param_1 + 0x17) = 0;
LAB_0040cbad:
    *(undefined8 *)(param_1 + 6) = 0x2b;
    *param_1 = 1;
  }
  else {
    if (local_98 != '\f') {
      param_1[2] = 0;
      *(char **)(param_1 + 4) = "Slice first colon token was not a colon";
      *(undefined8 *)(param_1 + 6) = 0x27;
      *param_1 = 1;
      return;
    }
    local_b0 = local_a0;
    puVar7 = &param_7;
    if (lVar2 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    uVar3 = _ZN4core6option15Option_LT_T_GT_6map_or17hb1541e862108629aE(puVar7,local_a0 >> 0x20);
    if (param_5 < uVar3) goto LAB_0040cd1b;
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (&local_a0,param_2,param_3,uVar3,param_5);
    local_70[0] = 0;
    uVar4 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h574e0d0b6077c929E
                      (&local_c0,&local_a0,local_70);
    if (local_b8 == 'Z') {
      uVar5 = 0x5a;
      local_c0 = uVar4;
    }
    else {
      if (local_b8 != '\f') {
        param_1[2] = 0;
        *(char **)(param_1 + 4) = "Expected a colon for the second colon token";
        goto LAB_0040cbad;
      }
      local_ca = local_b5;
      local_cc = local_b7;
      uVar5 = 0xc;
    }
    param_1[1] = (int)local_b0;
    param_1[2] = (int)(local_a0 >> 0x20);
    *(undefined *)(param_1 + 3) = 0xc;
    *(undefined2 *)((long)param_1 + 0xd) = local_97;
    *(undefined *)((long)param_1 + 0xf) = local_95;
    *(undefined8 *)(param_1 + 4) = local_c0;
    *(undefined *)(param_1 + 6) = uVar5;
    *(undefined2 *)((long)param_1 + 0x19) = local_cc;
    *(undefined *)((long)param_1 + 0x1b) = local_ca;
    *param_1 = 0;
  }
  return;
}