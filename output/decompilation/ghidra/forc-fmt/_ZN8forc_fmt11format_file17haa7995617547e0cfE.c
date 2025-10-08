void _ZN8forc_fmt11format_file17haa7995617547e0cfE
               (undefined *param_1,uint param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined uVar8;
  undefined auVar9 [16];
  undefined8 **local_208;
  undefined8 **ppuStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 **local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  undefined *puStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 **local_190;
  undefined *local_188;
  undefined *local_180;
  undefined8 **local_178;
  undefined8 **local_170;
  undefined8 **ppuStack_168;
  undefined8 **local_160;
  undefined *local_158;
  undefined *local_150;
  undefined8 **local_148;
  undefined8 **ppuStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 **local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 **local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_b0 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined local_90 [24];
  undefined local_78 [24];
  undefined local_60 [24];
  undefined local_48 [24];
  
                    /* try { // try from 004d3844 to 004d3861 has its CatchHandler @ 004d42ce */
  _ZN3std2fs12canonicalize17h8663464358d35797E
            (&local_208,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  local_178 = local_208;
  local_170 = ppuStack_200;
  ppuStack_168 = local_1f8;
                    /* try { // try from 004d388c to 004d39bd has its CatchHandler @ 004d42e1 */
  cVar4 = _ZN9forc_util10fs_locking13is_file_dirty17h52e075c7d4f79131E(&local_178);
  if (cVar4 == '\0') {
    _ZN3std2fs14read_to_string17h72615f83e87f7dcfE(&local_120,&local_178);
    if (CONCAT44(uStack_11c,local_120) != -0x8000000000000000) {
      local_e8 = local_110;
      local_f8 = local_120;
      uStack_f4 = uStack_11c;
      uStack_f0 = uStack_118;
      uStack_ec = uStack_114;
                    /* try { // try from 004d3a15 to 004d3a37 has its CatchHandler @ 004d42ba */
      (*(code *)
        PTR__ZN79__LT_sway_types__span__Source_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17had989f4edbe327dcE_0096b450
      )(&local_208,CONCAT44(uStack_114,uStack_118),local_110);
      (*(code *)PTR__ZN7swayfmt9formatter9Formatter6format17h30769b7fb1ed121cE_0096b458)
                (local_b0,param_4,&local_208);
      if (local_b0[0] == 1) {
        local_198 = local_98;
        local_1a8 = local_a8;
        uStack_1a4 = uStack_a4;
        uStack_1a0 = uStack_a0;
        uStack_19c = uStack_9c;
        uVar6 = _ZN4core4sync6atomic11atomic_load17h0943286c275b0a82E
                          (PTR__ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E_0096b460);
                    /* try { // try from 004d3a7f to 004d3bb4 has its CatchHandler @ 004d42e6 */
        if (((uVar6 == 5) || (1 < uVar6)) ||
           ((cVar4 = _ZN12tracing_core8callsite15DefaultCallsite8interest17h44bc8806352c8553E
                               (&_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E),
            cVar4 == '\0' ||
            (cVar4 = (*(code *)
                       PTR__ZN7tracing15__macro_support12__is_enabled17hb2603213f716e822E_0096b468)
                               (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E,cVar4),
            puVar2 = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E, cVar4 == '\0')))) {
          cVar4 = _ZN4core4sync6atomic11atomic_load17h6834916517087897E
                            (PTR__ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE_0096b478);
          if ((cVar4 == '\0') &&
             (uVar6 = _ZN4core4sync6atomic11atomic_load17h0943286c275b0a82E
                                (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E_0096b480),
             puVar2 = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E, 3 < uVar6)) {
            uStack_c0 = *(undefined4 *)
                         (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x20);
            uStack_bc = *(undefined4 *)
                         (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x24);
            uStack_b8 = *(undefined4 *)
                         (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x28);
            uStack_b4 = *(undefined4 *)
                         (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x2c);
            local_c8 = (undefined8 **)&DAT_00000004;
                    /* try { // try from 004d3d9a to 004d3f7d has its CatchHandler @ 004d42e6 */
            auVar9 = (*(code *)PTR__ZN3log6logger17hda83ce6e5b01f630E_0096b488)();
            cVar4 = (**(code **)(auVar9._8_8_ + 0x18))(auVar9._0_8_,&local_c8);
            puVar3 = _ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E;
            if (cVar4 != '\0') {
              local_1b0 = *(undefined8 *)
                           (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x38);
              local_1d8 = *(undefined8 ***)
                           (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x30);
              uStack_1d0 = *(code **)(_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E +
                                     0x38);
              local_1c8 = *(undefined8 **)
                           (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x40);
              puStack_1c0 = *(undefined **)
                             (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x48);
              local_1b8 = 0;
              _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
                        (&local_208,&local_1d8);
              if ((undefined8 ***)local_208 == (undefined8 ***)0x0) goto LAB_004d4284;
              local_150 = puVar3 + 0x30;
              local_128 = local_1e8;
              local_138 = (undefined4)local_1f8;
              uStack_134 = local_1f8._4_4_;
              uStack_130 = (undefined4)uStack_1f0;
              uStack_12c = uStack_1f0._4_4_;
              local_148 = local_208;
              ppuStack_140 = ppuStack_200;
              local_108 = (undefined8 **)&local_1a8;
              local_100 = 
              PTR__ZN69__LT_swayfmt__error__FormatterError_u20_as_u20_core__fmt__Display_GT_3fmt17h9f01dec83858b98dE_0096b470
              ;
              local_208 = (undefined8 **)&DAT_00266a30;
              ppuStack_200 = (undefined8 **)&DAT_00000001;
              local_1e8 = 0;
              local_1f8 = &local_108;
              uStack_1f0 = 1;
              local_190 = &local_148;
              local_180 = &DAT_0090a3a8;
              local_160 = &local_190;
              local_158 = &DAT_00000001;
              local_1c8 = (undefined8 *)CONCAT44(uStack_b4,uStack_b8);
              local_1d8 = local_c8;
              uStack_1d0 = (code *)CONCAT44(uStack_bc,uStack_c0);
              local_188 = (undefined *)&local_208;
              (*(code *)PTR__ZN7tracing15__macro_support13__tracing_log17h4c7a43eb8e34734dE_0096b490
              )(puVar2,auVar9._0_8_,auVar9._8_8_,&local_1d8,&local_160);
            }
          }
        }
        else {
          local_1b0 = *(undefined8 *)
                       (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x38);
          local_1d8 = *(undefined8 ***)
                       (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x30);
          uStack_1d0 = *(code **)(_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x38);
          local_1c8 = *(undefined8 **)
                       (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x40);
          puStack_1c0 = *(undefined **)
                         (_ZN8forc_fmt11format_file10__CALLSITE17ha66ca9d00a1fcf17E + 0x48);
          local_1b8 = 0;
          _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
                    (&local_208,&local_1d8);
          if ((undefined8 ***)local_208 == (undefined8 ***)0x0) {
LAB_004d4284:
                    /* try { // try from 004d4284 to 004d429c has its CatchHandler @ 004d42e6 */
            (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0096b1b0)
                      ("FieldSet corrupted (this is a bug)",0x22,
                       &PTR_s_forc_plugins_forc_fmt_src_main_r_0090a3c8);
LAB_004d42b8:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_1c8 = (undefined8 *)(puVar2 + 0x30);
          local_128 = local_1e8;
          local_138 = (undefined4)local_1f8;
          uStack_134 = local_1f8._4_4_;
          uStack_130 = (undefined4)uStack_1f0;
          uStack_12c = uStack_1f0._4_4_;
          local_148 = local_208;
          ppuStack_140 = ppuStack_200;
          local_160 = (undefined8 **)&local_1a8;
          local_158 = 
          PTR__ZN69__LT_swayfmt__error__FormatterError_u20_as_u20_core__fmt__Display_GT_3fmt17h9f01dec83858b98dE_0096b470
          ;
          local_208 = (undefined8 **)&DAT_00266a30;
          ppuStack_200 = (undefined8 **)&DAT_00000001;
          local_1e8 = 0;
          local_1f8 = &local_160;
          uStack_1f0 = 1;
          local_190 = &local_148;
          local_180 = &DAT_0090a3a8;
          local_1d8 = &local_190;
          uStack_1d0 = (code *)&DAT_00000001;
          local_188 = (undefined *)&local_208;
          _ZN8forc_fmt11format_file28__u7b__u7b_closure_u7d__u7d_17hef3f61598dec167fE(&local_1d8);
        }
        (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0096b1d0)
                  (&local_208,local_170,ppuStack_168);
        if (((ulong)local_208 & 1) == 0) {
          local_148 = ppuStack_200;
          ppuStack_140 = local_1f8;
          local_1d8 = &local_148;
          uStack_1d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha3e4e52859be5cf4E;
          local_1c8 = (undefined8 *)&local_1a8;
          puStack_1c0 = 
          PTR__ZN69__LT_swayfmt__error__FormatterError_u20_as_u20_core__fmt__Display_GT_3fmt17h9f01dec83858b98dE_0096b470
          ;
          local_208 = (undefined8 **)&PTR_s_Failed_to_compile_0090a350;
          ppuStack_200 = (undefined8 ***)0x2;
          local_1e8 = 0;
          local_1f8 = &local_1d8;
          uStack_1f0 = 2;
                    /* try { // try from 004d402f to 004d404d has its CatchHandler @ 004d42e6 */
          _ZN4core6option15Option_LT_T_GT_11map_or_else17he9085a4e14fd35e7E
                    (local_78,0,extraout_RDX_01,&local_208);
          uVar5 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hbb2939ea4f0c1592E
                            (local_78);
        }
        else {
          local_1d8 = (undefined8 **)&local_1a8;
          uStack_1d0 = (code *)
                       PTR__ZN69__LT_swayfmt__error__FormatterError_u20_as_u20_core__fmt__Display_GT_3fmt17h9f01dec83858b98dE_0096b470
          ;
          local_208 = (undefined8 **)&PTR_s_Failed_to_compile__0090a370;
          ppuStack_200 = (undefined8 **)&DAT_00000001;
          local_1e8 = 0;
          local_1f8 = &local_1d8;
          uStack_1f0 = 1;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17he9085a4e14fd35e7E
                    (local_60,0,extraout_RDX_01,&local_208);
          uVar5 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hbb2939ea4f0c1592E
                            (local_60);
        }
        *(undefined8 *)(param_1 + 8) = uVar5;
        *param_1 = 1;
                    /* try { // try from 004d4056 to 004d405f has its CatchHandler @ 004d42ba */
        _ZN4core3ptr51drop_in_place_LT_swayfmt__error__FormatterError_GT_17h10b3491a4392cacfE
                  (&local_1a8);
      }
      else {
        local_198 = local_98;
        local_1a8 = local_a8;
        uStack_1a4 = uStack_a4;
        uStack_1a0 = uStack_a0;
        uStack_19c = uStack_9c;
        if ((param_2 & 1) == 0) {
                    /* try { // try from 004d3f9d to 004d3fa1 has its CatchHandler @ 004d42bf */
          lVar7 = _ZN8forc_fmt20write_file_formatted17ha4a188379ce620baE
                            (local_170,ppuStack_168,CONCAT44(uStack_9c,uStack_a0),local_98);
          if (lVar7 == 0) goto LAB_004d4065;
          *(long *)(param_1 + 8) = lVar7;
          uVar8 = 1;
        }
        else {
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h2ec768a733a62c1aE
                            (CONCAT44(uStack_114,uStack_118),local_110,CONCAT44(uStack_9c,uStack_a0)
                             ,local_98);
          if (cVar4 == '\0') {
            uVar6 = _ZN4core4sync6atomic11atomic_load17h0943286c275b0a82E
                              (PTR__ZN12tracing_core8metadata9MAX_LEVEL17he61cb0e5fc6f5f25E_0096b460
                              );
                    /* try { // try from 004d3c12 to 004d3d4a has its CatchHandler @ 004d42bf */
            if ((((uVar6 == 5) || (2 < uVar6)) ||
                (cVar4 = _ZN12tracing_core8callsite15DefaultCallsite8interest17h44bc8806352c8553E
                                   (&_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E),
                cVar4 == '\0')) ||
               (cVar4 = (*(code *)
                          PTR__ZN7tracing15__macro_support12__is_enabled17hb2603213f716e822E_0096b468
                        )(_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E,cVar4),
               puVar2 = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E, cVar4 == '\0')) {
              cVar4 = _ZN4core4sync6atomic11atomic_load17h6834916517087897E
                                (
                                PTR__ZN12tracing_core10dispatcher6EXISTS17h25c10194e397632bE_0096b478
                                );
              if ((cVar4 == '\0') &&
                 (uVar6 = _ZN4core4sync6atomic11atomic_load17h0943286c275b0a82E
                                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h8b86a041fa92d435E_0096b480)
                 , puVar2 = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E, 2 < uVar6)) {
                uStack_d8 = *(undefined4 *)
                             (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x20);
                uStack_d4 = *(undefined4 *)
                             (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x24);
                uStack_d0 = *(undefined4 *)
                             (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x28);
                uStack_cc = *(undefined4 *)
                             (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x2c);
                local_e0 = (undefined8 ***)0x3;
                    /* try { // try from 004d40b7 to 004d4239 has its CatchHandler @ 004d42bf */
                auVar9 = (*(code *)PTR__ZN3log6logger17hda83ce6e5b01f630E_0096b488)();
                cVar4 = (**(code **)(auVar9._8_8_ + 0x18))(auVar9._0_8_,&local_e0);
                puVar3 = _ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E;
                if (cVar4 != '\0') {
                  local_1b0 = *(undefined8 *)
                               (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x38);
                  local_1d8 = *(undefined8 ***)
                               (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x30);
                  uStack_1d0 = *(code **)(_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E
                                         + 0x38);
                  local_1c8 = *(undefined8 **)
                               (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x40);
                  puStack_1c0 = *(undefined **)
                                 (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x48);
                  local_1b8 = 0;
                  _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
                            (&local_208,&local_1d8);
                  if ((undefined8 ***)local_208 == (undefined8 ***)0x0) goto LAB_004d429f;
                  local_150 = puVar3 + 0x30;
                  local_128 = local_1e8;
                  local_138 = (undefined4)local_1f8;
                  uStack_134 = local_1f8._4_4_;
                  uStack_130 = (undefined4)uStack_1f0;
                  uStack_12c = uStack_1f0._4_4_;
                  local_148 = local_208;
                  ppuStack_140 = ppuStack_200;
                  local_108 = &local_178;
                  local_100 = 
                  PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_0096b100
                  ;
                  local_208 = (undefined8 **)&PTR_s_File_was_edited_by_formatter__0090a330;
                  ppuStack_200 = (undefined8 ***)0x2;
                  local_1e8 = 0;
                  local_1f8 = &local_108;
                  uStack_1f0 = 1;
                  local_190 = &local_148;
                  local_180 = &DAT_0090a3a8;
                  local_160 = &local_190;
                  local_158 = &DAT_00000001;
                  local_1c8 = (undefined8 *)CONCAT44(uStack_cc,uStack_d0);
                  local_1d8 = local_e0;
                  uStack_1d0 = (code *)CONCAT44(uStack_d4,uStack_d8);
                  local_188 = (undefined *)&local_208;
                  (*(code *)
                    PTR__ZN7tracing15__macro_support13__tracing_log17h4c7a43eb8e34734dE_0096b490)
                            (puVar2,auVar9._0_8_,auVar9._8_8_,&local_1d8,&local_160);
                }
              }
            }
            else {
              local_1b0 = *(undefined8 *)
                           (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x38);
              local_1d8 = *(undefined8 ***)
                           (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x30);
              uStack_1d0 = *(code **)(_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E +
                                     0x38);
              local_1c8 = *(undefined8 **)
                           (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x40);
              puStack_1c0 = *(undefined **)
                             (_ZN8forc_fmt11format_file10__CALLSITE17h6facfa2d190e6fa1E + 0x48);
              local_1b8 = 0;
              _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h062fa63b7cc5c6bcE
                        (&local_208,&local_1d8);
              if ((undefined8 ***)local_208 == (undefined8 ***)0x0) {
LAB_004d429f:
                    /* try { // try from 004d429f to 004d42b7 has its CatchHandler @ 004d42bf */
                (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0096b1b0)
                          ("FieldSet corrupted (this is a bug)",0x22,
                           &PTR_s_forc_plugins_forc_fmt_src_main_r_0090a390);
                goto LAB_004d42b8;
              }
              local_1c8 = (undefined8 *)(puVar2 + 0x30);
              local_128 = local_1e8;
              local_138 = (undefined4)local_1f8;
              uStack_134 = local_1f8._4_4_;
              uStack_130 = (undefined4)uStack_1f0;
              uStack_12c = uStack_1f0._4_4_;
              local_148 = local_208;
              ppuStack_140 = ppuStack_200;
              local_160 = &local_178;
              local_158 = 
              PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_0096b100
              ;
              local_208 = (undefined8 **)&PTR_s_File_was_edited_by_formatter__0090a330;
              ppuStack_200 = (undefined8 ***)0x2;
              local_1e8 = 0;
              local_1f8 = &local_160;
              uStack_1f0 = 1;
              local_190 = &local_148;
              local_180 = &DAT_0090a3a8;
              local_1d8 = &local_190;
              uStack_1d0 = (code *)&DAT_00000001;
              local_188 = (undefined *)&local_208;
              _ZN8forc_fmt11format_file28__u7b__u7b_closure_u7d__u7d_17h4f22a50aa6b70671E
                        (&local_1d8);
            }
            uVar8 = 1;
            _ZN8forc_fmt17display_file_diff17h0e6791d1d0ed248fE
                      (CONCAT44(uStack_ec,uStack_f0),local_e8,CONCAT44(uStack_19c,uStack_1a0),
                       local_198);
          }
          else {
LAB_004d4065:
            uVar8 = 0;
          }
          param_1[1] = uVar8;
          uVar8 = 0;
        }
        *param_1 = uVar8;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he4f3a1149946cfddE(&local_1a8);
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he4f3a1149946cfddE(&local_f8);
      if (CONCAT44(uStack_11c,local_120) == -0x8000000000000000) {
                    /* try { // try from 004d4272 to 004d427e has its CatchHandler @ 004d42e1 */
        _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__io__error__Error_GT__GT_17hcc2236c43ea66e8eE
                  (&local_120);
      }
      goto LAB_004d39c6;
    }
    _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__io__error__Error_GT__GT_17hcc2236c43ea66e8eE
              (&local_120);
    uStack_1d0 = (code *)
                 PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_0096b100
    ;
    local_208 = (undefined8 **)&PTR_s_Could_not_read_file__0090a380;
    ppuStack_200 = (undefined8 **)&DAT_00000001;
    local_1e8 = 0;
    local_1f8 = &local_1d8;
    uStack_1f0 = 1;
    local_1d8 = &local_178;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17he9085a4e14fd35e7E
              (local_48,0,extraout_RDX_00,&local_208);
    uVar5 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hbb2939ea4f0c1592E(local_48);
  }
  else {
    local_1d8 = local_170;
    uStack_1d0 = (code *)ppuStack_168;
    local_148 = &local_1d8;
    ppuStack_140 = (undefined8 **)
                   PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_0096b3c0
    ;
    local_208 = (undefined8 **)&PTR_s_The_below_file_is_open_in_an_edi_0090a320;
    ppuStack_200 = (undefined8 **)&DAT_00000001;
    local_1e8 = 0;
    local_1f8 = &local_148;
    uStack_1f0 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17he9085a4e14fd35e7E
              (local_90,0,extraout_RDX,&local_208);
    uVar5 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17hbb2939ea4f0c1592E(local_90);
  }
  *(undefined8 *)(param_1 + 8) = uVar5;
  *param_1 = 1;
LAB_004d39c6:
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he39d626ec3977c8fE(&local_178);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he39d626ec3977c8fE(param_3);
  return;
}