void _ZN9alacritty6config12load_imports17h54203247dc29364fE(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 in_R8;
  long in_R9;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_218;
  undefined8 **ppuStack_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  code *local_1d0;
  undefined ***local_1c8;
  code *local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 **local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 **local_148;
  undefined **local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined7 local_d8;
  undefined4 uStack_d1;
  undefined5 uStack_cd;
  undefined8 *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 **local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined local_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_1e8 = in_R9;
  local_c0 = in_R8;
  _ZN9alacritty6config7imports17he228980ef6034b5fE(&local_248);
  if ((int)local_248 == 1) {
    local_208 = (undefined *)local_230;
                    /* try { // try from 005436dd to 005437ae has its CatchHandler @ 00543d10 */
    lVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (lVar2 != 0) {
      local_1d8 = &local_218;
      local_1d0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_1b8 = (undefined **)&DAT_001e8b60;
      uStack_1b0 = 1;
      local_198 = 0;
      local_1a8 = &local_1d8;
      uStack_1a0 = 1;
      uStack_120 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                             (&PTR_DAT_00981f18);
      local_140 = (undefined **)0x201748;
      uStack_138 = 0x17;
      uStack_130 = (undefined8 **)&DAT_00201da1;
      uStack_128 = 0x11;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_1b8,1,&local_140);
    }
    *param_1 = 0;
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x17) = 0;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_218);
  }
  else {
    local_88 = local_230;
    local_98 = (undefined4)uStack_240;
    uStack_94 = uStack_240._4_4_;
    uStack_90 = (undefined4)uStack_238;
    uStack_8c = uStack_238._4_4_;
    local_e8 = (undefined **)0x0;
    local_d8 = 0;
    uStack_d1 = 0;
    local_c8 = param_1;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h2441c7966b064cd0E
              (local_78,&local_98);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h48ec69800376c184E
              (&local_b8,local_78);
    if (local_b8 != 2) {
      local_1e8 = local_1e8 + -1;
      do {
        if ((local_b8 & 1) == 0) {
          local_148 = local_a0;
          local_158 = local_b0;
          uStack_154 = uStack_ac;
          uStack_150 = uStack_a8;
          uStack_14c = uStack_a4;
                    /* try { // try from 005439e0 to 005439f9 has its CatchHandler @ 00543d7d */
          _ZN9alacritty6config12parse_config17hb79bebbd33e5efa7E
                    (&local_140,CONCAT44(uStack_a4,uStack_a8),local_a0,local_c0,local_1e8);
          if (local_140 == (undefined **)0x7) {
            local_48 = (undefined4)uStack_128;
            uStack_44 = uStack_128._4_4_;
            uStack_40 = (undefined4)uStack_120;
            uStack_3c = uStack_120._4_4_;
            local_58 = (undefined4)uStack_138;
            uStack_54 = uStack_138._4_4_;
            uStack_50 = (undefined4)uStack_130;
            uStack_4c = uStack_130._4_4_;
                    /* try { // try from 00543a2e to 00543a4a has its CatchHandler @ 00543d37 */
            _ZN9alacritty6config11serde_utils5merge17h0b6a4a70fea81bc1E
                      (&local_1b8,&local_e8,&local_58);
            local_d8 = SUB87(local_1a8,0);
            uStack_d1._0_1_ = (undefined)((ulong)local_1a8 >> 0x38);
            uStack_d1._1_3_ = (undefined3)uStack_1a0;
            uStack_cd = (undefined5)((ulong)uStack_1a0 >> 0x18);
            local_e8 = local_1b8;
            uStack_e0 = (undefined4)uStack_1b0;
            uStack_dc = uStack_1b0._4_4_;
          }
          else if (((int)local_140 == 3) &&
                  (cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uStack_138),
                  cVar1 == '\0')) {
            local_1e0 = uStack_138;
                    /* try { // try from 00543bea to 00543cb4 has its CatchHandler @ 00543cfa */
            uVar3 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                              (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
            if (2 < uVar3) {
              local_218 = (char *)CONCAT44(uStack_14c,uStack_150);
              ppuStack_210 = local_148;
              local_1d8 = &local_218;
              local_1d0 = (code *)
                          PTR__ZN55__LT_std__path__Display_u20_as_u20_core__fmt__Debug_GT_3fmt17h805f8819fa6944ceE_009dfd80
              ;
              local_1b8 = &PTR_DAT_00981ea0;
              uStack_1b0 = 1;
              local_198 = 0;
              local_1a8 = &local_1d8;
              uStack_1a0 = 1;
              local_228 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                                    (&PTR_DAT_00981ed0);
              local_248 = (undefined **)0x201748;
              uStack_240 = 0x17;
              uStack_238 = (undefined8 **)&DAT_00201da1;
              local_230 = 0x11;
              _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_1b8,3,&local_248);
            }
                    /* try { // try from 00543cb8 to 00543cc1 has its CatchHandler @ 00543d37 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3428ae91bc3bac8aE(&local_1e0)
            ;
            if ((local_140 != (undefined **)0x7) && ((int)local_140 != 3)) {
                    /* try { // try from 00543ce0 to 00543cec has its CatchHandler @ 00543d7d */
              _ZN4core3ptr45drop_in_place_LT_alacritty__config__Error_GT_17hc0565752af3cd056E
                        (&local_140);
            }
          }
          else {
            local_168 = local_f0;
            local_178 = local_100;
            uStack_170 = uStack_f8;
            local_188 = local_110;
            uStack_184 = uStack_10c;
            uStack_180 = uStack_108;
            uStack_17c = uStack_104;
            local_198 = uStack_120;
            uStack_190 = uStack_118;
            uStack_18c = uStack_114;
            local_1a8 = uStack_130;
            uStack_1a0 = uStack_128;
            local_1b8 = local_140;
            uStack_1b0 = uStack_138;
                    /* try { // try from 00543aeb to 00543bb7 has its CatchHandler @ 00543d25 */
            lVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                              (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
            if (lVar2 != 0) {
              local_1d8 = (undefined8 *)&local_158;
              local_1d0 = (code *)
                          PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_009de9f8
              ;
              local_1c8 = &local_1b8;
              local_1c0 = 
              _ZN63__LT_alacritty__config__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h8f6deb2eaa2aacd3E
              ;
              local_248 = &PTR_DAT_00981eb0;
              uStack_240 = 2;
              local_228 = 0;
              uStack_238 = &local_1d8;
              local_230 = 2;
              local_1f8 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                                    (&PTR_DAT_00981ee8);
              local_218 = "alacritty_config_derive";
              ppuStack_210 = (undefined8 **)0x17;
              local_208 = &DAT_00201da1;
              local_200 = 0x11;
              _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_248,1,&local_218);
            }
                    /* try { // try from 00543bbb to 00543bc7 has its CatchHandler @ 00543d37 */
            _ZN4core3ptr45drop_in_place_LT_alacritty__config__Error_GT_17hc0565752af3cd056E
                      (&local_1b8);
          }
          _ZN4core3mem4drop17ha42964a555fb617bE(&local_158);
        }
        else {
          uStack_238 = local_a0;
          local_248 = (undefined **)CONCAT44(uStack_ac,local_b0);
          uStack_240 = CONCAT44(uStack_a4,uStack_a8);
                    /* try { // try from 005438ee to 005439b6 has its CatchHandler @ 00543d91 */
          lVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                            (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
          if (lVar2 != 0) {
            ppuStack_210 = (undefined8 **)
                           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_1b8 = (undefined **)&DAT_001e8b60;
            uStack_1b0 = 1;
            local_198 = 0;
            local_1a8 = (undefined8 **)&local_218;
            uStack_1a0 = 1;
            local_218 = (char *)&local_248;
            uStack_120 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                                   (&PTR_DAT_00981f00);
            local_140 = (undefined **)0x201748;
            uStack_138 = 0x17;
            uStack_130 = (undefined8 **)&DAT_00201da1;
            uStack_128 = 0x11;
            _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_1b8,1,&local_140);
          }
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_248);
        }
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h48ec69800376c184E
                  (&local_b8);
      } while (local_b8 != 2);
    }
                    /* try { // try from 0054384f to 0054385b has its CatchHandler @ 00543cf2 */
    _ZN4core3ptr130drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_core__result__Result_LT_std__path__PathBuf_C_alloc__string__String_GT__GT__GT_17h43a6db806a26cc75E
              (local_78);
    local_c8[2] = CONCAT17((undefined)uStack_d1,local_d8);
    local_c8[3] = CONCAT53(uStack_cd,uStack_d1._1_3_);
    *local_c8 = local_e8;
    local_c8[1] = CONCAT44(uStack_dc,uStack_e0);
  }
  return;
}