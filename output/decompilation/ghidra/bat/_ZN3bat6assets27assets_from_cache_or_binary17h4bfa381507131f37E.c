void _ZN3bat6assets27assets_from_cache_or_binary17h4bfa381507131f37E
               (undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined *local_190;
  code *local_188;
  undefined4 local_180;
  undefined uStack_17c;
  undefined2 uStack_17b;
  undefined uStack_179;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined7 uStack_170;
  undefined uStack_169;
  undefined7 uStack_168;
  undefined uStack_161;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined local_f0 [8];
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined local_d8 [24];
  long local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  (*(code *)
    PTR__ZN3bat6assets15assets_metadata14AssetsMetadata16load_from_folder17h0f2d1fb5c0269172E_00807a70
  )(&local_180,param_3,param_4);
  if ((char)local_180 != '\r') {
    *(uint *)((long)param_1 + 0xc) = CONCAT13(uStack_179,CONCAT21(uStack_17b,uStack_17c));
    *(uint *)((long)param_1 + 9) = CONCAT13(uStack_17c,local_180._1_3_);
    param_1[9] = local_140;
    param_1[10] = uStack_138;
    param_1[7] = local_150;
    param_1[8] = uStack_148;
    param_1[5] = local_160;
    param_1[6] = CONCAT44(uStack_154,uStack_158);
    param_1[3] = CONCAT17(uStack_169,uStack_170);
    param_1[4] = CONCAT17(uStack_161,uStack_168);
    *(char *)(param_1 + 1) = (char)local_180;
    param_1[2] = CONCAT44(uStack_174,uStack_178);
    *param_1 = 0x8000000000000001;
    return;
  }
  if (CONCAT44(uStack_174,uStack_178) != -0x7fffffffffffffff) {
    local_1b8 = (undefined4)uStack_170;
    uStack_1b4 = (undefined4)(CONCAT17(uStack_169,uStack_170) >> 0x20);
    uStack_1b0 = (undefined4)uStack_168;
    uStack_1ac = (undefined4)(CONCAT17(uStack_161,uStack_168) >> 0x20);
    local_b8 = local_1b8;
    uStack_b4 = uStack_1b4;
    uStack_b0 = uStack_1b0;
    uStack_ac = uStack_1ac;
    uStack_a4 = local_160._4_4_;
    uStack_a0 = uStack_158;
    uStack_9c = uStack_154;
                    /* try { // try from 004a8bb2 to 004a8bcb has its CatchHandler @ 004a8dac */
    local_c0 = CONCAT44(uStack_174,uStack_178);
    local_a8 = (int)local_160;
    cVar1 = (*(code *)
              PTR__ZN3bat6assets15assets_metadata14AssetsMetadata18is_compatible_with17h390ab7bdc192b6fcE_00807a78
            )(&local_c0,"0.25.0Clearing  ... okay\nskipped (not present)\n",6);
    if (cVar1 == '\0') {
                    /* try { // try from 004a8c80 to 004a8c96 has its CatchHandler @ 004a8dac */
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
                (local_d8,param_3,param_4);
      local_188 = 
      _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17ha152f904fae7110eE
      ;
      local_180 = 0x7c8520;
      uStack_17c = 0;
      uStack_17b = 0;
      uStack_179 = 0;
      uStack_178 = 2;
      uStack_174 = 0;
      local_160 = 0;
      uStack_170 = SUB87(&local_190,0);
      uStack_169 = (undefined)((ulong)&local_190 >> 0x38);
      uStack_168 = 1;
      uStack_161 = 0;
                    /* try { // try from 004a8cd9 to 004a8cec has its CatchHandler @ 004a8d87 */
      local_190 = local_d8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17ha6af42fd863fbfffE(local_f0,0,&local_180);
      _ZN4core3ptr40drop_in_place_LT_regex__error__Error_GT_17h466767d2e8f86b90E(local_d8);
      uStack_179 = local_f0[0];
      uStack_178 = local_f0._1_4_;
      uStack_174._0_3_ = local_f0._5_3_;
      uStack_174._3_1_ = (undefined)uStack_e8;
      uStack_170 = (undefined7)((ulong)uStack_e8 >> 8);
      uStack_169 = (undefined)local_e0;
      uStack_168 = (undefined7)((ulong)local_e0 >> 8);
      *(undefined *)(param_1 + 1) = 0xb;
      *(undefined4 *)((long)param_1 + 9) = local_180;
      *(uint *)((long)param_1 + 0xd) = CONCAT13(uStack_179,CONCAT21(uStack_17b,uStack_17c));
      *(undefined4 *)((long)param_1 + 0x11) = uStack_178;
      *(undefined4 *)((long)param_1 + 0x15) = uStack_174;
      param_1[3] = uStack_e8;
      param_1[4] = local_e0;
      *param_1 = 0x8000000000000001;
      _ZN4core3ptr65drop_in_place_LT_bat__assets__assets_metadata__AssetsMetadata_GT_17hcbdb297cbd6d0bb1E
                (&local_c0);
      return;
    }
    _ZN4core3ptr65drop_in_place_LT_bat__assets__assets_metadata__AssetsMetadata_GT_17hcbdb297cbd6d0bb1E
              (&local_c0);
  }
  if (param_2 != '\0') {
    (*(code *)PTR__ZN3bat6assets18HighlightingAssets10from_cache17h8cfca79731ebfcd6E_00807a80)
              (&local_c0,param_3,param_4);
    if (local_c0 != -0x7fffffffffffffff) {
      (*(code *)PTR_memcpy_008074c0)(&uStack_178,&local_b8,0x88);
      local_180 = (undefined4)local_c0;
      uStack_17c = (undefined)((ulong)local_c0 >> 0x20);
      uStack_17b = (undefined2)((ulong)local_c0 >> 0x28);
      uStack_179 = (undefined)((ulong)local_c0 >> 0x38);
      goto LAB_004a8d62;
    }
    _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_bat__assets__HighlightingAssets_C_bat__error__Error_GT__GT_17h8d52ca6aed5eca66E
              (&local_c0);
  }
  (*(code *)PTR__ZN3bat6assets18HighlightingAssets11from_binary17h996409616138bffeE_00807a88)
            (&local_180);
LAB_004a8d62:
  (*(code *)PTR_memcpy_008074c0)(param_1,&local_180,0x90);
  return;
}