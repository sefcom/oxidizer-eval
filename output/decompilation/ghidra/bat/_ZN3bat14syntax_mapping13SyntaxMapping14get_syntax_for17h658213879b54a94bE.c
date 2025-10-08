void _ZN3bat14syntax_mapping13SyntaxMapping14get_syntax_for17h658213879b54a94bE
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined auVar9 [16];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined local_78 [72];
  
  _ZN7globset9Candidate3new17he6a757e67f3e7371E(local_78,param_3,param_4);
  auVar9 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h3113e5e7690cd693E
                     (param_3,param_4);
                    /* try { // try from 0048eba8 to 0048ebcf has its CatchHandler @ 0048ed71 */
  lVar7 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_00807590)
                    (auVar9._0_8_,auVar9._8_8_);
  if (lVar7 == 0) {
    local_f8 = -0x7fffffffffffffff;
  }
  else {
    _ZN7globset9Candidate3new17h62742757350edb8aE(&local_148,lVar7);
    local_b8 = local_108;
    local_c8 = local_118;
    uStack_c0 = uStack_110;
    local_d8 = local_128;
    uStack_d0 = uStack_120;
    local_e8 = local_138;
    uStack_e0 = uStack_130;
    local_f8 = CONCAT44(uStack_144,local_148);
    uStack_f0 = uStack_140;
    uStack_ec = uStack_13c;
  }
                    /* try { // try from 0048ec15 to 0048ec27 has its CatchHandler @ 0048ed89 */
  (*(code *)PTR__ZN3bat14syntax_mapping13SyntaxMapping12all_mappings17h5a5a656b12955f8cE_008075b0)
            (&local_98,param_2);
  puVar5 = PTR__ZN7globset4glob11GlobMatcher18is_match_candidate17hdd47f5cb514c408fE_008075b8;
  local_138 = local_88;
  uStack_130 = uStack_80;
  local_148 = local_98;
  uStack_144 = uStack_94;
  uStack_140 = uStack_90;
  uStack_13c = uStack_8c;
  do {
    do {
      auVar9 = _ZN4core4iter8adapters5chain17and_then_or_clear17haa5c10d34272d527E(&local_148);
                    /* try { // try from 0048ec68 to 0048eca9 has its CatchHandler @ 0048ed8b */
      auVar9 = _ZN4core6option15Option_LT_T_GT_7or_else17hc1d079e19325d7caE
                         (auVar9._0_8_,auVar9._8_8_,&local_138);
      puVar8 = auVar9._8_8_;
      lVar7 = auVar9._0_8_;
      if (lVar7 == 0) {
        auVar9 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h3113e5e7690cd693E
                           (param_3,param_4);
                    /* try { // try from 0048ecd5 to 0048ed3c has its CatchHandler @ 0048ed89 */
        auVar9 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_00807590)
                           (auVar9._0_8_,auVar9._8_8_);
        if (auVar9._0_8_ != 0) {
          _ZN3bat14syntax_mapping16ignored_suffixes15IgnoredSuffixes24try_with_stripped_suffix17hc0de10fd80fe4239E
                    (&local_148,param_2 + 0x18,auVar9._0_8_,auVar9._8_8_);
          if ((char)local_148 == '\r') {
            local_a8 = (undefined4)local_138;
            uStack_a4 = local_138._4_4_;
            uStack_a0 = (undefined4)uStack_130;
            uStack_9c = uStack_130._4_4_;
            if (CONCAT44(uStack_13c,uStack_140) != 4) {
              *(undefined4 *)(param_1 + 1) = (undefined4)local_138;
              *(undefined4 *)((long)param_1 + 0xc) = local_138._4_4_;
              *(undefined4 *)(param_1 + 2) = (undefined4)uStack_130;
              *(undefined4 *)((long)param_1 + 0x14) = uStack_130._4_4_;
              *param_1 = CONCAT44(uStack_13c,uStack_140);
              goto LAB_0048ed48;
            }
          }
          else {
            _ZN4core3ptr102drop_in_place_LT_core__result__Result_LT_bat__assets__SyntaxReferenceInSet_C_bat__error__Error_GT__GT_17h2313c1560ca5a289E
                      (&local_148);
          }
        }
        *param_1 = 3;
        goto LAB_0048ed48;
      }
      cVar6 = (*(code *)puVar5)(lVar7,local_78);
      if (cVar6 != '\0') goto LAB_0048ecae;
    } while (local_f8 == -0x7fffffffffffffff);
    cVar6 = (*(code *)puVar5)(lVar7,&local_f8);
  } while (cVar6 == '\0');
LAB_0048ecae:
  uVar1 = *puVar8;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  param_1[2] = *(long *)(puVar8 + 4);
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)((long)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xc) = uVar4;
LAB_0048ed48:
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_globset__Candidate_GT__GT_17h92eb3bef75ac21bdE
            (&local_f8);
  _ZN4core3ptr39drop_in_place_LT_globset__Candidate_GT_17h246f07ec88a325d0E(local_78);
  return;
}