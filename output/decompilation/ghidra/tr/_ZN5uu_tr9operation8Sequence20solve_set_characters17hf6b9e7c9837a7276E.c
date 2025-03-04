undefined8 *
_ZN5uu_tr9operation8Sequence20solve_set_characters17hf6b9e7c9837a7276E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,char param_6,char param_7,char param_8)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  ulong local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  ulong local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  ulong local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  ulong local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulong local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  ulong local_170;
  ulong local_168;
  undefined4 *local_160;
  undefined2 local_158;
  undefined local_156;
  long local_150;
  long local_148;
  long local_140;
  long *local_138;
  undefined8 local_130 [2];
  undefined8 local_120;
  long local_110;
  long local_108;
  long local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_70;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_40;
  
  _ZN5uu_tr9operation8Sequence8from_str17hc7b0ab68cb4e8382E(&local_1e8);
  local_228 = uStack_1e0;
  lVar2 = local_228;
  uStack_220 = uStack_1d8;
  uVar6 = uStack_220;
  local_218 = CONCAT44(uStack_1cc,local_1d0);
  if (local_1e8 != 0) {
    param_1[3] = local_218;
    param_1[1] = uStack_1e0;
    param_1[2] = uStack_1d8;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  local_228._0_4_ = (undefined4)uStack_1e0;
  local_228._4_4_ = (undefined4)((ulong)uStack_1e0 >> 0x20);
  uStack_220._0_4_ = (undefined4)uStack_1d8;
  uStack_220._4_4_ = (undefined4)(uStack_1d8 >> 0x20);
  local_1b8 = (undefined4)local_228;
  uStack_1b4 = local_228._4_4_;
  uStack_1b0 = (undefined4)uStack_220;
  uStack_1ac = uStack_220._4_4_;
  local_228 = lVar2;
  uStack_220 = uVar6;
  local_1a8 = local_218;
  lVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h1cab33b576bca811E
                    (uStack_1d8,local_218 * 0x10 + uStack_1d8);
  if (lVar2 != 0) {
    param_1[1] = 0x8000000000000003;
    *param_1 = 0x8000000000000000;
    goto LAB_001bd9d5;
  }
                    /* try { // try from 001bd60b to 001bd61a has its CatchHandler @ 001bdc4b */
  _ZN5uu_tr9operation8Sequence8from_str17hc7b0ab68cb4e8382E(&local_1e8,param_4,param_5);
  local_228 = uStack_1e0;
  lVar2 = local_228;
  uStack_220 = uStack_1d8;
  uVar6 = uStack_220;
  local_218 = CONCAT44(uStack_1cc,local_1d0);
  local_228._0_4_ = (undefined4)uStack_1e0;
  local_228._4_4_ = (undefined4)((ulong)uStack_1e0 >> 0x20);
  uStack_220._0_4_ = (undefined4)uStack_1d8;
  uStack_220._4_4_ = (undefined4)(uStack_1d8 >> 0x20);
  local_228 = lVar2;
  uStack_220 = uVar6;
  if (local_1e8 != 0) {
    param_1[3] = local_218;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_228;
    *(undefined4 *)((long)param_1 + 0xc) = local_228._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_220;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_220._4_4_;
    *param_1 = 0x8000000000000000;
    goto LAB_001bd9d5;
  }
  local_208 = (undefined4)local_228;
  uStack_204 = local_228._4_4_;
  uStack_200 = (undefined4)uStack_220;
  uStack_1fc = uStack_220._4_4_;
  uVar6 = uStack_1d8;
  lVar2 = local_218 * 0x10 + uStack_1d8;
  local_1f8 = local_218;
  uVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h1cab33b576bca811E
                    (uStack_1d8,lVar2);
  if (uVar3 < 2) {
    if ((param_8 != '\0') &&
       (local_1e8 = uVar6, uStack_1e0 = lVar2,
       cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h7bb18215294ee2eaE
                         (&local_1e8), cVar1 != '\0')) {
      uVar5 = 0x8000000000000006;
      goto LAB_001bd697;
    }
    local_c0 = CONCAT44(uStack_1ac,uStack_1b0);
    local_b8 = local_1a8 * 0x10 + local_c0;
    local_b0 = 0;
    local_a0 = 0;
                    /* try { // try from 001bd715 to 001bd72c has its CatchHandler @ 001bdc28 */
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hd98ed131c7af542fE
              (&local_198,&local_c0);
    if (param_6 != '\0') {
      local_158 = 0;
      local_156 = 0xff;
                    /* try { // try from 001bd74c to 001bd75d has its CatchHandler @ 001bdc2d */
      local_160 = &local_198;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h3fc2f6d282a93e56E
                (&local_1e8,&local_160);
                    /* try { // try from 001bd75e to 001bd76a has its CatchHandler @ 001bdbcf */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8b6037f7c42e6bd2E(&local_198);
      local_188 = uStack_1d8;
      local_198 = (undefined4)local_1e8;
      uStack_194 = local_1e8._4_4_;
      uStack_190 = (undefined4)uStack_1e0;
      uStack_18c = uStack_1e0._4_4_;
    }
    uVar6 = local_188;
    local_60 = CONCAT44(uStack_1fc,uStack_200);
    local_58 = local_1f8 * 0x10 + local_60;
    local_50 = 0;
    local_40 = 0;
                    /* try { // try from 001bd7c6 to 001bd829 has its CatchHandler @ 001bdc2d */
    uVar3 = _ZN4core4iter8adapters7flatten26FlattenCompat_LT_I_C_U_GT_9iter_fold17h5221240c85754c5cE
                      (&local_60);
    local_150 = 0;
    if (uVar3 <= uVar6) {
      local_150 = uVar6 - uVar3;
    }
    local_148 = CONCAT44(uStack_1fc,uStack_200);
    local_140 = local_1f8 * 0x10 + local_148;
    local_138 = &local_150;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h475caf593186536aE
              (&local_1e8,&local_148);
                    /* try { // try from 001bd82a to 001bd833 has its CatchHandler @ 001bdc0f */
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_uu_tr__operation__Sequence_GT__GT_17hb9b8e4e5bd05f109E
              (&local_208);
    uVar3 = uStack_1d8;
    lVar2 = uStack_1e0;
    local_1f8 = uStack_1d8;
    local_208 = (undefined4)local_1e8;
    uStack_204 = local_1e8._4_4_;
    uStack_200 = (undefined4)uStack_1e0;
    uStack_1fc = uStack_1e0._4_4_;
    local_228 = uStack_1e0;
    uStack_220 = uStack_1d8 * 0x10 + uStack_1e0;
    local_218 = 0;
    auVar7 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7e21891cabe133cE
                       (&local_228);
    if (auVar7._8_8_ != 0) {
      local_168 = uVar6;
      do {
        if (*auVar7._8_8_ == '\x04') {
          if (auVar7._0_8_ == 0) {
            lVar2 = 0;
          }
          else {
            local_110 = CONCAT44(uStack_1fc,uStack_200);
            local_108 = local_1f8 * 0x10 + local_110;
            local_130[0] = 0;
            local_120 = 0;
                    /* try { // try from 001bd8fb to 001bd907 has its CatchHandler @ 001bdbf3 */
            local_100 = auVar7._0_8_;
            lVar2 = _ZN4core4iter8adapters7flatten26FlattenCompat_LT_I_C_U_GT_9iter_fold17hf383c31b2191b5aaE
                              (local_130);
          }
          local_1e8 = CONCAT44(uStack_1ac,uStack_1b0);
          uStack_1e0 = local_1a8 * 0x10 + local_1e8;
          uStack_1d8 = 0;
          do {
            do {
              auVar7 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7e21891cabe133cE
                                 (&local_1e8);
              if (auVar7._8_8_ == (char *)0x0) {
                param_1[1] = 0x8000000000000007;
                *param_1 = 0x8000000000000000;
                goto LAB_001bd9be;
              }
            } while (*auVar7._8_8_ != '\x04');
            if (auVar7._0_8_ == 0) {
              lVar4 = 0;
            }
            else {
              local_d8 = CONCAT44(uStack_1ac,uStack_1b0);
              local_d0 = local_1a8 * 0x10 + local_d8;
              local_f8[0] = 0;
              local_e8 = 0;
              local_c8 = auVar7._0_8_;
                    /* try { // try from 001bd99f to 001bd9a6 has its CatchHandler @ 001bdc2f */
              lVar4 = _ZN4core4iter8adapters7flatten26FlattenCompat_LT_I_C_U_GT_9iter_fold17hf383c31b2191b5aaE
                                (local_f8);
            }
            uVar6 = local_168;
          } while (lVar4 != lVar2);
        }
        auVar7 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd7e21891cabe133cE
                           (&local_228);
      } while (auVar7._8_8_ != 0);
      lVar2 = CONCAT44(uStack_1fc,uStack_200);
      uVar3 = local_1f8;
    }
    local_88 = uVar3 * 0x10 + lVar2;
    local_80 = 0;
    local_70 = 0;
                    /* try { // try from 001bda2d to 001bda41 has its CatchHandler @ 001bdc2d */
    local_90 = lVar2;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hd98ed131c7af542fE
              (&local_180,&local_90);
                    /* try { // try from 001bda42 to 001bda51 has its CatchHandler @ 001bdbee */
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h3c1bb440d2de9642E
              (&local_228,&local_180);
                    /* try { // try from 001bda5c to 001bda68 has its CatchHandler @ 001bdbf5 */
    _ZN5alloc5slice11stable_sort17h08e6667fddf878a8E(uStack_220,local_218);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_8dedup_by17h94896181a17f53f7E(&local_228);
    local_1e8 = CONCAT44(uStack_1ac,uStack_1b0);
    uStack_1e0 = local_1a8 * 0x10 + local_1e8;
    cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hd7cdadf0fcbb5b0bE
                      (&local_1e8);
    if ((((cVar1 == '\0') || (param_8 == '\0')) || (param_6 == '\0')) ||
       ((uVar5 = 0x8000000000000009, local_218 < 2 && (local_170 <= uVar6)))) {
      if ((local_170 < local_188) && ((param_7 == '\0' && (local_1f8 != 0)))) {
        if (*(char *)(local_1f8 * 0x10 + -0x10 + CONCAT44(uStack_1fc,uStack_200)) == '\x04') {
          cVar1 = *(char *)(local_1f8 * 0x10 + CONCAT44(uStack_1fc,uStack_200) + -0xf);
          uVar5 = 0x8000000000000008;
          if ((cVar1 == '\n') || (cVar1 == '\x06')) goto LAB_001bdb1f;
        }
      }
      if (param_7 != '\0') {
                    /* try { // try from 001bdb4e to 001bdb5a has its CatchHandler @ 001bdbf5 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_8truncate17h04589a5fa11b67b9E(&local_198);
      }
      uStack_1d8 = local_188;
      local_1e8 = CONCAT44(uStack_194,local_198);
      uStack_1e0 = CONCAT44(uStack_18c,uStack_190);
      local_1c0 = local_170;
      local_1d0 = local_180;
      uStack_1cc = uStack_17c;
      uStack_1c8 = uStack_178;
      uStack_1c4 = uStack_174;
      *(undefined4 *)param_1 = local_198;
      *(undefined4 *)((long)param_1 + 4) = uStack_194;
      *(undefined4 *)(param_1 + 1) = uStack_190;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_18c;
      param_1[4] = CONCAT44(uStack_174,uStack_178);
      param_1[5] = local_170;
      param_1[2] = local_188;
      param_1[3] = CONCAT44(uStack_17c,local_180);
                    /* try { // try from 001bdbb6 to 001bdbbd has its CatchHandler @ 001bdbcd */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8b6037f7c42e6bd2E(&local_228);
                    /* try { // try from 001bdbbe to 001bdbc7 has its CatchHandler @ 001bdc4b */
      _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_uu_tr__operation__Sequence_GT__GT_17hb9b8e4e5bd05f109E
                (&local_208);
      goto LAB_001bd9d5;
    }
LAB_001bdb1f:
    param_1[1] = uVar5;
    *param_1 = 0x8000000000000000;
                    /* try { // try from 001bdb30 to 001bdb37 has its CatchHandler @ 001bdbee */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8b6037f7c42e6bd2E(&local_228);
                    /* try { // try from 001bdb38 to 001bdb44 has its CatchHandler @ 001bdc2d */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8b6037f7c42e6bd2E(&local_180);
LAB_001bd9be:
                    /* try { // try from 001bd9be to 001bd9ca has its CatchHandler @ 001bdc28 */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8b6037f7c42e6bd2E(&local_198);
  }
  else {
    uVar5 = 0x8000000000000002;
LAB_001bd697:
    param_1[1] = uVar5;
    *param_1 = 0x8000000000000000;
  }
                    /* try { // try from 001bd9cb to 001bd9d4 has its CatchHandler @ 001bdc4b */
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_uu_tr__operation__Sequence_GT__GT_17hb9b8e4e5bd05f109E
            (&local_208);
LAB_001bd9d5:
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_uu_tr__operation__Sequence_GT__GT_17hb9b8e4e5bd05f109E
            (&local_1b8);
  return param_1;
}