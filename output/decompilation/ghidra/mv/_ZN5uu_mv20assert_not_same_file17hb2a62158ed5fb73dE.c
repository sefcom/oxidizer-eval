undefined8
_ZN5uu_mv20assert_not_same_file17hb2a62158ed5fb73dE
          (long param_1,long param_2,long param_3,long param_4,char param_5,uint param_6,
          char param_7)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  undefined auVar12 [16];
  uint local_1b4;
  long local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long local_198;
  ulong local_190;
  long local_188;
  long local_180;
  ulong local_178;
  long local_170;
  long local_168;
  undefined local_160;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long local_70;
  long local_68;
  ulong local_60;
  long local_58;
  long local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  _ZN3std4path8absolute17h1b953507f7e735f6E(&local_120,param_1,param_2);
  local_60 = local_120;
  local_58 = uStack_118;
  local_50 = local_110;
  _ZN6uucore8features2fs12canonicalize17h709ce4b875a43b77E(&local_178,&local_60);
  local_1b0 = local_168;
  lVar8 = local_170;
  uVar9 = local_178;
  if (local_178 == 0x8000000000000000) {
LAB_0018b3d6:
    _ZN3std4path8absolute17h1b953507f7e735f6E(&local_120,param_1,param_2);
    local_1b0 = local_110;
    lVar8 = uStack_118;
    uVar10 = local_120;
    if (local_120 == 0x8000000000000000) {
      uVar3 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0024ab20
              )(uStack_118);
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17haf7b4a323d555885E
                (&local_178);
      return uVar3;
    }
    if (uVar9 != 0x8000000000000000) {
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E(uVar9,local_170);
      goto joined_r0x0018b498;
    }
                    /* try { // try from 0018b43a to 0018b4d1 has its CatchHandler @ 0018bbfe */
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17haf7b4a323d555885E
              (&local_178);
    if (param_5 != '\0') goto LAB_0018b449;
LAB_0018b49a:
    local_1b4 = 0;
LAB_0018b49c:
    _ZN3std4path8absolute17h1b953507f7e735f6E(&local_120,param_3,param_4);
    lVar7 = uStack_118;
    uVar9 = local_120;
    if (local_120 != 0x8000000000000000) {
                    /* try { // try from 0018b4df to 0018b5cb has its CatchHandler @ 0018bbec */
      auVar12 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_0024a9c0)
                          (uStack_118,local_110);
      lVar4 = auVar12._0_8_;
      if ((lVar4 == 0) ||
         (((*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0024a5e8)
                     (&local_120,lVar4), (local_120 & 1) == 0 &&
          (cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h58b5b4cbfa3f02f8E
                             (uStack_118,local_110,1,0), cVar2 != '\0')))) {
        _ZN3std4path8absolute17h1b953507f7e735f6E(&local_120,param_3,param_4);
        if (local_120 == 0x8000000000000000) goto LAB_0018b5c3;
        local_190 = local_120;
        local_188 = uStack_118;
        local_180 = local_110;
      }
      else {
        _ZN6uucore8features2fs12canonicalize17hfcc5d9918f2f91cfE(&local_120,lVar4,auVar12._8_8_);
        lVar5 = local_110;
        lVar4 = uStack_118;
        uVar1 = local_120;
        if (local_120 == 0x8000000000000000) {
LAB_0018b5c3:
          auVar12 = (*(code *)
                      PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0024ab20
                    )(uStack_118);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E(uVar9,lVar7);
          goto LAB_0018b9e4;
        }
                    /* try { // try from 0018b684 to 0018b6b6 has its CatchHandler @ 0018bb94 */
        auVar12 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_0024a5f0)
                            (param_3,param_4);
        if (auVar12._0_8_ == 0) {
          auVar12 = ZEXT816(1);
        }
        _ZN3std4path4Path4join17h2b3f1fa38f5fea2aE
                  (&local_190,lVar4,lVar5,auVar12._0_8_,auVar12._8_8_);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E(uVar1,lVar4);
      }
LAB_0018b6cf:
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E(uVar9,lVar7);
      lVar4 = local_180;
      lVar7 = local_188;
                    /* try { // try from 0018b6de to 0018b794 has its CatchHandler @ 0018bbd8 */
      cVar2 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h35303d53f5dfabe5E
                        (lVar8,local_1b0);
      if (((cVar2 == '\0') &&
          (cVar2 = (*(code *)
                     PTR__ZN6uucore8features2fs26are_hardlinks_to_same_file17hed60833ae00362c2E_0024ab50
                   )(param_1,param_2,param_3,param_4), cVar2 == '\0')) &&
         (cVar2 = (*(code *)
                    PTR__ZN6uucore8features2fs45are_hardlinks_or_one_way_symlink_to_same_file17hac15d05039645469E_0024ab58
                  )(param_1,param_2,param_3,param_4), cVar2 == '\0')) {
        bVar11 = false;
      }
      else {
        bVar11 = param_7 == '\0';
      }
      auVar12 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_0024a5f0)
                          (param_1,param_2);
      if ((auVar12._0_8_ == 0) || ((local_1b4 & 1) == 0)) {
        local_120 = 1;
        local_108 = CONCAT71(local_108._1_7_,1);
                    /* try { // try from 0018b898 to 0018b8ac has its CatchHandler @ 0018bbd8 */
        uStack_118 = param_3;
        local_110 = param_4;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (&local_138,&local_120);
      }
      else {
        local_70 = param_3;
        local_68 = param_4;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hacdb82853e544cb8E
                  (&local_178,&local_70);
        uVar3 = _ZN4core3str21__LT_impl_u20_str_GT_16trim_end_matches17h82b32438de32449eE
                          (local_170,local_168);
                    /* try { // try from 0018b7a7 to 0018b7b6 has its CatchHandler @ 0018bb73 */
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h19a54565959f0f6fE
                  (&local_120,uVar3);
        local_198 = local_110;
        local_1a8 = (undefined4)local_120;
        uStack_1a4 = local_120._4_4_;
        uStack_1a0 = (undefined4)uStack_118;
        uStack_19c = uStack_118._4_4_;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8db761034a9103d6E(&local_178);
                    /* try { // try from 0018b7db to 0018b7fd has its CatchHandler @ 0018bba4 */
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_1a8,0x2f);
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0024a9a0)
                  (&local_120,auVar12._0_8_,auVar12._8_8_);
                    /* try { // try from 0018b811 to 0018b81a has its CatchHandler @ 0018bb61 */
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h367dbc0c8c85d406E
                  (&local_1a8,uStack_118,local_110 + uStack_118);
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h0ec8a001aa281541E
                  (&local_120);
        local_120 = 0;
        uStack_118 = CONCAT44(uStack_19c,uStack_1a0);
        local_110 = local_198;
        local_108 = CONCAT71(local_108._1_7_,1);
                    /* try { // try from 0018b849 to 0018b85d has its CatchHandler @ 0018bba4 */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (&local_138,&local_120);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8db761034a9103d6E(&local_1a8);
      }
      local_170 = param_1;
      local_168 = param_2;
      if (bVar11) {
                    /* try { // try from 0018b8b8 to 0018b971 has its CatchHandler @ 0018bbb3 */
        cVar2 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h35303d53f5dfabe5E
                          (lVar8,local_1b0,lVar7,lVar4);
        if (cVar2 == '\0') {
          (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_0024a940)
                    (&local_178,param_1,param_2);
          (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_0024a940)
                    (&local_120,&DAT_0012108f,1);
          cVar2 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                            (&local_178,&local_120);
          if ((cVar2 == '\0') &&
             (cVar2 = _ZN3std4path4Path9ends_with17hc2afcb1f83cadb7fE(param_1,param_2),
             cVar2 == '\0')) {
            cVar2 = (*(code *)PTR__ZN3std4path4Path7is_file17h6e28d87ff76ffc41E_0024aa68)
                              (param_1,param_2);
            bVar11 = true;
            if (cVar2 == '\0') goto LAB_0018ba49;
          }
        }
        local_178 = 1;
        local_160 = 1;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (&local_1a8,&local_178);
        local_f0 = local_128;
        local_100 = local_138;
        uStack_f8 = uStack_130;
        uStack_118 = CONCAT44(uStack_1a4,local_1a8);
        local_110 = CONCAT44(uStack_19c,uStack_1a0);
        local_108 = local_198;
        local_120 = 2;
                    /* try { // try from 0018b9bb to 0018b9c7 has its CatchHandler @ 0018bb8d */
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1fc079de2e7d2ae0E(&local_120);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E(local_190,lVar7);
        auVar12._8_8_ =
             &
             PTR__ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17hc3655abd5fe82822E_002416f0
        ;
        auVar12._0_8_ = uVar3;
      }
      else {
        local_110 = local_1b0;
                    /* try { // try from 0018ba2c to 0018badc has its CatchHandler @ 0018bbb3 */
        local_120 = uVar10;
        uStack_118 = lVar8;
        cVar2 = _ZN3std4path4Path11starts_with17h3d660a3bec4c329aE(lVar7,lVar4,&local_120);
        if (cVar2 == '\0') {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8db761034a9103d6E(&local_138);
          lVar8 = lVar7;
          uVar10 = local_190;
          goto LAB_0018ba9d;
        }
        bVar11 = false;
LAB_0018ba49:
        cVar2 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_0024ab60)
                          (param_1,param_2);
        if (cVar2 != '\0') {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8db761034a9103d6E(&local_138);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E(local_190,lVar7)
          ;
          if (!bVar11) {
            return 0;
          }
LAB_0018ba9d:
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E(uVar10,lVar8);
          return 0;
        }
        local_178 = 1;
        local_160 = 1;
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h72cb907f66b31c22E
                  (&local_1a8,&local_178);
        local_f0 = local_128;
        local_100 = local_138;
        uStack_f8 = uStack_130;
        uStack_118 = CONCAT44(uStack_1a4,local_1a8);
        local_110 = CONCAT44(uStack_19c,uStack_1a0);
        local_108 = local_198;
        local_120 = 3;
                    /* try { // try from 0018bb23 to 0018bb2f has its CatchHandler @ 0018bb8d */
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1fc079de2e7d2ae0E(&local_120);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E(local_190,lVar7);
        auVar12._8_8_ =
             &
             PTR__ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17hc3655abd5fe82822E_002416f0
        ;
        auVar12._0_8_ = uVar3;
        if (!bVar11) {
          return uVar3;
        }
      }
      goto LAB_0018b9e4;
    }
  }
  else {
                    /* try { // try from 0018b39d to 0018b408 has its CatchHandler @ 0018bc14 */
    _ZN3std2fs8metadata17h12bb7891128f5212E(&local_120);
    uVar1 = local_120;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6bf03d231ff2ee2dE
              (&local_120);
    uVar10 = uVar9;
    if ((int)uVar1 == 2) goto LAB_0018b3d6;
joined_r0x0018b498:
    if (param_5 == '\0') goto LAB_0018b49a;
LAB_0018b449:
    local_1b4 = param_6 ^ 1;
    if ((param_6 & 1) != 0) goto LAB_0018b49c;
    _ZN3std4path8absolute17h1b953507f7e735f6E(&local_120,param_3,param_4);
    if (local_120 == 0x8000000000000000) {
      auVar12 = (*(code *)
                  PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0024ab20
                )();
      goto LAB_0018b9e4;
    }
    local_48 = local_120;
    local_40 = uStack_118;
    local_38 = local_110;
                    /* try { // try from 0018b60a to 0018b61b has its CatchHandler @ 0018bbfe */
    _ZN6uucore8features2fs12canonicalize17h709ce4b875a43b77E(&local_178,&local_48);
    lVar4 = local_168;
    lVar7 = local_170;
    if (local_178 != 0x8000000000000000) {
                    /* try { // try from 0018b63b to 0018b673 has its CatchHandler @ 0018bb7d */
      auVar12 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_0024a5f0)
                          (param_1,param_2);
      uVar3 = auVar12._8_8_;
      lVar5 = auVar12._0_8_;
      if (lVar5 == 0) {
        uVar3 = 0;
      }
      lVar6 = 1;
      if (lVar5 != 0) {
        lVar6 = lVar5;
      }
      _ZN3std4path4Path4join17h2b3f1fa38f5fea2aE(&local_190,lVar7,lVar4,lVar6,uVar3);
      uVar9 = local_178;
      goto LAB_0018b6cf;
    }
  }
  auVar12 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0024ab20
            )();
LAB_0018b9e4:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h7ff9893d52172353E
            (uVar10,lVar8,auVar12._8_8_);
  return auVar12._0_8_;
}