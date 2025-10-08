undefined8
_ZN8uu_chmod7Chmoder10chmod_file17h265d0431d919c569E
          (long param_1,undefined *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *******pppppppuVar10;
  uint uVar11;
  undefined auVar12 [16];
  undefined8 ******local_238;
  undefined8 local_230;
  undefined8 *local_228;
  undefined *local_220;
  undefined8 ******local_218;
  undefined8 uStack_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  code *local_1c0;
  undefined8 *local_1b8;
  code *local_1b0;
  undefined2 local_198;
  uint local_184;
  long local_180;
  undefined8 *local_178;
  undefined **local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158 [3];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined *local_100;
  undefined local_f8 [24];
  int local_e0 [2];
  undefined8 local_d8;
  uint local_a8;
  
  cVar3 = *(char *)(param_1 + 0x25);
  (*(code *)PTR__ZN6uucore8features5perms12get_metadata17hae67a64c0bebe863E_001f26d0)
            (local_e0,param_2,param_3,cVar3);
  if (local_e0[0] == 2) {
    local_158[0] = local_d8;
                    /* try { // try from 0015e99d to 0015ea29 has its CatchHandler @ 0015f046 */
    cVar1 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001f2698)
                      (param_2,param_3);
    if ((cVar3 == '\0') && (cVar1 == '\x01')) {
      if (*(char *)(param_1 + 0x22) == '\x01') {
        local_218 = (undefined8 ******)0x1;
        local_200 = CONCAT71(local_200._1_7_,1);
        local_238 = &local_218;
        local_230 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
        ;
        local_1d8 = &PTR_s_neither_symbolic_link_nor_refere_001eba70;
        uStack_1d0 = (undefined8 *******)0x2;
        local_1b8 = (undefined8 *)0x0;
        local_1c0 = (code *)0x1;
        uStack_210 = param_2;
        local_208 = param_3;
        local_1c8 = &local_238;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f26a0)(&local_1d8);
      }
      uVar8 = 0;
    }
    else {
      cVar3 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_d8);
      if (cVar3 == '\x01') {
        local_218 = (undefined8 ******)0x1;
        local_200 = CONCAT71(local_200._1_7_,1);
        local_238 = &local_218;
        local_230 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
        ;
        local_1d8 = (undefined **)&DAT_001eba90;
        uStack_1d0 = (undefined8 *******)0x2;
        local_1b8 = (undefined8 *)0x0;
        local_1c0 = (code *)0x1;
                    /* try { // try from 0015ecd3 to 0015ed10 has its CatchHandler @ 0015f046 */
        uStack_210 = param_2;
        local_208 = param_3;
        local_1c8 = &local_238;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h0f2f61c7a16737e3E(&local_140,&local_1d8);
        local_1c0 = (code *)CONCAT44(local_1c0._4_4_,1);
        local_1d8 = (undefined **)CONCAT44(uStack_13c,local_140);
        uStack_1d0 = (undefined8 *******)CONCAT44(uStack_134,uStack_138);
        local_1c8 = (undefined8 *******)local_130;
        uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3f0686e8f75aaa9dE(&local_1d8);
      }
      else {
        local_218 = (undefined8 ******)0x1;
        local_200 = CONCAT71(local_200._1_7_,1);
        local_238 = &local_218;
        local_230 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
        ;
        local_228 = local_158;
        local_220 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001f25c8
        ;
        local_1d8 = (undefined **)&DAT_001ebab0;
        uStack_1d0 = (undefined8 *******)0x2;
        local_1b8 = (undefined8 *)0x0;
        local_1c0 = (code *)0x2;
                    /* try { // try from 0015edd4 to 0015ee11 has its CatchHandler @ 0015f046 */
        uStack_210 = param_2;
        local_208 = param_3;
        local_1c8 = &local_238;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h0f2f61c7a16737e3E(&local_128,&local_1d8);
        local_1c0 = (code *)CONCAT44(local_1c0._4_4_,1);
        local_1d8 = (undefined **)CONCAT44(uStack_124,local_128);
        uStack_1d0 = (undefined8 *******)CONCAT44(uStack_11c,uStack_120);
        local_1c8 = (undefined8 *******)local_118;
        uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3f0686e8f75aaa9dE(&local_1d8);
        local_d8 = local_158[0];
      }
    }
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17he4a0a2b91febee14E(local_d8);
  }
  else {
    uVar11 = local_a8 & 0xfff;
    if (*(int *)(param_1 + 0x18) == 1) {
      uVar6 = _ZN8uu_chmod7Chmoder11change_file17ha40cda8af2f327daE
                        (param_1,uVar11,*(undefined4 *)(param_1 + 0x1c),param_2,param_3);
      if ((uVar6 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (*(code *)
                  PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_001f26d8
                )(1);
      }
    }
    else {
      local_1e0 = param_3;
      (*(code *)
        PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001f2558
      )(&local_1d8,param_1);
      local_168 = SUB84(uStack_1d0,0);
      local_218 = uStack_1d0;
      uStack_160 = SUB84(local_1c8,0);
      uStack_210 = (undefined *)local_1c8;
      if (local_1d8 == (undefined **)0x8000000000000000) {
        uVar8 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f2578)
                          (&PTR_s_src_uu_chmod_src_chmod_rs_001ebb00);
                    /* catch() { ... } // from try @ 0015ef35 with catch @ 0015f011 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(local_158);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(local_f8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(&local_170);
        uVar8 = _Unwind_Resume(uVar8);
        return uVar8;
      }
      local_170 = local_1d8;
      uStack_164 = uStack_1d0._4_4_;
      uStack_15c = local_1c8._4_4_;
      local_180 = param_1;
      _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
                (&local_1c8,uStack_1d0,local_1c8);
      local_1d8 = (undefined **)0x0;
      local_198 = 1;
      uVar5 = uVar11;
      local_184 = uVar11;
      do {
                    /* try { // try from 0015eb45 to 0015ec5b has its CatchHandler @ 0015f05e */
        auVar12 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h00c44235cf8bba42E(&local_1d8);
        lVar9 = auVar12._8_8_;
        pppppppuVar7 = auVar12._0_8_;
        if (pppppppuVar7 == (undefined8 *******)0x0) {
                    /* try { // try from 0015ed19 to 0015ed49 has its CatchHandler @ 0015f044 */
          uVar6 = _ZN8uu_chmod7Chmoder11change_file17ha40cda8af2f327daE
                            (local_180,local_184,uVar11,param_2,local_1e0);
          if ((uVar6 & 1) == 0) {
            if ((uVar11 & ~uVar5) == 0) {
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E
                        (&local_170);
              return 0;
            }
            local_238 = (undefined8 ******)&DAT_00000001;
            local_228 = local_1e0;
            local_220 = (undefined *)((ulong)local_220 & 0xffffffffffffff00);
                    /* try { // try from 0015eea4 to 0015eeb8 has its CatchHandler @ 0015f044 */
            local_230 = param_2;
            (*(code *)
              PTR__ZN6uucore8features2fs24display_permissions_unix17hf65510d5c6517b79E_001f2700)
                      (local_f8,uVar11,0);
                    /* try { // try from 0015eeb9 to 0015eece has its CatchHandler @ 0015f023 */
            (*(code *)
              PTR__ZN6uucore8features2fs24display_permissions_unix17hf65510d5c6517b79E_001f2700)
                      (local_158,uVar5,0);
            uStack_1d0 = (undefined8 *******)
                         PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
            ;
            local_1c0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_1b0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
            ;
            local_218 = (undefined8 ******)&DAT_001ebad0;
            uStack_210 = (undefined *)0x3;
            local_1f8 = 0;
            local_208 = &local_1d8;
            local_200 = 3;
                    /* try { // try from 0015ef35 to 0015ef46 has its CatchHandler @ 0015f011 */
            local_1d8 = (undefined **)&local_238;
            local_1c8 = (undefined8 *******)local_f8;
            local_1b8 = local_158;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h0f2f61c7a16737e3E(&local_110,&local_218)
            ;
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(local_158);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(local_f8);
            local_1c0 = (code *)CONCAT44(local_1c0._4_4_,1);
            local_1d8 = (undefined **)CONCAT44(uStack_10c,local_110);
            local_1c8 = (undefined8 *******)local_100;
                    /* try { // try from 0015ef83 to 0015ef8c has its CatchHandler @ 0015f044 */
            uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3f0686e8f75aaa9dE(&local_1d8);
          }
          else {
            uVar8 = (*(code *)
                      PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_001f26d8
                    )(1);
          }
          goto LAB_0015efce;
        }
        uStack_210 = (undefined *)((long)pppppppuVar7 + lVar9);
        local_218 = pppppppuVar7;
        uVar2 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h2b9d08646a37d2f9E(&local_218);
        cVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h3a7fa2694c3e6340E
                          (uVar2);
        if (cVar3 == '\0') {
          uVar4 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_001f26e8)();
          uVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001f26b0)
                            (param_2,local_1e0);
          (*(code *)PTR__ZN6uucore8features4mode14parse_symbolic17h506995bac3fe2fa2E_001f26f0)
                    (&local_238,uVar11,pppppppuVar7,lVar9,uVar4,uVar2);
          pppppppuVar10 = (undefined8 *******)local_238;
          uVar11 = (uint)local_230;
          if (local_238 == (undefined8 ******)&DAT_8000000000000000) {
            uVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001f26b0)
                              (param_2,local_1e0);
            (*(code *)PTR__ZN6uucore8features4mode14parse_symbolic17h506995bac3fe2fa2E_001f26f0)
                      (&local_218,uVar5,pppppppuVar7,lVar9,0,uVar2);
            uVar5 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3da0837ef6d99752E(&local_218);
          }
          else {
            local_178 = local_228;
            uVar5 = local_230._4_4_;
          }
        }
        else {
          uVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001f26b0)
                            (param_2,local_1e0);
          (*(code *)PTR__ZN6uucore8features4mode13parse_numeric17hf54e809090b43181E_001f26e0)
                    (&local_218,uVar11,pppppppuVar7,lVar9,uVar2);
          pppppppuVar10 = (undefined8 *******)local_218;
          uVar11 = (uint)uStack_210;
          uVar5 = (uint)uStack_210;
          if (local_218 != (undefined8 ******)&DAT_8000000000000000) {
            local_178 = local_208;
            uVar5 = uStack_210._4_4_;
          }
        }
      } while (pppppppuVar10 == (undefined8 *******)&DAT_8000000000000000);
      local_230 = (undefined *)CONCAT44(uVar5,uVar11);
      local_228 = local_178;
      local_238 = pppppppuVar10;
      if (*(char *)(local_180 + 0x21) == '\0') {
        local_208 = local_178;
        uStack_210 = (undefined *)CONCAT44(uVar5,uVar11);
        local_200 = CONCAT44(local_200._4_4_,1);
                    /* try { // try from 0015efba to 0015efc3 has its CatchHandler @ 0015f035 */
        local_218 = pppppppuVar10;
        uVar8 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3f0686e8f75aaa9dE(&local_218);
      }
      else {
                    /* try { // try from 0015ee5d to 0015ee67 has its CatchHandler @ 0015f037 */
        uVar8 = (*(code *)PTR__ZN6uucore4mods5error8ExitCode3new17hdcf0963f6fc7caedE_001f26f8)(1);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(&local_238);
      }
LAB_0015efce:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3560958025c3e8c7E(&local_170);
    }
  }
  return uVar8;
}