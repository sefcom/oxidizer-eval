undefined8 *
_ZN9uu_csplit10split_name9SplitName3new17h3397569db94b2c64E
          (undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  undefined **local_148;
  undefined *puStack_140;
  undefined ***local_138;
  undefined **local_128;
  undefined *puStack_120;
  undefined ***local_118;
  undefined **ppuStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined **local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined *local_c8;
  undefined **local_c0;
  code *pcStack_b8;
  undefined ***local_b0;
  undefined **ppuStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_58;
  long lStack_50;
  long local_48;
  long local_40 [3];
  
  if (*param_2 == -0x8000000000000000) {
                    /* try { // try from 002ba787 to 002ba79c has its CatchHandler @ 002baa6b */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h9e14181950c07716E
              (&local_128,&DAT_00170453,2);
    local_138 = local_118;
    local_148 = local_128;
    puStack_140 = puStack_120;
  }
  else {
    local_138 = (undefined ***)param_2[2];
    local_148 = (undefined **)*param_2;
    puStack_140 = (undefined *)param_2[1];
  }
  if ((undefined **)*param_4 == (undefined **)0x8000000000000000) {
    puVar2 = (undefined *)0x2;
  }
  else {
    pcStack_b8 = (code *)param_4[1];
    local_b0 = (undefined ***)param_4[2];
                    /* try { // try from 002ba7ea to 002ba8f9 has its CatchHandler @ 002baa80 */
    local_c0 = (undefined **)*param_4;
    _ZN9uu_csplit10split_name9SplitName3new28__u7b__u7b_closure_u7d__u7d_17ha06daa8d9c661eb9E
              (&local_128,&local_c0);
    local_78 = ppuStack_110;
    uStack_70 = local_108;
    puVar2 = puStack_120;
    if (local_128 != (undefined **)0xc) {
      param_1[4] = ppuStack_110;
      param_1[5] = local_108;
      param_1[1] = local_128;
      param_1[2] = puStack_120;
      param_1[3] = local_118;
      *param_1 = 0x8000000000000000;
      bVar4 = true;
      goto LAB_002baa2c;
    }
  }
  bVar4 = *param_3 == -0x8000000000000000;
  plVar3 = param_3;
  local_c8 = puVar2;
  if (bVar4) {
    local_c0 = &local_c8;
    pcStack_b8 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
    ;
    local_128 = &PTR_DAT_003e1d08;
    puStack_120 = (undefined *)0x2;
    local_108 = (undefined *)0x0;
    local_118 = &local_c0;
    ppuStack_110 = (undefined **)0x1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h81a1a3b547a1f055E(local_40,&local_128);
    plVar3 = local_40;
  }
  local_48 = plVar3[2];
  local_58 = *plVar3;
  lStack_50 = plVar3[1];
  _ZN6uucore8features6format15Format_LT_F_GT_5parse17h75087b964e14f528E(&local_128,&local_58);
  if (local_128 != (undefined **)0x8000000000000000) {
    uStack_88 = uStack_f0;
    uStack_84 = uStack_ec;
    local_90 = local_f8;
    local_80 = CONCAT44(uStack_e4,local_e8);
    local_b0 = local_118;
    ppuStack_a8 = ppuStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    local_c0 = local_128;
    pcStack_b8 = (code *)puStack_120;
                    /* try { // try from 002ba954 to 002ba960 has its CatchHandler @ 002baa59 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h9e14181950c07716E
              (&local_78,puStack_140,local_138);
    local_d0 = local_80;
    uStack_e0 = (undefined4)local_90;
    uStack_dc = local_90._4_4_;
    uStack_d8 = uStack_88;
    uStack_d4 = uStack_84;
    uStack_f0 = (undefined4)local_a0;
    uStack_ec = local_a0._4_4_;
    local_e8 = (undefined4)uStack_98;
    uStack_e4 = uStack_98._4_4_;
    uStack_100 = local_b0;
    pppuVar1 = uStack_100;
    local_f8 = ppuStack_a8;
    ppuStack_110 = local_c0;
    local_108 = pcStack_b8;
    puVar2 = local_108;
    local_118 = (undefined ***)local_68;
    local_128 = local_78;
    puStack_120 = (undefined *)uStack_70;
    param_1[10] = CONCAT44(uStack_84,uStack_88);
    param_1[0xb] = local_80;
    param_1[8] = uStack_98;
    param_1[9] = local_90;
    param_1[6] = ppuStack_a8;
    param_1[7] = local_a0;
    local_108._0_4_ = SUB84(pcStack_b8,0);
    local_108._4_4_ = (undefined4)((ulong)pcStack_b8 >> 0x20);
    uStack_100._0_4_ = SUB84(local_b0,0);
    uStack_100._4_4_ = (undefined4)((ulong)local_b0 >> 0x20);
    *(undefined4 *)(param_1 + 4) = (undefined4)local_108;
    *(undefined4 *)((long)param_1 + 0x24) = local_108._4_4_;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_100;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_100._4_4_;
    param_1[2] = local_68;
    param_1[3] = local_c0;
    *param_1 = local_78;
    param_1[1] = uStack_70;
    local_108 = puVar2;
    uStack_100 = pppuVar1;
                    /* try { // try from 002baa05 to 002baa33 has its CatchHandler @ 002baa7b */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2471fa5080cb6618E(&local_148);
    return param_1;
  }
  param_1[1] = (ulong)((int)puStack_120 == 10) + 9;
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr178drop_in_place_LT_core__result__Result_LT_uucore__features__format__Format_LT_uucore__features__format__num_format__UnsignedInt_GT__C_uucore__features__format__FormatError_GT__GT_17hb5740be8a44ce43eE
            (&local_128);
LAB_002baa2c:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2471fa5080cb6618E(&local_148);
  if ((bVar4) && (*param_3 != -0x8000000000000000)) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2471fa5080cb6618E(param_3);
  }
  return param_1;
}