void _ZN9alacritty14window_context13WindowContext7initial17hf53962b78b6f5e18E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_1a10 [8];
  undefined8 local_1a08;
  long local_19f0 [11];
  undefined4 local_1998;
  undefined4 uStack_1994;
  undefined4 uStack_1990;
  undefined4 uStack_198c;
  undefined8 local_1988;
  undefined4 uStack_1980;
  undefined4 uStack_197c;
  undefined4 local_1978;
  undefined4 uStack_1974;
  undefined4 uStack_1970;
  undefined4 uStack_196c;
  undefined4 local_1968;
  undefined4 uStack_1964;
  undefined8 uStack_1960;
  undefined4 local_1898;
  undefined4 uStack_1894;
  undefined4 uStack_1890;
  undefined4 uStack_188c;
  undefined8 local_1888;
  undefined4 local_1878 [6];
  undefined local_1860 [360];
  undefined local_16f8 [16];
  undefined8 uStack_16e8;
  undefined4 uStack_16e0;
  undefined4 uStack_16dc;
  undefined4 uStack_16d8;
  undefined4 uStack_16d4;
  undefined4 local_16d0;
  undefined4 uStack_16cc;
  undefined4 uStack_16c8;
  undefined4 uStack_16c4;
  undefined8 local_16c0;
  undefined8 local_1030;
  
  local_1030 = 0;
                    /* try { // try from 0056e084 to 0056e0e2 has its CatchHandler @ 0056e74d */
  local_19f0[0] = param_4;
  (*(code *)
    PTR__ZN100__LT_winit__event_loop__ActiveEventLoop_u20_as_u20_raw_window_handle__borrowed__HasDisplayHandle_GT_14display_handle17hded1c3db3c7d13b3E_009de0c0
  )(local_16f8);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8eb3c721dc814788E
            (&local_1998,local_16f8,&PTR_s_alacritty_src_window_context_rs_009841c8);
  local_1898 = local_1998;
  uStack_1894 = uStack_1994;
  uStack_1890 = uStack_1990;
  uStack_188c = uStack_198c;
  local_1888 = local_1988;
  _ZN74__LT_alacritty__config__window__Identity_u20_as_u20_core__clone__Clone_GT_5clone17h45909795b68e7404E
            (local_1860,param_4 + 0x148);
                    /* try { // try from 0056e0e7 to 0056e119 has its CatchHandler @ 0056e73b */
  _ZN9alacritty3cli14WindowIdentity24override_identity_config17h92dfce40d1de0198E
            (param_5 + 0x50,local_1860);
  local_1878[0] = 0x10;
  _ZN9alacritty8renderer8platform17create_gl_display17h0e61610653d66be2E
            (&local_1998,&local_1898,*(undefined *)(param_4 + 0x1c));
  if (CONCAT44(uStack_1994,local_1998) == 2) {
    local_1a08 = local_1988;
                    /* try { // try from 0056e149 to 0056e162 has its CatchHandler @ 0056e71a */
    _ZN9alacritty8renderer8platform14pick_gl_config17hc062c755391669d7E
              (local_16f8,local_1a10,local_1878);
                    /* try { // try from 0056e323 to 0056e330 has its CatchHandler @ 0056e71a */
    auVar2 = (*(code *)
               PTR__ZN5alloc5boxed7convert130__LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_GT__GT_4from17hf6edc06cb0ab674fE_009e0078
             )(local_16f8);
    *(undefined (*) [16])(param_1 + 2) = auVar2;
    param_1[1] = 0;
    *param_1 = 3;
                    /* try { // try from 0056e5a9 to 0056e5b2 has its CatchHandler @ 0056e73b */
    _ZN4core3ptr45drop_in_place_LT_glutin__display__Display_GT_17h28e1ec1d671b8241E(local_1a10);
  }
  else {
    local_16c0 = uStack_1960;
    local_16d0 = uStack_1970;
    uStack_16cc = uStack_196c;
    uStack_16c8 = local_1968;
    uStack_16c4 = uStack_1964;
    uStack_16e0 = uStack_1980;
    uStack_16dc = uStack_197c;
    uStack_16d8 = local_1978;
    uStack_16d4 = uStack_1974;
    uStack_16e8 = local_1988;
                    /* try { // try from 0056e2db to 0056e2e7 has its CatchHandler @ 0056e73b */
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h652cace9bb3013daE(local_16f8);
    param_1[2] = uVar1;
    param_1[3] = &
                 PTR__ZN4core3ptr41drop_in_place_LT_glutin__error__Error_GT_17h7a096d9b46c3b785E_00984278
    ;
    param_1[1] = 0;
    *param_1 = 3;
  }
  _ZN4core3ptr56drop_in_place_LT_alacritty__config__window__Identity_GT_17h7bd4b16e933064bbE
            (local_1860);
  _ZN4core3ptr50drop_in_place_LT_alacritty__cli__WindowOptions_GT_17hd1c78ed5333b3944E(param_5);
                    /* try { // try from 0056e5c8 to 0056e5d1 has its CatchHandler @ 0056e715 */
  _ZN4core3ptr80drop_in_place_LT_alloc__rc__Rc_LT_alacritty__config__ui_config__UiConfig_GT__GT_17h077aa8980e2272c3E
            (local_19f0);
  _ZN4core3ptr85drop_in_place_LT_winit__event_loop__EventLoopProxy_LT_alacritty__event__Event_GT__GT_17h24ae1d3a938ce77bE
            (param_3);
  return;
}