void _ZN7uu_stat14print_unsigned17h6ebed2a96194f8e4E
               (undefined8 param_1,undefined param_2,uint param_3,undefined8 param_4,long param_5,
               ulong param_6,undefined param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar3 = (*(code *)
            PTR__ZN4core3fmt3num3imp23__LT_impl_u20_usize_GT_4_fmt17h71a478bc15827a22E_002221b0)
                    (param_1,&local_b0,0x14);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1259f2eee6e0998aE
            (local_80,uVar3);
  if ((param_3 & 1) == 0) {
    uStack_c0 = local_78;
    local_b8 = local_70;
    local_c8 = -0x8000000000000000;
    if (param_5 == 0) goto LAB_00174bbd;
LAB_00174b5e:
    if (param_5 == 1) {
      local_e8 = (undefined4)local_c8;
      uStack_e4 = local_c8._4_4_;
      uStack_e0 = (undefined4)uStack_c0;
      uStack_dc = uStack_c0._4_4_;
      local_d8 = local_b8;
      if (local_c8 == -0x8000000000000000) {
                    /* try { // try from 00174b8b to 00174bef has its CatchHandler @ 00174d30 */
        _ZN7uu_stat13pad_and_print17h4c659c1797f3ded6E(uStack_c0,local_b8,param_2,param_4,param_7);
        goto LAB_00174cd0;
      }
LAB_00174bf5:
      bVar2 = false;
      local_d8 = local_b8;
    }
    else {
      if (0xffff < param_6) {
        local_b0 = &PTR_DAT_00219960;
        local_a8 = 1;
        local_a0 = (undefined8 **)0x8;
        local_98 = 0;
        puStack_90 = (undefined *)0x0;
                    /* try { // try from 00174d1c to 00174d2d has its CatchHandler @ 00174d74 */
        (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00221f70)
                  (&local_b0,&PTR_s_src_uu_stat_src_stat_rs_00219ce8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      local_68 = &local_c8;
      local_60 = 
      _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h622952c97c82feb9E
      ;
      local_58 = 0;
      local_50 = (undefined2)param_6;
      local_b0 = (undefined **)&DAT_0011ab40;
      local_a8 = 1;
      puStack_90 = &DAT_0011d388;
      local_88 = 1;
      local_a0 = &local_68;
      local_98 = 2;
                    /* try { // try from 00174c7b to 00174c8c has its CatchHandler @ 00174d74 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(&local_48,&local_b0);
      local_e8 = local_48;
      uStack_e4 = uStack_44;
      uStack_e0 = uStack_40;
      uStack_dc = uStack_3c;
      local_d8 = local_38;
      bVar2 = true;
    }
                    /* try { // try from 00174cb3 to 00174cc2 has its CatchHandler @ 00174d62 */
    _ZN7uu_stat13pad_and_print17h4c659c1797f3ded6E
              (CONCAT44(uStack_dc,uStack_e0),local_d8,param_2,param_4,param_7);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17ha7af664bba1b7bffE(&local_e8);
    if (!bVar2) goto LAB_00174cda;
  }
  else {
                    /* try { // try from 00174b46 to 00174b4f has its CatchHandler @ 00174d4d */
    _ZN7uu_stat9group_num17hf49c8796a9e1a06aE(&local_c8);
    if (param_5 != 0) goto LAB_00174b5e;
LAB_00174bbd:
    local_e8 = (undefined4)local_c8;
    uStack_e4 = local_c8._4_4_;
    uStack_e0 = (undefined4)uStack_c0;
    uStack_dc = uStack_c0._4_4_;
    local_d8 = local_b8;
    if (local_c8 != -0x8000000000000000) goto LAB_00174bf5;
    _ZN7uu_stat13pad_and_print17h4c659c1797f3ded6E(uStack_c0,local_b8,param_2,param_4,param_7);
  }
LAB_00174cd0:
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17ha7af664bba1b7bffE(&local_c8);
LAB_00174cda:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(local_80);
  return;
}