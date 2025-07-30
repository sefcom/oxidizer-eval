undefined4 *
_ZN7flealib9systemcmd9SystemCmd15get_system_info17h3c3ed6186f7b791aE
          (undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auVar9 [16];
  undefined8 local_258;
  undefined8 uStack_250;
  ulong *local_248;
  code *local_240;
  ulong *local_238;
  code *local_230;
  undefined8 *local_228;
  code *local_220;
  undefined8 *local_218;
  undefined *local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  long local_1b8;
  ulong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  long local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulong local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long local_138;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  long local_b0;
  undefined local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *local_50;
  undefined local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_e8 = param_1;
  (*(code *)PTR__ZN7sysinfo6common6System11refresh_all17h1fc83b5cbd010d91E_00828370)(param_2);
  (*(code *)PTR__ZN7sysinfo6common6System4name17hc8bf6cc3ec672ee2E_00828378)(&local_200);
  local_198 = (long)local_1f0;
  uStack_1a0 = (undefined4)uStack_1f8;
  uStack_19c = uStack_1f8._4_4_;
                    /* try { // try from 0047375a to 00473789 has its CatchHandler @ 00474116 */
  (*(code *)PTR__ZN7sysinfo6common6System14kernel_version17hcc467c07b3576e64E_00828380)(&local_200);
  if (local_200 == (undefined **)0x8000000000000000) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_258,&DAT_0016a90c,9);
    local_108 = (long)local_248;
    uVar5 = (undefined4)local_258;
    uVar6 = local_258._4_4_;
    uStack_110 = (undefined4)uStack_250;
    uStack_10c = uStack_250._4_4_;
  }
  else {
    local_108 = (long)local_1f0;
    uVar5 = (undefined4)local_200;
    uVar6 = local_200._4_4_;
    uStack_110 = (undefined4)uStack_1f8;
    uStack_10c = uStack_1f8._4_4_;
  }
  local_118 = (undefined *)CONCAT44(uVar6,uVar5);
                    /* try { // try from 004737b7 to 004737dc has its CatchHandler @ 00474104 */
  (*(code *)PTR__ZN7sysinfo6common6System10os_version17h91e4287681b99a77E_00828388)(&local_200);
  if (local_200 == (undefined **)0x8000000000000000) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_258,&DAT_0016a90c,9);
    local_178 = (long)local_248;
    uVar5 = (undefined4)local_258;
    uVar6 = local_258._4_4_;
    uVar7 = (undefined4)uStack_250;
    uVar8 = uStack_250._4_4_;
  }
  else {
    local_178 = (long)local_1f0;
    uVar5 = (undefined4)local_200;
    uVar6 = local_200._4_4_;
    uVar7 = (undefined4)uStack_1f8;
    uVar8 = uStack_1f8._4_4_;
  }
  local_188 = (undefined *)CONCAT44(uVar6,uVar5);
  uStack_180 = (undefined *)CONCAT44(uVar8,uVar7);
                    /* try { // try from 0047380a to 0047382f has its CatchHandler @ 004740f2 */
  (*(code *)PTR__ZN7sysinfo6common6System15long_os_version17had50b3c9957b05a9E_00828390)(&local_200)
  ;
  if (local_200 == (undefined **)0x8000000000000000) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_258,&DAT_0016a90c,9);
    local_138 = (long)local_248;
  }
  else {
    local_138 = (long)local_1f0;
    local_258._0_4_ = (undefined4)local_200;
    local_258._4_4_ = local_200._4_4_;
    uStack_250._0_4_ = (undefined4)uStack_1f8;
    uStack_250._4_4_ = uStack_1f8._4_4_;
  }
  local_148 = (undefined8 *)CONCAT44(local_258._4_4_,(undefined4)local_258);
  uStack_140 = (code *)CONCAT44(uStack_250._4_4_,(undefined4)uStack_250);
  local_c8 = *(undefined8 *)(param_2 + 0x118);
  local_258 = &local_1a8;
  uStack_250 = 
  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Debug_GT_3fmt17h1887dc6ebeddb523E;
  local_248 = &local_118;
  local_240 = 
  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Debug_GT_3fmt17h1887dc6ebeddb523E;
  local_238 = &local_188;
  local_230 = 
  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Debug_GT_3fmt17h1887dc6ebeddb523E;
  local_228 = &local_148;
  local_220 = 
  _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Debug_GT_3fmt17h1887dc6ebeddb523E;
  local_218 = &local_c8;
  local_210 = 
  PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826f00
  ;
  local_200 = &PTR_DAT_00808fe0;
  uStack_1f8 = (code *)0x6;
  local_1e0 = 0;
  local_1e8 = 5;
                    /* try { // try from 00473902 to 00473913 has its CatchHandler @ 004740e0 */
  local_1f0 = (undefined *)&local_258;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_e0,&local_200);
                    /* try { // try from 00473914 to 00473920 has its CatchHandler @ 004740a4 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_148);
                    /* try { // try from 00473921 to 00473930 has its CatchHandler @ 0047409f */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_188);
                    /* try { // try from 00473931 to 00473940 has its CatchHandler @ 0047409a */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_118);
                    /* try { // try from 00473941 to 00473950 has its CatchHandler @ 00474095 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_1a8);
  local_1c8 = local_e0;
  uStack_1c4 = uStack_dc;
  uStack_1c0 = uStack_d8;
  uStack_1bc = uStack_d4;
  local_1b8 = local_d0;
  local_1a8 = *(ulong *)(param_2 + 0x168) >> 0x14;
  local_118 = (undefined *)(*(ulong *)(param_2 + 0x168) - *(long *)(param_2 + 0x178) >> 0x14);
  local_188 = (undefined *)(*(ulong *)(param_2 + 0x1a0) >> 0x14);
  local_148 = (undefined8 *)(*(ulong *)(param_2 + 0x1a0) - *(long *)(param_2 + 0x1a8) >> 0x14);
  uStack_250 = (code *)
               PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
  ;
  local_240 = (code *)
              PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
  ;
  local_230 = (code *)
              PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
  ;
  local_228 = &local_148;
  local_220 = (code *)
              PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
  ;
  local_200 = &PTR_DAT_00809040;
  uStack_1f8 = (code *)0x5;
  local_1e0 = 0;
  local_1e8 = 4;
                    /* try { // try from 00473a28 to 00473a39 has its CatchHandler @ 0047408d */
  local_258 = &local_1a8;
  local_248 = &local_118;
  local_238 = &local_188;
  local_1f0 = (undefined *)&local_258;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(local_a8,&local_200);
  uStack_c0 = uStack_a0;
  uStack_bc = uStack_9c;
  local_b8 = local_98;
                    /* try { // try from 00473a65 to 00473aa6 has its CatchHandler @ 00474135 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (&local_1c8,CONCAT44(uStack_9c,uStack_a0),local_98,
             &PTR_s__root__rustup_toolchains_nightly_00808e40);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (&local_1c8,&DAT_001514b8,8,&PTR_s__root__rustup_toolchains_nightly_00808e40);
  (*(code *)PTR__ZN7sysinfo6common5Users23new_with_refreshed_list17hc9341fa093dbadfbE_00828398)
            (&local_e0);
  local_188 = (undefined *)CONCAT44(uStack_d4,uStack_d8);
  uStack_180 = local_188 + local_d0 * 0x38;
  lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h99f0c75d64c9b8bdE
                    (&local_188);
  if (lVar1 != 0) {
    do {
      local_200 = *(undefined ***)(lVar1 + 8);
      uStack_1f8 = *(code **)(lVar1 + 0x10);
      local_148 = &local_200;
      uStack_140 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h4fef948cf25803d9E;
      local_258 = (ulong *)&DAT_00809090;
      uStack_250 = (code *)0x2;
      local_238 = (ulong *)0x0;
      local_248 = &local_148;
      local_240 = (code *)&DAT_00000001;
                    /* try { // try from 00473b61 to 00473b6b has its CatchHandler @ 00474175 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_90,&local_258);
      local_258 = (ulong *)CONCAT44(uStack_8c,local_90);
      uStack_250 = (code *)CONCAT44(uStack_84,uStack_88);
      local_248 = local_80;
                    /* try { // try from 00473b8a to 00473b94 has its CatchHandler @ 00474153 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
                (&local_1c8,uStack_250,local_80,&PTR_s__root__rustup_toolchains_nightly_00808e40);
                    /* try { // try from 00473b95 to 00473b9c has its CatchHandler @ 00474175 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_258);
      lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h99f0c75d64c9b8bdE
                        (&local_188);
    } while (lVar1 != 0);
  }
                    /* try { // try from 00473bb1 to 00473bde has its CatchHandler @ 00474130 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (&local_1c8,&DAT_001514c0,8,&PTR_s__root__rustup_toolchains_nightly_00808e40);
  (*(code *)PTR__ZN7sysinfo6common5Disks23new_with_refreshed_list17hf6ff7270f4a59d10E_008283a0)
            (&local_1a8);
  local_148 = (undefined8 *)CONCAT44(uStack_19c,uStack_1a0);
  uStack_140 = (code *)(local_198 * 0x70 + (long)local_148);
  puVar2 = (undefined *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h77f06b596fc16c2cE
                     (&local_148);
  if (puVar2 != (undefined *)0x0) {
    do {
      local_200 = (undefined **)&local_188;
      uStack_1f8 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17hd6a74c119766a180E;
      local_258 = (ulong *)&DAT_00809090;
      uStack_250 = (code *)0x2;
      local_238 = (ulong *)0x0;
      local_248 = &local_200;
      local_240 = (code *)&DAT_00000001;
      local_188 = puVar2;
                    /* try { // try from 00473c9a to 00473ca4 has its CatchHandler @ 0047416d */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_78,&local_258);
      local_258 = (ulong *)CONCAT44(uStack_74,local_78);
      uStack_250 = (code *)CONCAT44(uStack_6c,uStack_70);
      local_248 = local_68;
                    /* try { // try from 00473cc3 to 00473ccd has its CatchHandler @ 00474146 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
                (&local_1c8,uStack_250,local_68,&PTR_s__root__rustup_toolchains_nightly_00808e40);
                    /* try { // try from 00473cce to 00473cd5 has its CatchHandler @ 0047416d */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_258);
      puVar2 = (undefined *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h77f06b596fc16c2cE
                         (&local_148);
    } while (puVar2 != (undefined *)0x0);
  }
                    /* try { // try from 00473cea to 00473d17 has its CatchHandler @ 0047412b */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (&local_1c8,&DAT_0016a9a2,0xb,&PTR_s__root__rustup_toolchains_nightly_00808e40);
  uVar3 = (*(code *)
            PTR__ZN7sysinfo6common8Networks23new_with_refreshed_list17h25bd9e7c6d3d576fE_008283a8)
                    (&local_148);
  local_1cc = (undefined4)CONCAT71((int7)((ulong)uVar3 >> 8),1);
                    /* try { // try from 00473d21 to 00473d36 has its CatchHandler @ 0047413a */
  (*(code *)
    PTR__ZN91__LT__RF_sysinfo__common__Networks_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h7522801a2b36065dE_008283b0
  )(&local_118,&local_148);
  local_168 = local_f8;
  local_178 = local_108;
  uStack_170 = uStack_100;
  local_188 = local_118;
  uStack_180 = (undefined *)CONCAT44(uStack_10c,uStack_110);
                    /* try { // try from 00473d90 to 00473e48 has its CatchHandler @ 0047417d */
  while (auVar9 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd0a113598629af8cE
                            (&local_188), auVar9._0_8_ != 0) {
    local_b0 = auVar9._0_8_;
    local_158 = (*(code *)PTR__ZN7sysinfo6common11NetworkData8received17hce5ace0c2b1a9bd9E_008283b8)
                          (auVar9._8_8_);
    local_150 = (*(code *)
                  PTR__ZN7sysinfo6common11NetworkData11transmitted17haabfd62a8ffb692dE_008283c0)
                          (auVar9._8_8_);
    local_258 = (ulong *)&local_b0;
    uStack_250 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49740bff2e11fb82E;
    local_248 = &local_158;
    local_240 = (code *)
                PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
    ;
    local_238 = &local_150;
    local_230 = (code *)
                PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
    ;
    local_200 = (undefined **)&DAT_008090b0;
    uStack_1f8 = (code *)0x4;
    local_1e0 = 0;
    local_1e8 = 3;
    local_1f0 = (undefined *)&local_258;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_60,&local_200);
    local_258 = (ulong *)CONCAT44(uStack_5c,local_60);
    uStack_250 = (code *)CONCAT44(uStack_54,uStack_58);
    local_248 = local_50;
                    /* try { // try from 00473e67 to 00473e71 has its CatchHandler @ 00474160 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
              (&local_1c8,uStack_250,local_50,&PTR_s__root__rustup_toolchains_nightly_00808e40);
                    /* try { // try from 00473e72 to 00473e79 has its CatchHandler @ 0047417d */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_258);
  }
                    /* try { // try from 00473e7f to 00473fc4 has its CatchHandler @ 0047413a */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (&local_1c8,&DAT_0016a9ad,9,&PTR_s__root__rustup_toolchains_nightly_00808e40);
  uVar4 = (*(code *)PTR__ZN7sysinfo6common6System6uptime17hd8c74ee8b2c1dd18E_008283c8)();
  local_158 = uVar4 / 0x15180;
  local_150 = (uVar4 % 0x15180) / 0xe10;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar4 >> 4;
  local_118 = (undefined *)
              (ulong)(((int)uVar4 + (SUB164(auVar9 * ZEXT816(0x91a2b3c4d5e6f81),8) >> 3) * -0xe10) *
                      0x889 >> 0x11);
  local_188 = (undefined *)(uVar4 % 0x3c);
  local_258 = &local_158;
  uStack_250 = (code *)
               PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
  ;
  local_248 = &local_150;
  local_240 = (code *)
              PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
  ;
  local_238 = &local_118;
  local_230 = (code *)
              PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
  ;
  local_228 = &local_188;
  local_220 = (code *)
              PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hd4045afa779c3cf5E_00826b78
  ;
  local_200 = &PTR_DAT_008090f0;
  uStack_1f8 = (code *)0x5;
  local_1e0 = 0;
  local_1e8 = 4;
  local_1f0 = (undefined *)&local_258;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(local_48,&local_200);
  uStack_250 = (code *)CONCAT44(uStack_3c,uStack_40);
  local_248 = (ulong *)local_38;
                    /* try { // try from 00473fe3 to 00473ff6 has its CatchHandler @ 0047407d */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (&local_1c8,uStack_250,local_38,&PTR_s__root__rustup_toolchains_nightly_00808e40);
  *(long *)(local_e8 + 4) = local_1b8;
  *local_e8 = local_1c8;
  local_e8[1] = uStack_1c4;
  local_e8[2] = uStack_1c0;
  local_e8[3] = uStack_1bc;
  local_1cc = 0;
                    /* try { // try from 00474021 to 00474028 has its CatchHandler @ 0047413a */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_258);
                    /* try { // try from 0047402b to 00474037 has its CatchHandler @ 0047412b */
  _ZN4core3ptr46drop_in_place_LT_sysinfo__common__Networks_GT_17hcdfd34bc85985594E(&local_148);
                    /* try { // try from 0047403a to 00474046 has its CatchHandler @ 00474130 */
  _ZN4core3ptr43drop_in_place_LT_sysinfo__common__Disks_GT_17hdce72d6d44ef7e4dE(&local_1a8);
                    /* try { // try from 00474049 to 00474055 has its CatchHandler @ 00474135 */
  _ZN4core3ptr43drop_in_place_LT_sysinfo__common__Users_GT_17h65685925c652bcdaE(&local_e0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_c8);
  return local_e8;
}