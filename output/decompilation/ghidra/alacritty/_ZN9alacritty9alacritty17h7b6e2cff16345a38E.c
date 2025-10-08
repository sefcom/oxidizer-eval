undefined  [16] _ZN9alacritty9alacritty17h7b6e2cff16345a38E(long param_1)

{
  int iVar1;
  long **pplVar2;
  undefined4 uVar3;
  undefined8 **ppuVar4;
  long **pplVar5;
  undefined4 uVar6;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  undefined4 extraout_EAX_02;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined auVar11 [16];
  undefined8 *puStack_1a38;
  long local_1a30;
  long *local_1a28;
  code *local_1a20;
  undefined *local_1a18;
  undefined8 local_1a10;
  undefined8 local_1a08;
  undefined *local_1a00;
  undefined8 local_19f8;
  undefined4 uStack_19f0;
  undefined4 uStack_19ec;
  undefined local_19e8 [24];
  undefined local_19d0 [24];
  undefined4 local_19b8;
  undefined4 uStack_19b4;
  undefined4 uStack_19b0;
  undefined4 uStack_19ac;
  int local_19a8;
  undefined4 uStack_19a4;
  undefined4 uStack_19a0;
  undefined4 uStack_199c;
  undefined4 local_1998;
  undefined4 uStack_1994;
  undefined4 uStack_1990;
  undefined4 uStack_198c;
  undefined4 local_1988;
  undefined4 uStack_1984;
  undefined4 uStack_1980;
  undefined4 uStack_197c;
  undefined8 local_1978;
  undefined8 local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined4 local_1948;
  undefined4 uStack_1944;
  undefined4 uStack_1940;
  undefined4 uStack_193c;
  undefined8 local_1938;
  undefined8 local_15e8;
  undefined4 uStack_15e0;
  undefined4 uStack_15dc;
  undefined4 local_15d8;
  undefined4 uStack_15d4;
  undefined4 uStack_15d0;
  undefined4 uStack_15cc;
  undefined4 local_15c8;
  undefined4 uStack_15c4;
  undefined4 uStack_15c0;
  undefined4 uStack_15bc;
  undefined8 local_15b8;
  undefined8 **local_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined4 local_1560;
  undefined4 uStack_155c;
  undefined8 uStack_1558;
  undefined8 local_1550;
  undefined local_1548 [1312];
  undefined8 local_1028;
  undefined8 local_ce8;
  undefined local_cdf;
  byte local_ca7;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined local_908 [57];
  byte local_8cf;
  undefined8 **local_8c8;
  undefined4 local_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined4 local_8b0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 local_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined8 local_890;
  undefined local_888 [2144];
  
  local_1028 = 0;
                    /* try { // try from 00570bd1 to 00570c7f has its CatchHandler @ 00571460 */
  _ZN5winit10event_loop25EventLoopBuilder_LT_T_GT_5build17h5f83e7c9ef7414c4E(&local_1588,0,2);
  pplVar5 = uStack_1568;
  ppuVar4 = local_1588;
  local_1968 = uStack_1580;
  uStack_1960 = uStack_1578;
  local_1958 = uStack_1570;
  uStack_1950 = uStack_1568;
  uVar3 = (undefined4)uStack_1558;
  uVar6 = uStack_1558._4_4_;
  local_1948 = local_1560;
  uStack_1944 = uStack_155c;
  uStack_1940 = (undefined4)uStack_1558;
  uStack_193c = uStack_1558._4_4_;
  local_1938 = local_1550;
  if (local_1588 == (long **)0x3) {
    uStack_1558 = local_1550;
    uStack_1568 = (long **)CONCAT44(uStack_155c,local_1560);
    local_1560 = uVar3;
    uStack_155c = uVar6;
    pplVar2 = uStack_1570;
    uStack_1570 = pplVar5;
    local_1588 = uStack_1580;
    uStack_1580 = uStack_1578;
    uStack_1578 = pplVar2;
    uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h89897c1e19fc2d41E(&local_1588);
    ppuVar10 = &
               PTR__ZN4core3ptr49drop_in_place_LT_winit__error__EventLoopError_GT_17he4b43f37d079ca76E_009828e0
    ;
LAB_00570c8a:
    auVar11._8_8_ = ppuVar10;
    auVar11._0_8_ = uVar7;
    _ZN4core3ptr44drop_in_place_LT_alacritty__cli__Options_GT_17h95027836b0180360E(param_1);
  }
  else {
    (*(code *)PTR_memcpy_009de0b0)(local_888,local_1548,0x860);
    local_8c0 = (int)local_1968;
    uStack_8bc = local_1968._4_4_;
    uStack_8b8 = (undefined4)uStack_1960;
    uStack_8b4 = uStack_1960._4_4_;
    local_8b0 = (undefined4)local_1958;
    uStack_8ac = local_1958._4_4_;
    uStack_8a8 = (undefined4)uStack_1950;
    uStack_8a4 = uStack_1950._4_4_;
    local_8a0 = local_1948;
    uStack_89c = uStack_1944;
    uStack_898 = uStack_1940;
    uStack_894 = uStack_193c;
    local_890 = local_1938;
    local_8c8 = ppuVar4;
                    /* try { // try from 00570cfa to 00570d58 has its CatchHandler @ 0057145b */
    _ZN5winit13platform_impl5linux18EventLoop_LT_T_GT_12create_proxy17h9050477dda0b9974E
              (&local_1588,&local_8c8);
    local_1958 = uStack_1578;
    uStack_1950 = uStack_1570;
    local_1968 = local_1588;
    uStack_1960 = uStack_1580;
    _ZN9alacritty7logging10initialize17h4559fc8f185863faE(&local_1588,param_1,&local_1968);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17hf71b0e4565673865E(local_19d0,&local_1588);
                    /* try { // try from 00570d59 to 00570fe5 has its CatchHandler @ 00571467 */
    uVar8 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar8) {
      local_1588 = (undefined8 **)&PTR_s_Welcome_to_Alacritty_00984480;
      uStack_1580 = (long **)&DAT_00000001;
      uStack_1578 = (long **)&DAT_00000008;
      uStack_1570 = (long **)0x0;
      uStack_1568 = (long **)0x0;
      (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                (&PTR_s_alacritty_src_main_rs_009844d8);
      local_1968 = (long **)&DAT_00201f24;
      uStack_1960 = (long **)&DAT_00000009;
      local_1958 = (long **)&DAT_00201f24;
      uStack_1950 = (long **)&DAT_00000009;
      local_1948 = extraout_EAX;
      uStack_1944 = extraout_var;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_1588,3,&local_1968);
    }
    uVar8 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar8) {
      local_1588 = (undefined8 **)&PTR_s_Version_0_17_0_dev__a2334ff4__00984490;
      uStack_1580 = (long **)&DAT_00000001;
      uStack_1570 = (long **)0x0;
      uStack_1568 = (long **)0x0;
      uStack_1578 = &puStack_1a38;
      (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                (&PTR_s_alacritty_src_main_rs_009844f0);
      local_1968 = (long **)&DAT_00201f24;
      uStack_1960 = (long **)&DAT_00000009;
      local_1958 = (long **)&DAT_00201f24;
      uStack_1950 = (long **)&DAT_00000009;
      local_1948 = extraout_EAX_00;
      uStack_1944 = extraout_var_00;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_1588,3,&local_1968);
    }
    uVar8 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar8) {
      _ZN103__LT_winit__event_loop__EventLoop_LT_T_GT__u20_as_u20_raw_window_handle__borrowed__HasDisplayHandle_GT_14display_handle17h6bb5824f2b2c3041E
                (&local_1588,&local_8c8);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8eb3c721dc814788E
                (&local_1968,&local_1588,&PTR_s_alacritty_src_main_rs_00984508);
      local_1a00 = &DAT_001ff7b4;
      if ((int)local_1968 == 6) {
        local_1a00 = &DAT_001fe515;
      }
      local_19f8 = (undefined *)((ulong)((int)local_1968 == 6) * 4 + 3);
      local_1a28 = (long *)&local_1a00;
      local_1a20 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
      local_1588 = (undefined8 **)&PTR_s_Running_on_00984048;
      uStack_1580 = (long **)&DAT_00000001;
      uStack_1568 = (long **)0x0;
      uStack_1578 = &local_1a28;
      uStack_1570 = (long **)&DAT_00000001;
      (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                (&PTR_s_alacritty_src_main_rs_00984520);
      local_1968 = (long **)&DAT_00201f24;
      uStack_1960 = (long **)&DAT_00000009;
      local_1958 = (long **)&DAT_00201f24;
      uStack_1950 = (long **)&DAT_00000009;
      local_1948 = extraout_EAX_01;
      uStack_1944 = extraout_var_01;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_1588,3,&local_1968);
    }
    _ZN9alacritty6config4load17hc4f1210f544231b4E(&local_ce8,param_1);
                    /* try { // try from 00570ff6 to 00571016 has its CatchHandler @ 00571465 */
    _ZN9alacritty15log_config_path17h9df1f23b6c9c8bdcE(local_a48,local_a40);
    _ZN4core4sync6atomic12atomic_store17h01a750bd23f9b0c6E
              (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,local_ce8,0);
    (*(code *)PTR__ZN18alacritty_terminal3tty9setup_env17h5e0cd004a621403fE_009e0088)();
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h162e0aa931f7f7ddE(&local_1588,local_908);
    while( true ) {
      auVar11 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf10bfd6a69352b43E
                          (&local_1588);
      if (auVar11._0_8_ == 0) break;
                    /* try { // try from 0057103d to 00571047 has its CatchHandler @ 0057146c */
      _ZN3std3env7set_var17h89598d6444877d2eE(auVar11._0_8_,auVar11._8_8_);
    }
    if (local_8cf != 2) {
      local_ca7 = local_8cf;
    }
    if ((local_ca7 & 1) == 0) {
      puVar9 = (undefined *)0x8000000000000000;
    }
    else {
                    /* try { // try from 00571072 to 005710d8 has its CatchHandler @ 00571465 */
      _ZN5winit13platform_impl5linux18EventLoop_LT_T_GT_12create_proxy17h9050477dda0b9974E
                (&local_1588,&local_8c8);
      local_1958 = uStack_1578;
      uStack_1950 = uStack_1570;
      local_1968 = local_1588;
      uStack_1960 = uStack_1580;
      _ZN9alacritty3ipc16spawn_ipc_socket17h71ea705a2a85995bE(&local_1a00,param_1,&local_1968);
      puVar9 = local_1a00;
      if (local_1a00 == (undefined *)0x8000000000000000) {
        if (*(char *)(param_1 + 0x1e2) != '\0') {
          uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1f73520aeb5db4e5E(local_19f8);
                    /* try { // try from 005710d9 to 005710e8 has its CatchHandler @ 00571467 */
          _ZN4core3ptr59drop_in_place_LT_alacritty__config__ui_config__UiConfig_GT_17he83c073c4a426015E
                    (&local_ce8);
          _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hce944beccab591c0E
                    (local_19d0);
                    /* try { // try from 005710f3 to 005710ff has its CatchHandler @ 00571460 */
          _ZN4core3ptr80drop_in_place_LT_winit__event_loop__EventLoop_LT_alacritty__event__Event_GT__GT_17h033a5fe375b2f145E
                    (&local_8c8);
          ppuVar10 = &
                     PTR__ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3428ae91bc3bac8aE_0097a2e8
          ;
          goto LAB_00570c8a;
        }
        local_1a30 = (long)local_19f8;
                    /* try { // try from 00571130 to 005711fb has its CatchHandler @ 00571412 */
        uVar8 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
        if (1 < uVar8) {
          local_1a28 = &local_1a30;
          local_1a20 = (code *)
                       PTR__ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17he152f8cbd3e2b5efE_009dea50
          ;
          local_1588 = (undefined8 **)&PTR_s_Unable_to_create_socket__009844a0;
          uStack_1580 = (long **)&DAT_00000001;
          uStack_1568 = (long **)0x0;
          uStack_1578 = &local_1a28;
          uStack_1570 = (long **)&DAT_00000001;
          (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                    (&PTR_s_alacritty_src_main_rs_00984538);
          local_1968 = (long **)&DAT_00201f24;
          uStack_1960 = (long **)&DAT_00000009;
          local_1958 = (long **)&DAT_00201f24;
          uStack_1950 = (long **)&DAT_00000009;
          local_1948 = extraout_EAX_02;
          uStack_1944 = extraout_var_02;
          _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_1588,2,&local_1968);
        }
                    /* try { // try from 005711fc to 00571205 has its CatchHandler @ 00571465 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3428ae91bc3bac8aE(&local_1a30);
      }
      else {
        local_19b8 = (undefined4)local_19f8;
        uStack_19b4 = local_19f8._4_4_;
        uStack_19b0 = uStack_19f0;
        uStack_19ac = uStack_19ec;
      }
    }
    _ZN4core6option15Option_LT_T_GT_6filter17h59a6a3a7b6ee252cE(local_19e8,local_19d0,local_cdf);
    local_19f8 = (undefined *)CONCAT44(uStack_19b4,local_19b8);
    uStack_19f0 = uStack_19b0;
    uStack_19ec = uStack_19ac;
    local_1a00 = puVar9;
    (*(code *)PTR_memcpy_009de0b0)(&local_1588,param_1,0x1f0);
                    /* try { // try from 0057124b to 0057126a has its CatchHandler @ 00571426 */
    _ZN9alacritty5event9Processor3new17h01533ed7aa13421eE
              (&local_1968,&local_ce8,&local_1588,&local_8c8);
    (*(code *)PTR_memcpy_009de0b0)(&local_1588,&local_8c8,0x8a0);
                    /* try { // try from 00571289 to 00571298 has its CatchHandler @ 00571421 */
    auVar11 = _ZN9alacritty5event9Processor3run17had5b49b6a9979afdE(&local_1968,&local_1588);
    uVar3 = local_15e8._4_4_;
    iVar1 = (int)local_15e8;
    local_1588 = local_15e8;
    uStack_1580 = (long **)CONCAT44(uStack_15dc,uStack_15e0);
    uStack_1558 = local_15b8;
    uStack_1568 = (long **)CONCAT44(uStack_15c4,local_15c8);
    local_1560 = uStack_15c0;
    uStack_155c = uStack_15bc;
    uStack_1578 = (long **)CONCAT44(uStack_15d4,local_15d8);
    uStack_1570 = (long **)CONCAT44(uStack_15cc,uStack_15d0);
    local_15e8 = (undefined8 **)0x2;
    if (iVar1 == 2) {
                    /* try { // try from 005712f5 to 005713e2 has its CatchHandler @ 0057142b */
      _ZN4core3ptr90drop_in_place_LT_core__option__Option_LT_alacritty__config__monitor__ConfigMonitor_GT__GT_17hc17f70ca91879034E
                (&local_1588);
    }
    else {
      local_1978 = local_15b8;
      local_1988 = local_15c8;
      uStack_1984 = uStack_15c4;
      uStack_1980 = uStack_15c0;
      uStack_197c = uStack_15bc;
      local_1998 = local_15d8;
      uStack_1994 = uStack_15d4;
      uStack_1990 = uStack_15d0;
      uStack_198c = uStack_15cc;
      uStack_19a4 = uVar3;
      uStack_19a0 = uStack_15e0;
      uStack_199c = uStack_15dc;
      local_19a8 = iVar1;
      _ZN9alacritty6config7monitor13ConfigMonitor8shutdown17h1cc0cbfda162edf7E(&local_19a8);
    }
    uVar8 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (2 < uVar8) {
      local_1588 = (undefined8 **)&PTR_s_Goodbye_009844b0;
      uStack_1580 = (long **)0x1;
      uStack_1578 = (long **)0x8;
      uStack_1570 = (long **)0x0;
      uStack_1568 = (long **)0x0;
      local_1a08 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                             (&PTR_s_alacritty_src_main_rs_00984550);
      local_1a28 = (long *)&DAT_00201f24;
      local_1a20 = (code *)&DAT_00000009;
      local_1a18 = &DAT_00201f24;
      local_1a10 = 9;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_1588,3,&local_1a28);
    }
                    /* try { // try from 005713e5 to 005713f1 has its CatchHandler @ 00571426 */
    _ZN4core3ptr48drop_in_place_LT_alacritty__event__Processor_GT_17h7bc2cccc7068a06fE(&local_1968);
    _ZN4core3ptr46drop_in_place_LT_alacritty__TemporaryFiles_GT_17hc78d9237c805edefE(&local_1a00);
  }
  return auVar11;
}