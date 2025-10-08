void _ZN3bat7printer18InteractivePrinter26print_horizontal_line_term17h3959d9ef5566c6a5E
               (undefined4 *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined local_b8 [24];
  undefined8 local_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h069f359f14668369E
            (local_b8,&DAT_002a2c43,3,*(undefined8 *)(param_2 + 0x100));
  local_78 = *(undefined *)(param_4 + 4);
  local_88 = *param_4;
  uStack_84 = param_4[1];
  uStack_80 = param_4[2];
  uStack_7c = param_4[3];
  local_a0 = 0x8000000000000002;
  local_f0 = 
  PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00807a48
  ;
  local_e8 = &DAT_007cea80;
  local_e0 = 2;
  local_c8 = 0;
  local_d0 = 1;
                    /* try { // try from 0053ef5a to 0053ef6f has its CatchHandler @ 0053efdd */
  local_f8 = local_b8;
  local_d8 = (undefined *)&local_f8;
  (*(code *)PTR__ZN3bat6output12OutputHandle9write_fmt17hec1e6f03d02f41b4E_00807b20)
            (&local_70,param_3,&local_e8);
  if ((char)local_70 == '\r') {
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
              (local_b8);
    *(undefined *)param_1 = 0xd;
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = local_30;
    *(undefined8 *)(param_1 + 0x12) = uStack_28;
    param_1[0xc] = local_40;
    param_1[0xd] = uStack_3c;
    param_1[0xe] = uStack_38;
    param_1[0xf] = uStack_34;
    param_1[8] = local_50;
    param_1[9] = uStack_4c;
    param_1[10] = uStack_48;
    param_1[0xb] = uStack_44;
    param_1[4] = local_60;
    param_1[5] = uStack_5c;
    param_1[6] = uStack_58;
    param_1[7] = uStack_54;
    *param_1 = local_70;
    param_1[1] = uStack_6c;
    param_1[2] = uStack_68;
    param_1[3] = uStack_64;
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
              (local_b8);
  }
  return;
}