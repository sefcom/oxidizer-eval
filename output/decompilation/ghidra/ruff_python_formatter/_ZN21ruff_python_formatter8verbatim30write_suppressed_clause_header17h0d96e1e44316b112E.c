void _ZN21ruff_python_formatter8verbatim30write_suppressed_clause_header17h0d96e1e44316b112E
               (int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 extraout_EDX;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined *local_58;
  int *local_50;
  undefined *local_48;
  int local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  
  puVar3 = (undefined8 *)(**(code **)(param_3[1] + 0x30))(*param_3);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  _ZN21ruff_python_formatter9statement6clause12ClauseHeader5range17hab8e09d0514f8895E
            (&local_70,uVar1,uVar2,*puVar3,puVar3[1]);
  if ((int)local_70 == 4) {
    local_80 = local_70._4_4_;
    local_78 = _ZN21ruff_python_formatter8verbatim13verbatim_text17heeec4ed9639d83abE
                         (local_70._4_4_,local_68);
    local_7c = local_68;
    local_70 = &local_80;
    local_68 = 0x67fac8;
    uStack_64 = 0;
    local_60 = &local_78;
    local_58 = &DAT_0067e210;
    local_50 = &local_7c;
    local_48 = &DAT_0067fac8;
    local_74 = extraout_EDX;
    _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
              (&local_40,param_3,&local_70,3);
    if (local_40 == 4) {
      lVar4 = (**(code **)(param_3[1] + 0x30))(*param_3);
      _ZN21ruff_python_formatter9statement6clause12ClauseHeader5visit17hb9b9601842cd12f2E
                (uVar1,uVar2,lVar4 + 0x10);
      *param_1 = 4;
    }
    else {
      *(undefined8 *)(param_1 + 4) = local_30;
      *(ulong *)param_1 = CONCAT44(uStack_3c,local_40);
      *(undefined8 *)(param_1 + 2) = uStack_38;
    }
  }
  else {
    param_1[5] = local_60._4_4_;
    *(ulong *)(param_1 + 3) = CONCAT44((undefined4)local_60,uStack_64);
    *param_1 = (int)local_70;
    param_1[1] = local_70._4_4_;
    param_1[2] = local_68;
  }
  return;
}