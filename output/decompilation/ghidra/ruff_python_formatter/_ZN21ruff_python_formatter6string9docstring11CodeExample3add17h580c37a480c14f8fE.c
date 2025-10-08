void _ZN21ruff_python_formatter6string9docstring11CodeExample3add17h580c37a480c14f8fE
               (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_168;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulong local_f8;
  ulong uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulong local_c8;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = *param_1;
  *param_1 = 0x8000000000000003;
  if (uVar2 != 0x8000000000000003) {
    puVar1 = param_1 + 1;
    uVar3 = 1;
    if ((uVar2 ^ 0x8000000000000000) < 3) {
      uVar3 = uVar2 ^ 0x8000000000000000;
    }
    if (uVar3 == 0) {
      local_c8 = param_1[5];
      local_e8 = *(undefined4 *)puVar1;
      uStack_e4 = *(undefined4 *)((long)param_1 + 0xc);
      uStack_e0 = *(undefined4 *)(param_1 + 2);
      uStack_dc = *(undefined4 *)((long)param_1 + 0x14);
      local_d8 = *(undefined4 *)(param_1 + 3);
      uStack_d4 = *(undefined4 *)((long)param_1 + 0x1c);
      uStack_d0 = *(undefined4 *)(param_1 + 4);
      uStack_cc = *(undefined4 *)((long)param_1 + 0x24);
      _ZN21ruff_python_formatter6string9docstring18CodeExampleDoctest13add_code_line17h71949ff9db75b266E
                (&local_138,&local_e8,param_2,param_3);
      if (CONCAT44(uStack_134,local_138) != -0x8000000000000000) {
        _ZN4core3ptr106drop_in_place_LT_core__option__Option_LT_ruff_python_formatter__string__docstring__CodeExampleKind_GT__GT_17hdf0c40b776d81420E
                  (param_1);
        *param_1 = 0x8000000000000000;
        param_1[5] = CONCAT44(uStack_114,local_118);
        goto LAB_00424991;
      }
    }
    else {
      if (uVar3 != 1) {
        local_68 = *(undefined4 *)puVar1;
        uStack_64 = *(undefined4 *)((long)param_1 + 0xc);
        uStack_60 = *(undefined4 *)(param_1 + 2);
        uStack_5c = *(undefined4 *)((long)param_1 + 0x14);
        local_58 = *(undefined4 *)(param_1 + 3);
        uStack_54 = *(undefined4 *)((long)param_1 + 0x1c);
        uStack_50 = *(undefined4 *)(param_1 + 4);
        uStack_4c = *(undefined4 *)((long)param_1 + 0x24);
        local_48 = *(undefined4 *)(param_1 + 5);
        uStack_44 = *(undefined4 *)((long)param_1 + 0x2c);
        uStack_40 = *(undefined4 *)(param_1 + 6);
        uStack_3c = *(undefined4 *)((long)param_1 + 0x34);
        local_38 = *(undefined4 *)(param_1 + 7);
        uStack_34 = *(undefined4 *)((long)param_1 + 0x3c);
        uStack_30 = *(undefined4 *)(param_1 + 8);
        uStack_2c = *(undefined4 *)((long)param_1 + 0x44);
        _ZN21ruff_python_formatter6string9docstring19CodeExampleMarkdown13add_code_line17had77d7be58f7b420E
                  (&local_138,&local_68,param_2,param_3);
        if (CONCAT44(uStack_134,local_138) == -0x8000000000000000) {
          _ZN4core3ptr105drop_in_place_LT_core__option__Option_LT_ruff_python_formatter__string__docstring__CodeExampleRst_GT__GT_17h25233677e07d725eE
                    (0x8000000000000000,CONCAT44(uStack_12c,uStack_130));
          return;
        }
        local_168 = CONCAT44(uStack_114,local_118);
        _ZN4core3ptr106drop_in_place_LT_core__option__Option_LT_ruff_python_formatter__string__docstring__CodeExampleKind_GT__GT_17hdf0c40b776d81420E
                  (param_1);
        *param_1 = 0x8000000000000002;
        param_1[7] = CONCAT44(uStack_104,local_108);
        param_1[8] = CONCAT44(uStack_fc,uStack_100);
        param_1[5] = local_168;
        param_1[6] = CONCAT44(uStack_10c,uStack_110);
LAB_00424991:
        *(undefined4 *)(param_1 + 3) = local_128;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_124;
        *(undefined4 *)(param_1 + 4) = uStack_120;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_11c;
        *(undefined4 *)puVar1 = local_138;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_134;
        *(undefined4 *)(param_1 + 2) = uStack_130;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_12c;
        return;
      }
      local_b0 = *(undefined4 *)puVar1;
      uStack_ac = *(undefined4 *)((long)param_1 + 0xc);
      uStack_a8 = *(undefined4 *)(param_1 + 2);
      uStack_a4 = *(undefined4 *)((long)param_1 + 0x14);
      local_a0 = *(undefined4 *)(param_1 + 3);
      uStack_9c = *(undefined4 *)((long)param_1 + 0x1c);
      uStack_98 = *(undefined4 *)(param_1 + 4);
      uStack_94 = *(undefined4 *)((long)param_1 + 0x24);
      local_90 = *(undefined4 *)(param_1 + 5);
      uStack_8c = *(undefined4 *)((long)param_1 + 0x2c);
      uStack_88 = *(undefined4 *)(param_1 + 6);
      uStack_84 = *(undefined4 *)((long)param_1 + 0x34);
      local_80 = *(undefined4 *)(param_1 + 7);
      uStack_7c = *(undefined4 *)((long)param_1 + 0x3c);
      uStack_78 = *(undefined4 *)(param_1 + 8);
      uStack_74 = *(undefined4 *)((long)param_1 + 0x44);
      local_b8 = uVar2;
      local_70 = param_1[9];
      _ZN21ruff_python_formatter6string9docstring14CodeExampleRst13add_code_line17h8a8bdc1484158855E
                (&local_138,&local_b8,param_2,param_3);
      if (CONCAT44(uStack_134,local_138) != -0x8000000000000000) {
        local_168 = CONCAT44(uStack_114,local_118);
        _ZN4core3ptr106drop_in_place_LT_core__option__Option_LT_ruff_python_formatter__string__docstring__CodeExampleKind_GT__GT_17hdf0c40b776d81420E
                  (param_1);
        param_1[8] = local_f8;
        param_1[9] = uStack_f0;
        param_1[6] = CONCAT44(uStack_104,local_108);
        param_1[7] = CONCAT44(uStack_fc,uStack_100);
        param_1[4] = local_168;
        param_1[5] = CONCAT44(uStack_10c,uStack_110);
        param_1[2] = CONCAT44(uStack_124,local_128);
        param_1[3] = CONCAT44(uStack_11c,uStack_120);
        *param_1 = CONCAT44(uStack_134,local_138);
        param_1[1] = CONCAT44(uStack_12c,uStack_130);
        return;
      }
    }
    _ZN4core3ptr105drop_in_place_LT_core__option__Option_LT_ruff_python_formatter__string__docstring__CodeExampleRst_GT__GT_17h25233677e07d725eE
              (0x8000000000000000,CONCAT44(uStack_12c,uStack_130));
  }
  _ZN21ruff_python_formatter6string9docstring11CodeExample9add_start17h1189953d372e99f2E
            (param_1,param_2,param_3);
  return;
}