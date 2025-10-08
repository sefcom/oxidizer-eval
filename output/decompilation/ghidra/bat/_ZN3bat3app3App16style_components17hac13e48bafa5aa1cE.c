void _ZN3bat3app3App16style_components17hac13e48bafa5aa1cE(char *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined local_168 [8];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined7 local_158;
  undefined uStack_151;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  code *pcStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char local_d8;
  undefined7 uStack_d7;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined uStack_a0;
  undefined7 uStack_9f;
  undefined uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  _ZN3bat3app3App23forced_style_components17h537be08c927f0794E(&local_108);
  if (local_108 == (char *)0x0) {
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h0da66166b1e02921E_00807a38
            )(param_2,"style",5);
    if (cVar1 == '\0') {
      auVar3 = (*(code *)PTR__ZN3bat5style14StyleComponent10components17h6c8afe9a5a433675E_008075d8)
                         (10,*(undefined *)(param_2 + 0x38));
      _ZN120__LT_std__collections__hash__set__HashSet_LT_T_C_S_GT__u20_as_u20_core__iter__traits__collect__FromIterator_LT_T_GT__GT_9from_iter17h26e476e131c09ae9E
                (&local_148,auVar3._0_8_,auVar3._8_8_ + auVar3._0_8_);
    }
    else {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h5cb28e4b0036c6f1E
                (&local_88,param_2,"style",5);
      _ZN12clap_builder6parser5error12MatchesError6unwrap17haed18dec1f11e146E
                (&local_148,"style",5,&local_88);
      if (CONCAT44(uStack_144,local_148) == 0) {
        uVar2 = (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00807550)
                          (&DAT_00185499,0xe,&PTR_DAT_007c8508);
                    /* catch() { ... } // from try @ 004a878b with catch @ 004a8846 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9a1f4db89f5bf603E(local_168);
        _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hf79116e6dab6a5daE
                  (&local_d8);
        _ZN4core3ptr48drop_in_place_LT_bat__style__StyleComponents_GT_17h231077cf22413a4bE
                  (CONCAT44(uStack_144,local_148),CONCAT44(uStack_13c,uStack_140));
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar2);
      }
      local_58 = local_118;
      uStack_54 = uStack_114;
      uStack_50 = uStack_110;
      uStack_4c = uStack_10c;
      uStack_60 = (undefined4)uStack_120;
      uStack_5c = uStack_120._4_4_;
      _ZN4core4iter6traits8iterator8Iterator7collect17h9acb3a2c2a2b2913E(&local_d8,&local_88);
      if (local_d8 != '\r') {
        local_158 = (undefined7)(CONCAT44(uStack_c4,uStack_c8) >> 8);
        uStack_160 = (undefined4)CONCAT43(uStack_cc,uStack_d0._1_3_);
        uStack_15c = (undefined4)
                     (CONCAT17((undefined)uStack_c8,CONCAT43(uStack_cc,uStack_d0._1_3_)) >> 0x20);
        *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_97,uStack_98);
        *(undefined8 *)(param_1 + 0x48) = uStack_90;
        *(undefined8 *)(param_1 + 0x30) = local_a8;
        *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_9f,uStack_a0);
        *(undefined8 *)(param_1 + 0x20) = local_b8;
        *(undefined8 *)(param_1 + 0x28) = uStack_b0;
        *(ulong *)(param_1 + 0x10) = CONCAT71(local_158,(undefined)uStack_c8);
        *(undefined8 *)(param_1 + 0x18) = uStack_c0;
        *(ulong *)(param_1 + 1) = CONCAT17((undefined)uStack_d0,uStack_d7);
        *(ulong *)(param_1 + 9) = CONCAT44(uStack_15c,uStack_160);
        *param_1 = local_d8;
        return;
      }
      local_38 = uStack_d0;
      uStack_34 = uStack_cc;
      uStack_30 = uStack_c8;
      uStack_2c = uStack_c4;
      local_28 = uStack_c0;
      _ZN3bat5style18StyleComponentList13to_components17hc62d98123a3ec256E
                (&local_148,&local_38,*(undefined *)(param_2 + 0x38));
    }
  }
  else {
    local_128 = local_e8;
    uStack_120 = uStack_e0;
    local_138 = local_f8;
    uStack_130 = pcStack_f0;
    local_148 = (undefined4)local_108;
    uStack_144 = local_108._4_4_;
    uStack_140 = (undefined4)uStack_100;
    uStack_13c = uStack_100._4_4_;
  }
                    /* try { // try from 004a863e to 004a865a has its CatchHandler @ 004a8865 */
  cVar1 = (*(code *)PTR__ZN3bat5style15StyleComponents4grid17h47e585e5c9942068E_00807a40)
                    (&local_148);
  if ((cVar1 != '\0') &&
     (cVar1 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17hf4eda7f712eff57aE(&local_148)
     , cVar1 != '\0')) {
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_9f = 0x1500000006;
    uStack_98 = 0;
    local_d8 = '\0';
    uStack_d7 = 0x80000000000000;
    uStack_d0 = 0x1854a8;
    uStack_cc = 0;
    uStack_c8 = 0xd;
    uStack_c4 = 0;
    uStack_c0 = 0x8000000000000002;
    local_88 = &PTR_s_Style__rule__is_a_subset_of_styl_007c84c8;
    uStack_80 = 1;
    local_78 = (undefined8 *)0x8;
    uStack_70 = 0;
    uStack_68 = 0;
                    /* try { // try from 004a86f4 to 004a870f has its CatchHandler @ 004a8853 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha6af42fd863fbfffE
              (&local_108,
               "Style \'rule\' is a subset of style \'grid\', \'rule\' will not be visible.: ",
               &local_88);
    uStack_160 = (undefined4)uStack_100;
    uStack_15c = uStack_100._4_4_;
    local_158 = SUB87(local_f8,0);
    uStack_151 = (undefined)((ulong)local_f8 >> 0x38);
    local_108 = &local_d8;
    uStack_100 = 
    PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00807a48
    ;
    pcStack_f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_88 = (undefined **)&DAT_007c84d8;
    uStack_80 = 3;
    uStack_68 = 0;
    uStack_70 = 2;
                    /* try { // try from 004a878b to 004a8798 has its CatchHandler @ 004a8846 */
    local_f8 = local_168;
    local_78 = &local_108;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00807a50)(&local_88);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9a1f4db89f5bf603E(local_168);
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hf79116e6dab6a5daE
              (&local_d8);
  }
  *(undefined8 *)(param_1 + 0x28) = local_128;
  *(undefined8 *)(param_1 + 0x30) = uStack_120;
  *(undefined8 *)(param_1 + 0x18) = local_138;
  *(undefined8 *)(param_1 + 0x20) = uStack_130;
  *(ulong *)(param_1 + 8) = CONCAT44(uStack_144,local_148);
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_13c,uStack_140);
  *param_1 = '\r';
  return;
}