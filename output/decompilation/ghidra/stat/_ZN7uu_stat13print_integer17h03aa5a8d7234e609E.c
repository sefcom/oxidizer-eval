void _ZN7uu_stat13print_integer17h03aa5a8d7234e609E
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
               undefined param_6)

{
  code *pcVar1;
  char **local_e8;
  undefined8 uStack_e0;
  undefined8 **local_d8;
  code *local_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char **local_80;
  code *local_78;
  undefined8 *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  char *local_50;
  ulong local_48;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  
  _ZN51__LT_i64_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h60b05a0cf10951a2E
            (local_40,param_1);
  if (*(char *)(param_2 + 5) == '\0') {
    local_a8 = local_38;
    local_a0 = local_30;
    local_b0 = 0x8000000000000000;
  }
  else {
                    /* try { // try from 001743c5 to 001743ce has its CatchHandler @ 0017464d */
    _ZN7uu_stat9group_num17hf49c8796a9e1a06aE(&local_b0);
  }
  local_48 = (ulong)*(byte *)(param_2 + 3);
  local_50 = " ";
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    local_50 = (char *)0x1;
  }
  if (*(char *)(param_2 + 4) != '\0') {
    local_48 = 1;
    local_50 = "+";
  }
  if (param_4 == 0) {
    local_80 = &local_50;
    local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
    local_70 = &local_b0;
    local_68 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h622952c97c82feb9E;
    local_e8 = (char **)&DAT_0011cfd0;
    uStack_e0 = (code *)0x2;
    uStack_c8 = 0;
    local_d8 = &local_80;
    local_d0 = (code *)0x2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(local_98,&local_e8);
  }
  else if (param_4 == 1) {
    local_80 = &local_50;
    local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
    local_70 = &local_b0;
    local_68 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h622952c97c82feb9E;
    local_e8 = (char **)&DAT_0011cfd0;
    uStack_e0 = (code *)0x2;
    uStack_c8 = 0;
    local_d8 = &local_80;
    local_d0 = (code *)0x2;
                    /* try { // try from 00174496 to 001745b8 has its CatchHandler @ 00174672 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(local_98,&local_e8);
  }
  else {
    if (0xffff < param_5) {
      local_e8 = &PTR_DAT_00219960;
      uStack_e0 = (code *)0x1;
      local_d8 = (undefined8 **)0x8;
      local_d0 = (code *)0x0;
      uStack_c8 = 0;
                    /* try { // try from 0017463b to 0017464a has its CatchHandler @ 00174672 */
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00221f70)
                (&local_e8,&PTR_s_src_uu_stat_src_stat_rs_00219c68);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_e8 = &local_50;
    uStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
    local_d8 = (undefined8 **)&local_b0;
    local_d0 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h622952c97c82feb9E;
    uStack_c8 = 0;
    local_c0 = (undefined2)param_5;
    local_80 = (char **)&DAT_0011cfd0;
    local_78 = (code *)0x2;
    local_60 = &DAT_0011d528;
    local_58 = 2;
    local_68 = (code *)0x3;
    local_70 = &local_e8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(local_98,&local_80);
  }
  uStack_e0 = (code *)CONCAT44(uStack_8c,uStack_90);
  local_d8 = (undefined8 **)local_88;
                    /* try { // try from 001745db to 001745e6 has its CatchHandler @ 00174665 */
  _ZN7uu_stat13pad_and_print17h4c659c1797f3ded6E
            (uStack_e0,local_88,*(undefined *)(param_2 + 2),param_3,param_6);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(&local_e8);
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17ha7af664bba1b7bffE(&local_b0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(local_40);
  return;
}