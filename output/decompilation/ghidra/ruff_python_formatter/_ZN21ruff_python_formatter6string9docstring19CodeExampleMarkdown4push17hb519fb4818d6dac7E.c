void _ZN21ruff_python_formatter6string9docstring19CodeExampleMarkdown4push17hb519fb4818d6dac7E
               (long param_1,undefined8 *param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined local_20 [16];
  
  local_20 = _ZN21ruff_python_formatter6string9docstring11Indentation14trim_start_str17hc370b9ca7c92b427E
                       (param_1 + 0x18,*param_2,param_2[1]);
  local_28 = param_2[4];
  local_48 = *(undefined4 *)param_2;
  uStack_44 = *(undefined4 *)((long)param_2 + 4);
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((long)param_2 + 0xc);
  local_38 = *(undefined4 *)(param_2 + 2);
  uStack_34 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_30 = *(undefined4 *)(param_2 + 3);
  uStack_2c = *(undefined4 *)((long)param_2 + 0x1c);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd3e9f5ed333529eE
            (param_1,&local_48,&PTR_s_crates_ruff_python_formatter_src_0067f510);
  return;
}