undefined8 *
_ZN3bat4diff12get_git_diff17h667532c9f3b17451E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined auVar2 [16];
  undefined local_179;
  undefined local_178 [8];
  undefined local_170 [8];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined local_148 [16];
  long local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  long local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined local_108 [16];
  undefined8 *local_f8;
  undefined *local_f0;
  undefined4 *local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_58;
  undefined local_30 [24];
  
  _ZN4git24repo10Repository8discover17h760b1c7850f22f55E(&local_e0);
  if (local_e0 != 0) {
    _ZN4core3ptr92drop_in_place_LT_core__result__Result_LT_git2__repo__Repository_C_git2__error__Error_GT__GT_17h602c4f75958ce7cbE
              (&local_e0);
    *param_1 = 0;
    return param_1;
  }
                    /* try { // try from 00538dc3 to 00538dff has its CatchHandler @ 005390a0 */
  lVar1 = (*(code *)PTR__ZN4git24repo10Repository7workdir17h619817e5d5e1772fE_00808838)(local_178);
  if (lVar1 == 0) {
    *param_1 = 0;
    goto LAB_00538f57;
  }
  _ZN3std2fs12canonicalize17h98c3c6a1a4f658e3E(&local_e0,lVar1);
  local_118 = local_d8;
  uStack_114 = uStack_d4;
  uStack_110 = uStack_d0;
  uStack_10c = uStack_cc;
  local_120 = local_e0;
                    /* try { // try from 00538e1e to 00538e54 has its CatchHandler @ 00539091 */
  _ZN3std2fs12canonicalize17h98c3c6a1a4f658e3E(&local_e0,param_2,param_3,-local_e0);
  if (local_e0 == -0x8000000000000000) {
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17he5c06a2f538ef3f0E
              (&local_e0);
    *param_1 = 0;
  }
  else {
    local_130 = local_d8;
    uStack_12c = uStack_d4;
    uStack_128 = uStack_d0;
    uStack_124 = uStack_cc;
    local_138 = local_e0;
                    /* try { // try from 00538e7d to 00538eaf has its CatchHandler @ 00539082 */
    auVar2 = _ZN3std4path4Path12strip_prefix17h913184da9d0b9c8aE
                       (CONCAT44(uStack_d4,local_d8),CONCAT44(uStack_cc,uStack_d0),&local_120);
    if (auVar2._0_8_ == 0) {
      *param_1 = 0;
    }
    else {
      local_108 = auVar2;
      (*(code *)PTR__ZN4git24diff11DiffOptions3new17h6d38071769cecf5cE_00808840)(&local_e0);
                    /* try { // try from 00538eb0 to 00538f2e has its CatchHandler @ 00539070 */
      (*(code *)
        PTR__ZN63__LT__RF_std__path__Path_u20_as_u20_git2__util__IntoCString_GT_13into_c_string17h962ca5c339d65cdcE_008084a8
      )(&local_168,auVar2._0_8_,auVar2._8_8_);
      if (CONCAT44(uStack_164,local_168) == 0) {
        _ZN4git24diff11DiffOptions8pathspec17hee9fa19c147d5701E
                  (&local_e0,CONCAT44(uStack_15c,uStack_160),local_158);
        local_58 = 0;
        (*(code *)PTR__ZN4git24repo10Repository21diff_index_to_workdir17h41c9178abf132abaE_00808848)
                  (&local_168,local_178,0,&local_e0);
        if (CONCAT44(uStack_164,local_168) == 0) {
                    /* try { // try from 00538f7b to 00538f7f has its CatchHandler @ 00539061 */
          local_148 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h0151e2ed74536e37E();
          local_158 = _DAT_007cbb90;
          uStack_150 = _UNK_007cbb98;
          local_168 = PTR_DAT_007cbb80._0_4_;
          uStack_164 = PTR_DAT_007cbb80._4_4_;
          uStack_160 = _UNK_007cbb88;
          uStack_15c = _UNK_007cbb8c;
          local_f8 = (undefined8 *)local_108;
          local_f0 = &local_179;
                    /* try { // try from 00538fc7 to 00538fff has its CatchHandler @ 0053904d */
          local_e8 = &local_168;
          (*(code *)PTR__ZN4git24diff4Diff7foreach17h85fe163309838d14E_00808850)
                    (local_30,local_170,local_f0,&DAT_007ce3d8,0,&local_f8,&local_f8,&DAT_007ce400,0
                    );
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT__LP__RP__C_git2__error__Error_GT__GT_17heceaeca022ce2839E
                    (local_30);
          *(undefined4 *)(param_1 + 4) = local_148._0_4_;
          *(undefined4 *)((long)param_1 + 0x24) = local_148._4_4_;
          *(undefined4 *)(param_1 + 5) = local_148._8_4_;
          *(undefined4 *)((long)param_1 + 0x2c) = local_148._12_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)local_158;
          *(undefined4 *)((long)param_1 + 0x14) = local_158._4_4_;
          *(undefined4 *)(param_1 + 3) = (undefined4)uStack_150;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_150._4_4_;
          *(undefined4 *)param_1 = local_168;
          *(undefined4 *)((long)param_1 + 4) = uStack_164;
          *(undefined4 *)(param_1 + 1) = uStack_160;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_15c;
                    /* try { // try from 00539027 to 00539030 has its CatchHandler @ 00539070 */
          _ZN4core3ptr37drop_in_place_LT_git2__diff__Diff_GT_17h5b556be8730d3554E(local_170);
          _ZN4core3ptr44drop_in_place_LT_git2__diff__DiffOptions_GT_17hf1fb7f201763b2d1E(&local_e0);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(&local_138);
          goto LAB_00538f4d;
        }
        _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_git2__diff__Diff_C_git2__error__Error_GT__GT_17h8a2e50b75ce3923cE
                  (&local_168);
      }
      else {
        _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT_alloc__ffi__c_str__CString_C_git2__error__Error_GT__GT_17h28c6f0eb276f9ba3E
                  (&local_168);
      }
      *param_1 = 0;
      _ZN4core3ptr44drop_in_place_LT_git2__diff__DiffOptions_GT_17hf1fb7f201763b2d1E(&local_e0);
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(&local_138);
  }
LAB_00538f4d:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(&local_120);
LAB_00538f57:
  _ZN4core3ptr43drop_in_place_LT_git2__repo__Repository_GT_17ha0281e9bd3077121E(local_178);
  return param_1;
}