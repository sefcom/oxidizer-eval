void _ZN12forc_publish11credentials30get_auth_token_from_user_input17h65d2aee39529f722E
               (undefined *param_1,long param_2,undefined8 param_3,undefined param_4,
               undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  int local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 **local_198;
  undefined8 uStack_190;
  undefined *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 **local_150;
  undefined *local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 **local_e8;
  undefined *local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 **local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 **local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 **local_40;
  undefined *local_38;
  
  local_130 = CONCAT31(local_130._1_3_,param_4);
  local_138 = param_3;
  local_90 = param_5;
                    /* try { // try from 00762bfe to 00762eaa has its CatchHandler @ 0076342e */
  uVar9 = _ZN4core4sync6atomic11atomic_load17ha3303eb7743a7d3dE
                    (PTR__ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E_010498f0,0);
  if ((uVar9 == 5) || (2 < uVar9)) {
LAB_00762d2b:
    cVar8 = _ZN4core4sync6atomic11atomic_load17ha18b379b1b84a40aE
                      (PTR__ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE_01049900);
    if (cVar8 == '\0') {
      uVar9 = _ZN4core4sync6atomic11atomic_load17ha3303eb7743a7d3dE
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E_01049908,0);
      puVar2 = 
      _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
      ;
      if (2 < uVar9) {
        uStack_68 = *(undefined4 *)
                     (
                     _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                     + 0x20);
        uStack_64 = *(undefined4 *)
                     (
                     _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                     + 0x24);
        uStack_60 = *(undefined4 *)
                     (
                     _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                     + 0x28);
        uStack_5c = *(undefined4 *)
                     (
                     _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                     + 0x2c);
        local_70 = (undefined8 **)0x3;
        auVar12 = (*(code *)PTR__ZN3log6logger17hda83ce6e5b01f630E_01049910)();
        cVar8 = (**(code **)(auVar12._8_8_ + 0x18))(auVar12._0_8_,&local_70);
        puVar6 = 
        _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
        ;
        if (cVar8 != '\0') {
          local_170 = *(undefined8 *)
                       (
                       _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                       + 0x38);
          local_198 = *(undefined8 ***)
                       (
                       _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                       + 0x30);
          uStack_190 = *(undefined8 *)
                        (
                        _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                        + 0x38);
          local_188 = *(undefined **)
                       (
                       _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                       + 0x40);
          uStack_180 = *(undefined4 *)
                        (
                        _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                        + 0x48);
          uStack_17c = *(undefined4 *)
                        (
                        _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                        + 0x4c);
          local_178 = 0;
          _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
                    (&local_1c8,&local_198);
          if (CONCAT44(uStack_1c4,local_1c8) == 0) goto LAB_007633c2;
          local_140 = puVar6 + 0x30;
          local_108 = local_1a8;
          local_128 = (undefined8 *)CONCAT44(uStack_1c4,local_1c8);
          uStack_120 = CONCAT44(uStack_1bc,uStack_1c0);
          local_118 = (undefined4)uStack_1b8;
          uStack_114 = uStack_1b8._4_4_;
          uStack_110 = uStack_1b0;
          uStack_10c = uStack_1ac;
          local_1c8 = 0xf53e70;
          uStack_1c4 = 0;
          uStack_1c0 = 1;
          uStack_1bc = 0;
          uStack_1b8._0_4_ = 8;
          uStack_1b8._4_4_ = 0;
          uStack_1b0 = 0;
          uStack_1ac = 0;
          local_1a8 = 0;
          local_168 = &local_128;
          local_158 = &DAT_00f53ea8;
          local_150 = &local_168;
          local_148 = &DAT_00000001;
          local_188 = (undefined *)CONCAT44(uStack_5c,uStack_60);
          local_198 = local_70;
          uStack_190 = CONCAT44(uStack_64,uStack_68);
          local_160 = (undefined *)&local_1c8;
          (*(code *)PTR__ZN7tracing15__macro_support13__tracing_log17h4c7a43eb8e34734dE_01049918)
                    (puVar2,auVar12._0_8_,auVar12._8_8_,&local_198,&local_150);
        }
      }
    }
  }
  else {
    cVar8 = _ZN12tracing_core8callsite15DefaultCallsite8interest17h44bc8806352c8553E
                      (&
                       _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                      );
    if (cVar8 == '\0') goto LAB_00762d2b;
    cVar8 = (*(code *)PTR__ZN7tracing15__macro_support12__is_enabled17hb2603213f716e822E_010498f8)
                      (_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                       ,cVar8);
    puVar2 = 
    _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E;
    if (cVar8 == '\0') goto LAB_00762d2b;
    local_170 = *(undefined8 *)
                 (
                 _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                 + 0x38);
    local_198 = *(undefined8 ***)
                 (
                 _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                 + 0x30);
    uStack_190 = *(undefined8 *)
                  (
                  _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                  + 0x38);
    local_188 = *(undefined **)
                 (
                 _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                 + 0x40);
    uStack_180 = *(undefined4 *)
                  (
                  _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                  + 0x48);
    uStack_17c = *(undefined4 *)
                  (
                  _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4278cf8f69b28267E
                  + 0x4c);
    local_178 = 0;
    _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
              (&local_1c8,&local_198);
    if (CONCAT44(uStack_1c4,local_1c8) == 0) {
LAB_007633c2:
                    /* try { // try from 007633c2 to 007633da has its CatchHandler @ 0076342e */
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_01048e70)
                ("FieldSet corrupted (this is a bug)",0x22,
                 &PTR_s_forc_plugins_forc_publish_src_cr_00f53e90);
      goto LAB_007633f6;
    }
    local_188 = puVar2 + 0x30;
    local_108 = local_1a8;
    local_128 = (undefined8 *)CONCAT44(uStack_1c4,local_1c8);
    uStack_120 = CONCAT44(uStack_1bc,uStack_1c0);
    local_118 = (undefined4)uStack_1b8;
    uStack_114 = uStack_1b8._4_4_;
    uStack_110 = uStack_1b0;
    uStack_10c = uStack_1ac;
    local_1c8 = 0xf53e70;
    uStack_1c4 = 0;
    uStack_1c0 = 1;
    uStack_1bc = 0;
    uStack_1b8._0_4_ = 8;
    uStack_1b8._4_4_ = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    local_1a8 = 0;
    local_168 = &local_128;
    local_158 = &DAT_00f53ea8;
    local_198 = &local_168;
    uStack_190 = 1;
    local_160 = (undefined *)&local_1c8;
    _ZN12forc_publish11credentials30get_auth_token_from_user_input28__u7b__u7b_closure_u7d__u7d_17h5f765cd839912f00E
              (&local_198);
  }
  lVar10 = (*(code *)
             PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_01049058
           )(&local_90);
  if (lVar10 != 0) {
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar10;
    goto LAB_0076339c;
  }
  local_100 = 0;
  local_f8 = 1;
  local_f0 = 0;
                    /* try { // try from 00762ee0 to 00762f25 has its CatchHandler @ 007633fd */
  auVar12 = (*(code *)
              PTR__ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_9read_line17hb0fa00619e7ff3cbE_01049920
            )(&local_138,&local_100);
  if ((auVar12 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar11 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h72324a5878dbe828E
                       (local_f8,local_f0);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h038d919039a4e533E
              (&local_1c8,uVar11);
    local_c8 = CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
    local_d8 = local_1c8;
    uStack_d4 = uStack_1c4;
    uStack_d0 = uStack_1c0;
    uStack_cc = uStack_1bc;
    pppuVar1 = *(undefined8 ****)(param_2 + 8);
    puVar2 = *(undefined **)(param_2 + 0x10);
                    /* try { // try from 00762f47 to 00762f88 has its CatchHandler @ 007633f8 */
    auVar12 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_01049580)(pppuVar1,puVar2);
    if (auVar12._0_8_ == 0) {
LAB_00763374:
      *(undefined8 *)(param_1 + 0x18) = local_c8;
      *(int *)(param_1 + 8) = local_d8;
      *(undefined4 *)(param_1 + 0xc) = uStack_d4;
      *(undefined4 *)(param_1 + 0x10) = uStack_d0;
      *(undefined4 *)(param_1 + 0x14) = uStack_cc;
      *param_1 = 0xe;
    }
    else {
      lVar10 = _ZN3std2fs14create_dir_all17h5eef3240d0211b21E(auVar12._0_8_,auVar12._8_8_);
      if (lVar10 == 0) {
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_01048f70
        )(&local_1c8,&local_d8);
        local_a8 = CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8);
        local_b8 = local_1c8;
        uStack_b4 = uStack_1c4;
        uStack_b0 = uStack_1c0;
        uStack_ac = uStack_1bc;
                    /* try { // try from 00762faa to 00763366 has its CatchHandler @ 00763402 */
        _ZN4toml3ser9to_string17h6cf175329dc5e6eaE(&local_1c8,CONCAT44(uStack_1bc,uStack_1c0));
        local_88 = uStack_1c0;
        uStack_84 = uStack_1bc;
        uStack_80 = (undefined4)uStack_1b8;
        uStack_7c = uStack_1b8._4_4_;
        local_78 = CONCAT44(uStack_1ac,uStack_1b0);
        if (local_1c8 == 1) {
          uVar4 = (undefined)uStack_1b0;
          uStack_1b0 = (undefined4)((ulong)local_78 >> 8);
          uStack_1ac._0_3_ = (undefined3)((uint)uStack_1ac >> 8);
          uStack_1c4._3_1_ = (undefined)uStack_1c0;
          uStack_1c0 = (undefined4)(CONCAT44(uStack_1bc,uStack_1c0) >> 8);
          uVar5 = (uint)uStack_1bc >> 8;
          uStack_1bc._3_1_ = (undefined)(undefined4)uStack_1b8;
          uStack_1bc = CONCAT13(uStack_1bc._3_1_,(int3)uVar5);
          uStack_1b8._0_4_ = (undefined4)(CONCAT44(uStack_1b8._4_4_,(undefined4)uStack_1b8) >> 8);
          uStack_1b8._4_3_ = (undefined3)((uint)uStack_1b8._4_4_ >> 8);
          uStack_1b8._4_4_ = CONCAT13(uVar4,uStack_1b8._4_3_);
          *param_1 = 3;
          *(undefined4 *)(param_1 + 1) = 1;
          *(undefined4 *)(param_1 + 5) = uStack_1c4;
          *(undefined4 *)(param_1 + 9) = uStack_1c0;
          *(undefined4 *)(param_1 + 0xd) = uStack_1bc;
          *(ulong *)(param_1 + 0x10) =
               CONCAT35(uStack_1b8._4_3_,CONCAT41((undefined4)uStack_1b8,uStack_1bc._3_1_));
          *(ulong *)(param_1 + 0x18) = CONCAT35((undefined3)uStack_1ac,CONCAT41(uStack_1b0,uVar4));
        }
        else {
          lVar10 = _ZN3std2fs5write17haae821248600f7a0E(param_2,&local_88);
          if (lVar10 == 0) {
            uVar9 = _ZN4core4sync6atomic11atomic_load17ha3303eb7743a7d3dE
                              (PTR__ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E_010498f0
                               ,0);
            if ((uVar9 == 5) || (2 < uVar9)) {
LAB_007631a9:
              cVar8 = _ZN4core4sync6atomic11atomic_load17ha18b379b1b84a40aE
                                (
                                PTR__ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE_01049900
                                );
              if (cVar8 == '\0') {
                uVar9 = _ZN4core4sync6atomic11atomic_load17ha3303eb7743a7d3dE
                                  (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E_01049908,0)
                ;
                puVar6 = 
                _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                ;
                if (2 < uVar9) {
                  uStack_50 = *(undefined4 *)
                               (
                               _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                               + 0x20);
                  uStack_4c = *(undefined4 *)
                               (
                               _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                               + 0x24);
                  uStack_48 = *(undefined4 *)
                               (
                               _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                               + 0x28);
                  uStack_44 = *(undefined4 *)
                               (
                               _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                               + 0x2c);
                  local_58 = (undefined8 **)0x3;
                  auVar12 = (*(code *)PTR__ZN3log6logger17hda83ce6e5b01f630E_01049910)();
                  cVar8 = (**(code **)(auVar12._8_8_ + 0x18))(auVar12._0_8_,&local_58);
                  puVar7 = 
                  _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                  ;
                  if (cVar8 != '\0') {
                    local_98 = puVar6;
                    local_170 = *(undefined8 *)
                                 (
                                 _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                                 + 0x38);
                    local_198 = *(undefined8 ***)
                                 (
                                 _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                                 + 0x30);
                    uStack_190 = *(undefined8 *)
                                  (
                                  _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                                  + 0x38);
                    local_188 = *(undefined **)
                                 (
                                 _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                                 + 0x40);
                    uStack_180 = *(undefined4 *)
                                  (
                                  _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                                  + 0x48);
                    uStack_17c = *(undefined4 *)
                                  (
                                  _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                                  + 0x4c);
                    local_178 = 0;
                    _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
                              (&local_1c8,&local_198);
                    if (CONCAT44(uStack_1c4,local_1c8) == 0) goto LAB_007633dd;
                    local_140 = puVar7 + 0x30;
                    local_108 = local_1a8;
                    local_128 = (undefined8 *)CONCAT44(uStack_1c4,local_1c8);
                    uStack_120 = CONCAT44(uStack_1bc,uStack_1c0);
                    local_118 = (undefined4)uStack_1b8;
                    uStack_114 = uStack_1b8._4_4_;
                    uStack_110 = uStack_1b0;
                    uStack_10c = uStack_1ac;
                    local_40 = &local_e8;
                    local_38 = 
                    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_01049928
                    ;
                    local_1c8 = 0xf53e80;
                    uStack_1c4 = 0;
                    uStack_1c0 = 1;
                    uStack_1bc = 0;
                    local_1a8 = 0;
                    uStack_1b8 = &local_40;
                    uStack_1b0 = 1;
                    uStack_1ac = 0;
                    local_168 = &local_128;
                    local_158 = &DAT_00f53ea8;
                    local_150 = &local_168;
                    local_148 = &DAT_00000001;
                    local_188 = (undefined *)CONCAT44(uStack_44,uStack_48);
                    local_198 = local_58;
                    uStack_190 = CONCAT44(uStack_4c,uStack_50);
                    local_160 = (undefined *)&local_1c8;
                    local_e8 = pppuVar1;
                    local_e0 = puVar2;
                    (*(code *)
                      PTR__ZN7tracing15__macro_support13__tracing_log17h4c7a43eb8e34734dE_01049918)
                              (local_98,auVar12._0_8_,auVar12._8_8_,&local_198,&local_150);
                  }
                }
              }
            }
            else {
              cVar8 = _ZN12tracing_core8callsite15DefaultCallsite8interest17h44bc8806352c8553E
                                (&
                                 _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                                );
              if (cVar8 == '\0') goto LAB_007631a9;
              cVar8 = (*(code *)
                        PTR__ZN7tracing15__macro_support12__is_enabled17hb2603213f716e822E_010498f8)
                                (_ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                                 ,cVar8);
              puVar6 = 
              _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
              ;
              if (cVar8 == '\0') goto LAB_007631a9;
              local_170 = *(undefined8 *)
                           (
                           _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                           + 0x38);
              local_198 = *(undefined8 ***)
                           (
                           _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                           + 0x30);
              uStack_190 = *(undefined8 *)
                            (
                            _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                            + 0x38);
              local_188 = *(undefined **)
                           (
                           _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                           + 0x40);
              uStack_180 = *(undefined4 *)
                            (
                            _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                            + 0x48);
              uStack_17c = *(undefined4 *)
                            (
                            _ZN12forc_publish11credentials30get_auth_token_from_user_input10__CALLSITE17h4dfbf81de271a87cE
                            + 0x4c);
              local_178 = 0;
              _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
                        (&local_1c8,&local_198);
              if (CONCAT44(uStack_1c4,local_1c8) == 0) {
LAB_007633dd:
                    /* try { // try from 007633dd to 007633f5 has its CatchHandler @ 00763402 */
                (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_01048e70)
                          ("FieldSet corrupted (this is a bug)",0x22,
                           &PTR_s_forc_plugins_forc_publish_src_cr_00f53ec8);
LAB_007633f6:
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              local_188 = puVar6 + 0x30;
              local_108 = local_1a8;
              local_118 = (undefined4)uStack_1b8;
              uStack_114 = uStack_1b8._4_4_;
              uStack_110 = uStack_1b0;
              uStack_10c = uStack_1ac;
              local_128 = (undefined8 *)CONCAT44(uStack_1c4,local_1c8);
              uStack_120 = CONCAT44(uStack_1bc,uStack_1c0);
              local_e8 = &local_150;
              local_e0 = 
              PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_01049928
              ;
              local_1c8 = 0xf53e80;
              uStack_1c4 = 0;
              uStack_1c0 = 1;
              uStack_1bc = 0;
              local_1a8 = 0;
              uStack_1b8 = &local_e8;
              uStack_1b0 = 1;
              uStack_1ac = 0;
              local_168 = &local_128;
              local_158 = &DAT_00f53ea8;
              local_198 = &local_168;
              uStack_190 = 1;
              local_160 = (undefined *)&local_1c8;
              local_150 = pppuVar1;
              local_148 = puVar2;
              _ZN12forc_publish11credentials30get_auth_token_from_user_input28__u7b__u7b_closure_u7d__u7d_17h55bb1d1d4f7baa23E
                        (&local_198);
            }
            _ZN4core3ptr59drop_in_place_LT_forc_publish__credentials__Credentials_GT_17hfde1d9e81acb2c6cE
                      (&local_b8);
            goto LAB_00763374;
          }
          *param_1 = 0;
          *(long *)(param_1 + 8) = lVar10;
        }
        _ZN4core3ptr59drop_in_place_LT_forc_publish__credentials__Credentials_GT_17hfde1d9e81acb2c6cE
                  (&local_b8);
      }
      else {
        *param_1 = 0;
        *(long *)(param_1 + 8) = lVar10;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(&local_d8);
    }
  }
  else {
    *param_1 = 0;
    *(long *)(param_1 + 8) = auVar12._8_8_;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcc89c62839702889E(&local_100);
LAB_0076339c:
  _ZN4core3ptr185drop_in_place_LT_std__sync__poison__PoisonError_LT_std__sync__poison__mutex__MutexGuard_LT_alloc__vec__Vec_LT_alloc__boxed__Box_LT_regex_automata__meta__regex__Cache_GT__GT__GT__GT__GT_17he05a7f89a643c58eE
            (local_138,local_130);
  return;
}