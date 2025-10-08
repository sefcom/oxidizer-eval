undefined8
_ZN2rg11print_stats17h392dcabb3d8d88a4E
          (char param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
          )

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined ***pppuVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [12];
  undefined **local_1e8;
  undefined *puStack_1e0;
  undefined ***local_1d8;
  uint local_1c4;
  undefined **local_1c0;
  undefined *puStack_1b8;
  undefined8 *local_1b0;
  undefined *local_1a8;
  undefined8 *puStack_1a0;
  undefined *local_198;
  undefined8 *local_190;
  undefined *local_188;
  undefined8 *local_180;
  undefined *local_178;
  undefined8 *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  double *local_150;
  undefined *local_148;
  undefined **local_140;
  undefined8 uStack_138;
  undefined ***local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  double local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  double local_38;
  
  local_f8 = param_5;
  local_40 = param_2;
  auVar7 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_005267b8)();
  local_1c0 = auVar7._0_8_;
  puStack_1b8 = (undefined *)CONCAT44(puStack_1b8._4_4_,auVar7._8_4_);
  auVar7 = (*(code *)
             PTR__ZN3std4time7Instant25saturating_duration_since17he85729467886c4abE_005272e8)
                     (&local_1c0,param_3,param_4);
  if (param_1 == '\x05') {
    local_f0 = (undefined *)0x0;
    local_e0 = 0;
                    /* try { // try from 0035c5b7 to 0035c5cc has its CatchHandler @ 0035cd04 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (&local_1c0,"type",4);
    local_1d8 = (undefined ***)local_1b0;
    local_1e8 = local_1c0;
    puStack_1e0 = puStack_1b8;
                    /* try { // try from 0035c5e2 to 0035c5fd has its CatchHandler @ 0035ccf7 */
    _ZN10serde_json5value8to_value17h9b884c3313170568E(&local_1c0);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha4f783251da9b1ddE(&local_140,&local_1c0);
                    /* try { // try from 0035c5fe to 0035c61a has its CatchHandler @ 0035ccc1 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd74ee3e33cd8720bE
              (&local_1c0,&local_f0,&local_1e8,&local_140);
                    /* try { // try from 0035c61b to 0035c63a has its CatchHandler @ 0035cd04 */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hd89f41efcd768063E
              (&local_1c0);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (&local_1c0,"data",4);
    local_68 = local_1b0;
    local_78 = local_1c0;
    uStack_70 = puStack_1b8;
    local_d8 = 0;
    local_c8 = 0;
                    /* try { // try from 0035c66f to 0035c684 has its CatchHandler @ 0035ccff */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (&local_1c0,&DAT_00168eb8,5);
    local_1d8 = (undefined ***)local_1b0;
    local_1e8 = local_1c0;
    puStack_1e0 = puStack_1b8;
                    /* try { // try from 0035c69a to 0035c6bd has its CatchHandler @ 0035ccef */
    _ZN10serde_json5value8to_value17hd3cf780181016ac1E(&local_1c0,&local_40);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha4f783251da9b1ddE(&local_140,&local_1c0);
                    /* try { // try from 0035c6be to 0035c6da has its CatchHandler @ 0035ccbc */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd74ee3e33cd8720bE
              (&local_1c0,&local_d8,&local_1e8,&local_140);
                    /* try { // try from 0035c6db to 0035c6fa has its CatchHandler @ 0035ccff */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hd89f41efcd768063E
              (&local_1c0);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (&local_1c0,"elapsed_total",0xd);
    local_48 = local_1b0;
    local_58 = local_1c0;
    uStack_50 = puStack_1b8;
    local_110 = 0;
    local_100 = 0;
                    /* try { // try from 0035c72f to 0035c744 has its CatchHandler @ 0035cd09 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (&local_1c0,&DAT_00164664,4);
    local_1d8 = (undefined ***)local_1b0;
    local_1e8 = local_1c0;
    puStack_1e0 = puStack_1b8;
    local_c0 = auVar7._0_8_;
    _ZN10serde_json5value8to_value17ha9b98d7eed1ac666E(&local_1c0,&local_c0);
                    /* try { // try from 0035c777 to 0035c786 has its CatchHandler @ 0035ccb7 */
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha4f783251da9b1ddE(&local_140,&local_1c0);
                    /* try { // try from 0035c787 to 0035c7a3 has its CatchHandler @ 0035ccb5 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd74ee3e33cd8720bE
              (&local_1c0,&local_110,&local_1e8,&local_140);
                    /* try { // try from 0035c7a4 to 0035c7c3 has its CatchHandler @ 0035cd09 */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hd89f41efcd768063E
              (&local_1c0);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (&local_1c0,&DAT_00168ffd,5);
    local_1d8 = (undefined ***)local_1b0;
    local_1e8 = local_1c0;
    puStack_1e0 = puStack_1b8;
    local_1c4 = auVar7._8_4_;
    _ZN10serde_json5value8to_value17hc15361f9ea26f491E(&local_1c0,&local_1c4);
                    /* try { // try from 0035c7ef to 0035c7fe has its CatchHandler @ 0035ccb3 */
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha4f783251da9b1ddE(&local_140,&local_1c0);
                    /* try { // try from 0035c7ff to 0035c81e has its CatchHandler @ 0035ccb1 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd74ee3e33cd8720bE
              (&local_1c0,&local_110,&local_1e8,&local_140);
                    /* try { // try from 0035c81f to 0035c83e has its CatchHandler @ 0035cd09 */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hd89f41efcd768063E
              (&local_1c0);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (&local_1c0,&DAT_00169002,5);
    local_a8 = local_1b0;
    local_b8 = local_1c0;
    uStack_b0 = puStack_1b8;
    auVar4._0_8_ = (double)CONCAT44(_s__00161e30,(int)local_c0);
    auVar4._8_4_ = (int)((ulong)local_c0 >> 0x20);
    auVar4._12_4_ = _UNK_00161e34;
    local_38 = (double)local_1c4 / DAT_00162da8 +
               (auVar4._8_8_ - _UNK_00161c38) + (auVar4._0_8_ - _UINT_00161c30);
    local_1e8 = (undefined **)&local_38;
    puStack_1e0 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_005272f0
    ;
    local_1c0 = (undefined **)&DAT_004eba70;
    puStack_1b8 = (undefined *)0x2;
    puStack_1a0 = (undefined8 *)&DAT_00188100;
    local_198 = &DAT_00000001;
    local_1a8 = (undefined *)0x1;
                    /* try { // try from 0035c8ee to 0035c901 has its CatchHandler @ 0035cc9f */
    local_1b0 = &local_1e8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (&local_140,0,extraout_RDX,&local_1c0);
    local_1e8 = local_140;
    puStack_1e0 = (undefined *)uStack_138;
    local_1d8 = local_130;
                    /* try { // try from 0035c91d to 0035c93b has its CatchHandler @ 0035ccd5 */
    _ZN10serde_json5value8to_value17h83523e29100ac411E(&local_1c0,&local_1e8);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17ha4f783251da9b1ddE(&local_140,&local_1c0);
                    /* try { // try from 0035c93c to 0035c95d has its CatchHandler @ 0035cc9d */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd74ee3e33cd8720bE
              (&local_1c0,&local_110,&local_b8,&local_140);
                    /* try { // try from 0035c95e to 0035c967 has its CatchHandler @ 0035cc9b */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hd89f41efcd768063E
              (&local_1c0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_1e8);
    puStack_1b8 = (undefined *)local_110;
    local_1b0 = (undefined8 *)uStack_108;
    local_1a8 = (undefined *)local_100;
    local_1c0._0_1_ = 5;
                    /* try { // try from 0035c991 to 0035c9b2 has its CatchHandler @ 0035cc93 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd74ee3e33cd8720bE
              (&local_140,&local_d8,&local_58,&local_1c0);
                    /* try { // try from 0035c9b3 to 0035c9bf has its CatchHandler @ 0035ccff */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hd89f41efcd768063E
              (&local_140);
    puStack_1b8 = (undefined *)local_d8;
    local_1b0 = (undefined8 *)uStack_d0;
    local_1a8 = (undefined *)local_c8;
    local_1c0 = (undefined **)CONCAT71(local_1c0._1_7_,5);
                    /* try { // try from 0035c9e1 to 0035ca02 has its CatchHandler @ 0035cc91 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17hd74ee3e33cd8720bE
              (&local_140,&local_f0,&local_78,&local_1c0);
                    /* try { // try from 0035ca03 to 0035ca0f has its CatchHandler @ 0035cd04 */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hd89f41efcd768063E
              (&local_140);
    local_90 = local_f0;
    uStack_88 = uStack_e8;
    local_80 = local_e0;
    local_98 = (double)CONCAT71(local_98._1_7_,5);
                    /* try { // try from 0035ca3a to 0035ca60 has its CatchHandler @ 0035ccc3 */
    lVar1 = _ZN10serde_json3ser9to_writer17hcb3e94a5d682d067E(&local_f8,&local_98);
    if (lVar1 != 0) {
      uVar2 = (*(code *)
                PTR__ZN10serde_json5error103__LT_impl_u20_core__convert__From_LT_serde_json__error__Error_GT__u20_for_u20_std__io__error__Error_GT_4from17hd3d83d02bc2def03E_005267b0
              )(lVar1);
      _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h7fbac2ba78196538E(&local_98);
      return uVar2;
    }
    _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h7fbac2ba78196538E(&local_98);
    local_1c0 = &PTR_s__004ea358;
    puStack_1b8 = &DAT_00000001;
    local_1b0 = (undefined8 *)&DAT_00000008;
    local_1a8 = (undefined *)0x0;
    puStack_1a0 = (undefined8 *)0x0;
    pppuVar3 = &local_1c0;
    param_5 = local_f8;
  }
  else {
    local_f0 = (undefined *)param_2[5];
    local_78 = (undefined **)param_2[4];
    local_d8 = param_2[1];
    local_58 = (undefined **)*param_2;
    local_110 = param_2[3];
    local_b8 = (undefined **)param_2[2];
    uVar2 = param_2[6];
    auVar5._8_4_ = (int)((ulong)uVar2 >> 0x20);
    auVar5._0_8_ = uVar2;
    auVar5._12_4_ = _UNK_00161e34;
    local_1e8 = (undefined **)
                ((double)*(int *)(param_2 + 7) / DAT_00162da8 +
                (auVar5._8_8_ - _UNK_00161c38) +
                ((double)CONCAT44(_s__00161e30,(int)uVar2) - _UINT_00161c30));
    auVar6._8_4_ = auVar7._4_4_;
    auVar6._0_8_ = auVar7._0_8_;
    auVar6._12_4_ = _UNK_00161e34;
    local_98 = (double)(int)auVar7._8_4_ / DAT_00162da8 +
               (auVar6._8_8_ - _UNK_00161c38) +
               ((double)CONCAT44(_s__00161e30,auVar7._0_4_) - _UINT_00161c30);
    local_1c0 = &local_f0;
    puStack_1b8 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00526808
    ;
    local_1b0 = &local_78;
    local_1a8 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00526808
    ;
    puStack_1a0 = &local_d8;
    local_198 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00526808
    ;
    local_190 = &local_58;
    local_188 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00526808
    ;
    local_180 = &local_110;
    local_178 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00526808
    ;
    local_170 = &local_b8;
    local_168 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_00526808
    ;
    local_158 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_005272f0
    ;
    local_150 = &local_98;
    local_148 = 
    PTR__ZN4core3fmt5float52__LT_impl_u20_core__fmt__Display_u20_for_u20_f64_GT_3fmt17h78a04ef564c69060E_005272f0
    ;
    local_140 = &PTR_s__004eba90;
    uStack_138 = 9;
    local_120 = &DAT_00188198;
    local_118 = 8;
    local_128 = 8;
    pppuVar3 = &local_140;
    local_160 = (undefined *)&local_1e8;
    local_130 = &local_1c0;
  }
  uVar2 = _ZN3std2io5impls58__LT_impl_u20_std__io__Write_u20_for_u20__RF_mut_u20_W_GT_9write_fmt17ha2617aff0fbcfeb9E
                    (param_5,pppuVar3);
  return uVar2;
}