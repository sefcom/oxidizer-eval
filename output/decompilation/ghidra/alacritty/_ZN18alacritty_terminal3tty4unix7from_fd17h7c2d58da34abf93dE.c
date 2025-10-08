long * _ZN18alacritty_terminal3tty4unix7from_fd17h7c2d58da34abf93dE
                 (long *param_1,long *param_2,undefined8 param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  long *plVar10;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined **local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  int iStack_280;
  int iStack_27c;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 *local_1b8;
  code *local_1b0;
  undefined8 *local_1a8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  int local_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  int iStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined local_48 [24];
  
                    /* try { // try from 006bf1c9 to 006bf22c has its CatchHandler @ 006bf8ee */
  local_2e4 = param_5;
  local_2e0 = param_4;
  _ZN6rustix7termios2tc9tcgetattr17h8d132d3fad628f9eE(&local_298,&local_2e0);
  if (((ulong)local_298 & 1) == 0) {
    uStack_108 = uStack_278._4_4_;
    uStack_104 = local_270;
    uStack_100 = uStack_26c;
    uStack_118 = uStack_288._4_4_;
    iStack_114 = iStack_280;
    iStack_110 = iStack_27c;
    local_10c = (undefined4)uStack_278;
    local_128 = local_298._4_4_;
    uStack_124 = uStack_290;
    uStack_120 = uStack_28c;
    uStack_11c = (undefined4)uStack_288;
    _ZN6rustix7termios5types1_16InternalBitFlags3set17hf46eb19ff63243dfE(&local_128);
    _ZN6rustix7termios2tc9tcsetattr17he3b85e685d9dfa97E(&local_2e0,&local_128);
  }
  _ZN18alacritty_terminal3tty4unix9ShellUser8from_env17h848b16d69b8782c0E(&local_298);
  local_2a8 = CONCAT44(uStack_28c,uStack_290);
  local_2b0 = local_298;
  local_178 = CONCAT44(uStack_288._4_4_,(undefined4)uStack_288);
  local_2c0 = CONCAT44(iStack_27c,iStack_280);
  local_2b8 = uStack_278;
  local_180 = CONCAT44(uStack_26c,local_270);
  local_2d8 = local_268;
  local_2d0 = local_260;
  local_2dc = param_4;
  local_2c8 = param_1;
  if (*param_2 == -0x8000000000000000) {
                    /* try { // try from 006bf2c5 to 006bf2e9 has its CatchHandler @ 006bf8db */
    _ZN18alacritty_terminal3tty4unix21default_shell_command17hb8782edabd018a25E
              (&local_128,local_260,local_258);
  }
  else {
    _ZN3std7process7Command3new17h917b3f2fed349ac5E(&local_298,param_2);
                    /* try { // try from 006bf2f2 to 006bf2fb has its CatchHandler @ 006bf8a7 */
    _ZN3std7process7Command4args17he30d0902d7f04d4cE(&local_298,param_2[4],param_2[5]);
    (*(code *)PTR_memcpy_009de0b0)(&local_128,&local_298,0xe0);
  }
                    /* try { // try from 006bf317 to 006bf3c9 has its CatchHandler @ 006bf8e6 */
  (*(code *)PTR__ZN3std2os2fd5owned7OwnedFd9try_clone17h2d4ed0a2cb697b3dE_009e0950)
            (&local_298,&local_2e4);
  plVar10 = local_2c8;
  if ((int)local_298 == 1) {
LAB_006bf364:
    *plVar10 = CONCAT44(uStack_28c,uStack_290);
    *(undefined4 *)(plVar10 + 4) = 2;
    bVar3 = true;
  }
  else {
    _ZN3std7process7Command5stdin17h68abb24a9fa015edE(&local_128,local_298._4_4_);
    (*(code *)PTR__ZN3std2os2fd5owned7OwnedFd9try_clone17h2d4ed0a2cb697b3dE_009e0950)
              (&local_298,&local_2e4);
    if ((int)local_298 == 1) goto LAB_006bf364;
    _ZN3std7process7Command6stderr17h9cc39a5b4693aed3E(&local_128,local_298._4_4_);
    _ZN3std7process7Command6stdout17h3b60f20ba4bf0b41E(&local_128,local_2e4);
    uVar7 = (*(code *)
              PTR__ZN4core3fmt3num3imp23__LT_impl_u20_usize_GT_4_fmt17h71a478bc15827a22E_009dede8)
                      (param_3,&local_1b8,0x14);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h53b11fd4ed117188E
              (&local_298,uVar7);
    local_188 = (undefined4)uStack_288;
    uStack_184 = uStack_288._4_4_;
    local_198 = (int)local_298;
    uStack_194 = local_298._4_4_;
    uStack_190 = uStack_290;
    uStack_18c = uStack_28c;
                    /* try { // try from 006bf3e7 to 006bf485 has its CatchHandler @ 006bf8bf */
    _ZN3std7process7Command3env17h2bbb24e765417b2dE(&local_128,&local_198);
    local_298 = local_2b0;
    uStack_290 = (undefined4)local_2a8;
    uStack_28c = (undefined4)((ulong)local_2a8 >> 0x20);
    uStack_288._0_4_ = (undefined4)local_178;
    uStack_288._4_4_ = (undefined4)((ulong)local_178 >> 0x20);
    _ZN3std7process7Command3env17he8c4ef71d556c1a2E(&local_128,&DAT_001ed61c,4,&local_298);
    local_298 = (undefined **)local_2c0;
    uStack_290 = (undefined4)local_2b8;
    uStack_28c = (undefined4)((ulong)local_2b8 >> 0x20);
    uStack_288._0_4_ = (undefined4)local_180;
    uStack_288._4_4_ = (undefined4)((ulong)local_180 >> 0x20);
    _ZN3std7process7Command3env17he8c4ef71d556c1a2E(&local_128,"HOME",4,&local_298);
    uStack_288._0_4_ = local_188;
    uStack_288._4_4_ = uStack_184;
    local_298 = (undefined **)CONCAT44(uStack_194,local_198);
    uStack_290 = uStack_190;
    uStack_28c = uStack_18c;
                    /* try { // try from 006bf4a0 to 006bf4bd has its CatchHandler @ 006bf8d9 */
    _ZN3std7process7Command3env17he8c4ef71d556c1a2E(&local_128,&DAT_001ea228,8,&local_298);
    iVar4 = local_2dc;
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h59531a80e7893969E(&local_298,param_2 + 9)
    ;
    while (lVar8 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9e245cb149992d79E
                             (&local_298), lVar8 != 0) {
                    /* try { // try from 006bf4ed to 006bf4f7 has its CatchHandler @ 006bf8fc */
      _ZN3std7process7Command3env17hc9828b0dacfb8824E(&local_128,lVar8);
    }
                    /* try { // try from 006bf4fa to 006bf598 has its CatchHandler @ 006bf8d9 */
    _ZN3std7process7Command10env_remove17h64302d80addb9e23E(&local_128,"XDG_ACTIVATION_TOKEN",0x14);
    _ZN3std7process7Command10env_remove17h64302d80addb9e23E(&local_128,"DESKTOP_STARTUP_ID",0x12);
    ppuVar9 = (undefined **)0x8000000000000000;
    if (param_2[6] != -0x8000000000000000) {
      _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
                (&local_298,param_2[7],param_2[8]);
      local_138 = CONCAT44(uStack_28c,uStack_290);
      uStack_130 = CONCAT44(uStack_288._4_4_,(undefined4)uStack_288);
      ppuVar9 = local_298;
    }
    uStack_290 = (undefined4)local_138;
    uStack_28c = local_138._4_4_;
    uStack_288._0_4_ = (undefined4)uStack_130;
    uStack_288._4_4_ = uStack_130._4_4_;
    iStack_27c = iVar4;
    local_298 = ppuVar9;
    iStack_280 = param_5;
    _ZN76__LT_std__process__Command_u20_as_u20_std__os__unix__process__CommandExt_GT_8pre_exec17h071ffb1edc305a90E
              (&local_128,&local_298);
    (*(code *)PTR__ZN3std2os4unix3net6stream10UnixStream4pair17h100086d341b35033E_009e1498)
              (&local_298);
    if ((int)local_298 == 1) {
      *plVar10 = CONCAT44(uStack_28c,uStack_290);
      *(undefined4 *)(plVar10 + 4) = 2;
    }
    else {
      local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,uStack_290);
                    /* try { // try from 006bf5bd to 006bf5fe has its CatchHandler @ 006bf896 */
      (*(code *)PTR__ZN11signal_hook9low_level4pipe12register_raw17hfd0241c2fd09bf97E_009e14a0)
                (&local_298,0x11,local_298._4_4_);
      if (((ulong)local_298 & 1) == 0) {
        lVar1 = CONCAT44(uStack_288._4_4_,(undefined4)uStack_288);
        lVar2 = CONCAT44(iStack_27c,iStack_280);
        uVar5 = (undefined4)uStack_278;
        lVar8 = (*(code *)
                  PTR__ZN3std2os4unix3net8datagram12UnixDatagram15set_nonblocking17h06be934c9012ec8eE_009e14a8
                )(&local_1b8,1);
        if (lVar8 == 0) {
          iVar4 = (int)local_1b8;
                    /* try { // try from 006bf6ae to 006bf6c3 has its CatchHandler @ 006bf889 */
          (*(code *)PTR__ZN3std7process7Command5spawn17haea730ea7b05a977E_009dfda0)
                    (&local_158,&local_128);
          if (local_158 != 1) {
                    /* try { // try from 006bf7c3 to 006bf7cb has its CatchHandler @ 006bf868 */
            _ZN18alacritty_terminal3tty4unix15set_nonblocking17h073f954038365434E(local_2dc);
            iStack_27c = iStack_144;
            uStack_278 = uStack_140;
            uStack_28c = local_154;
            uStack_288 = (undefined8 **)CONCAT44(uStack_14c,uStack_150);
            iStack_280 = iStack_148;
            plVar10[1] = lVar2;
            *plVar10 = lVar1;
            *(undefined4 *)(plVar10 + 2) = uVar5;
            *(undefined8 *)((long)plVar10 + 0x34) = uStack_140;
            *(ulong *)((long)plVar10 + 0x24) = CONCAT44(uStack_14c,uStack_150);
            *(ulong *)((long)plVar10 + 0x2c) = CONCAT44(iStack_144,iStack_148);
            *(int *)((long)plVar10 + 0x14) = (int)local_298;
            *(undefined4 *)(plVar10 + 3) = local_298._4_4_;
            *(undefined4 *)((long)plVar10 + 0x1c) = uStack_290;
            *(undefined4 *)(plVar10 + 4) = local_154;
            *(int *)((long)plVar10 + 0x3c) = local_2e0;
            *(int *)(plVar10 + 8) = iVar4;
          }
          else {
            local_2a0 = CONCAT44(uStack_14c,uStack_150);
            uVar6 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E();
                    /* try { // try from 006bf6e7 to 006bf708 has its CatchHandler @ 006bf87a */
            uVar7 = (*(code *)PTR__ZN3std7process7Command11get_program17h41efdce1cd7a1359E_009e14b0)
                              (&local_128);
            (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_009de418)
                      (&local_170,uVar7);
            local_1b0 = 
            _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h39a2d61af06a0d8eE
            ;
            local_1a8 = &local_2a0;
            local_1a0 = 
            PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_009de518
            ;
            local_298 = &PTR_s_Failed_to_spawn_command_____009972e0;
            uStack_290 = 2;
            uStack_28c = 0;
            uStack_278 = 0;
            iStack_280 = 2;
            iStack_27c = 0;
                    /* try { // try from 006bf768 to 006bf779 has its CatchHandler @ 006bf84e */
            local_1b8 = &local_170;
            uStack_288 = &local_1b8;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h2801a126379f10f2E(local_48,&local_298);
            _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h8f92a929d7e02796E
                      (local_170,local_168);
                    /* try { // try from 006bf78f to 006bf7a0 has its CatchHandler @ 006bf87a */
            lVar8 = (*(code *)PTR__ZN3std2io5error5Error3new17h5db66b0057e01ec7E_009dff58)
                              (uVar6,local_48);
            *plVar10 = lVar8;
            *(undefined4 *)(plVar10 + 4) = 2;
                    /* try { // try from 006bf7b1 to 006bf7b5 has its CatchHandler @ 006bf889 */
            _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h86469fc896c1a0d5E(local_2a0);
            _ZN4core3ptr45drop_in_place_LT_std__process__ChildStdin_GT_17heb577a6f44b56825E(iVar4);
          }
                    /* try { // try from 006bf81f to 006bf82b has its CatchHandler @ 006bf8db */
          _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h2c085ab59821dbe3E(&local_128);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E
                    (local_2d8,local_2d0);
          plVar10 = local_2c8;
          if (local_158 != 1) {
            return local_2c8;
          }
          goto LAB_006bf688;
        }
      }
      else {
        lVar8 = CONCAT44(uStack_28c,uStack_290);
      }
      *plVar10 = lVar8;
      *(undefined4 *)(plVar10 + 4) = 2;
      _ZN4core3ptr45drop_in_place_LT_std__process__ChildStdin_GT_17heb577a6f44b56825E
                ((int)local_1b8);
    }
    bVar3 = false;
  }
                    /* try { // try from 006bf625 to 006bf631 has its CatchHandler @ 006bf8db */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h2c085ab59821dbe3E(&local_128);
  if (bVar3) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E
              (local_2b0,local_2a8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E
              (local_2c0,local_2b8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E
              (local_2d8,local_2d0);
    plVar10 = local_2c8;
    _ZN4core3ptr48drop_in_place_LT_std__os__fd__owned__OwnedFd_GT_17h9df83259a5b4ddb8E(local_2e4);
  }
  else {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h451460d2d1836db3E
              (local_2d8,local_2d0);
    plVar10 = local_2c8;
  }
LAB_006bf688:
  _ZN4core3ptr48drop_in_place_LT_std__os__fd__owned__OwnedFd_GT_17h9df83259a5b4ddb8E(local_2e0);
  return plVar10;
}