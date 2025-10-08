void _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter8add_iter17h462e49ccaf522bd7E
               (undefined8 *param_1,long param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined auVar4 [16];
  int local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  do {
    auVar4 = *(undefined (*) [16])(param_3 + 8);
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    if ((*param_3 & 1) == 0) {
      auVar4 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h3fa9a8e3da590a31E(param_3 + 0x18);
    }
    uVar3 = auVar4._8_8_;
    if (auVar4._0_8_ == 0) {
      _ZN21ruff_python_formatter6string9docstring11CodeExample6finish17hfd3e9aa3b4f5a7b9E
                (param_2 + 0x20,param_2);
      _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter16run_action_queue17h5e595196a30effb1E
                (param_1,param_2);
      return;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x90);
    puVar2 = (undefined4 *)
             _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hfe9154ba007c2a9aE
                       (param_3,param_3 + 0x18);
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    local_38 = uVar1;
    local_58 = auVar4;
    if (uVar3 >> 0x20 == 0) {
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(0,&DAT_0067cc48);
      uVar3 = (ulong)(auVar4._8_4_ + 1);
    }
    else {
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(1,&DAT_0067cc48);
    }
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h1e98140e442e0df8E(0,&DAT_0067cc48);
    *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + (int)uVar3;
    _ZN21ruff_python_formatter6string9docstring20DocstringLinePrinter7add_one17hae2c629763b1b7f5E
              (&local_70,param_2,local_58);
  } while (local_70 == 4);
  param_1[2] = local_60;
  *param_1 = CONCAT44(uStack_6c,local_70);
  param_1[1] = uStack_68;
  return;
}