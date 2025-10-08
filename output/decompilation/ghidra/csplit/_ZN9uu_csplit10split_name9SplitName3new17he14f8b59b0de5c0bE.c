void _ZN9uu_csplit10split_name9SplitName3new17he14f8b59b0de5c0bE
               (undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined *local_b8;
  undefined **local_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 **local_58;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_c0 = param_2[2];
  local_b8 = (undefined *)0x2;
  if ((undefined **)*param_4 != (undefined **)&DAT_8000000000000000) {
    puStack_a8 = (undefined *)param_4[1];
    uStack_a0 = *(undefined4 *)(param_4 + 2);
    uStack_9c = *(undefined4 *)((long)param_4 + 0x14);
    local_b0 = (undefined **)*param_4;
    _ZN9uu_csplit10split_name9SplitName3new28__u7b__u7b_closure_u7d__u7d_17h7abf8b2bb822c868E
              (&local_128,&local_b0);
    local_68 = local_110;
    ppuVar3 = local_68;
    uStack_60 = uStack_108;
    puVar4 = uStack_60;
    local_b8 = uStack_120;
    if (local_128 != (undefined **)&DAT_0000000d) {
      local_68._0_4_ = SUB84(local_110,0);
      local_68._4_4_ = (undefined4)((ulong)local_110 >> 0x20);
      uStack_60._0_4_ = SUB84(uStack_108,0);
      uStack_60._4_4_ = (undefined4)((ulong)uStack_108 >> 0x20);
      *(undefined4 *)(param_1 + 4) = (undefined4)local_68;
      *(undefined4 *)((long)param_1 + 0x24) = local_68._4_4_;
      *(undefined4 *)(param_1 + 5) = (undefined4)uStack_60;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_60._4_4_;
      param_1[1] = local_128;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_120;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_120._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_118;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_118._4_4_;
      *param_1 = 0x8000000000000000;
      local_68 = ppuVar3;
      uStack_60 = puVar4;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdddb8adee62be837E(uVar1,uVar2);
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h1bdf49e9c9d1531dE
                (*param_3,param_3[1]);
      return;
    }
  }
  if (*param_3 == -0x8000000000000000) {
    local_b0 = &local_b8;
    puStack_a8 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00371068
    ;
    local_128 = &PTR_s__0u_00342c28;
    uStack_120 = (undefined *)0x2;
    uStack_108 = (undefined *)0x0;
    uStack_118 = &local_b0;
    local_110 = (undefined **)&DAT_00000001;
                    /* try { // try from 00221318 to 0022137b has its CatchHandler @ 00221507 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h09e258efb3ef0577E(&local_48,&local_128);
  }
  else {
    local_40 = *(undefined4 *)(param_3 + 1);
    uStack_3c = *(undefined4 *)((long)param_3 + 0xc);
    uStack_38 = *(undefined4 *)(param_3 + 2);
    uStack_34 = *(undefined4 *)((long)param_3 + 0x14);
    local_48 = *param_3;
  }
  _ZN6uucore8features6format19Format_LT_F_C_T_GT_5parse17hef3b2fee7286e903E(&local_128,&local_48);
  if (local_128 == (undefined **)&DAT_8000000000000000) {
    param_1[1] = (ulong)(uStack_120 == (undefined *)0x800000000000000f) + 9;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr184drop_in_place_LT_core__result__Result_LT_uucore__features__format__Format_LT_uucore__features__format__num_format__UnsignedInt_C_u64_GT__C_uucore__features__format__FormatError_GT__GT_17hdf651402bb2e546bE
              (&local_128);
  }
  else {
    local_70 = local_e8;
    local_80 = (undefined4)local_f8;
    uStack_7c = local_f8._4_4_;
    uStack_78 = (undefined4)uStack_f0;
    uStack_74 = uStack_f0._4_4_;
    uStack_a0 = (undefined4)uStack_118;
    uStack_9c = uStack_118._4_4_;
    uStack_98 = (undefined4)local_110;
    uStack_94 = local_110._4_4_;
    local_90 = (undefined4)uStack_108;
    uStack_8c = uStack_108._4_4_;
    uStack_88 = (undefined4)uStack_100;
    uStack_84 = uStack_100._4_4_;
    local_b0 = local_128;
    puStack_a8 = uStack_120;
                    /* try { // try from 002213c2 to 002213d6 has its CatchHandler @ 002214d3 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h846ff10640ee36acE
              (&local_68,uVar2,local_c0);
    local_d0 = local_70;
    uStack_100 = CONCAT44(uStack_9c,uStack_a0);
    local_f8 = CONCAT44(uStack_94,uStack_98);
    uStack_f0 = CONCAT44(uStack_8c,local_90);
    local_e8 = CONCAT44(uStack_84,uStack_88);
    uStack_e0 = CONCAT44(uStack_7c,local_80);
    uStack_d8 = CONCAT44(uStack_74,uStack_78);
    local_110 = local_b0;
    uStack_108 = puStack_a8;
    uStack_118 = (undefined ***)local_58;
    local_128 = local_68;
    uStack_120 = uStack_60;
    param_1[10] = uStack_d8;
    param_1[0xb] = local_70;
    param_1[8] = local_e8;
    param_1[9] = uStack_e0;
    param_1[6] = local_f8;
    param_1[7] = uStack_f0;
    param_1[4] = puStack_a8;
    param_1[5] = uStack_100;
    param_1[2] = local_58;
    param_1[3] = local_b0;
    *(undefined4 *)param_1 = (undefined4)local_68;
    *(undefined4 *)((long)param_1 + 4) = local_68._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_60._4_4_;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdddb8adee62be837E(uVar1,uVar2);
  return;
}