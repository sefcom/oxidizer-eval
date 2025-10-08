void _ZN9alacritty7logging6Logger15message_bar_log17he07f60265efa67f3E
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined uVar5;
  undefined **local_248;
  code *pcStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined local_218;
  undefined7 uStack_217;
  long local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined ***local_1c8;
  code *local_1c0;
  undefined8 *local_1b8;
  code *local_1b0;
  undefined4 *local_1a8;
  code *local_1a0;
  undefined local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == 1) {
    uVar5 = 0;
  }
  else {
    if ((int)lVar1 != 2) {
      return;
    }
    uVar5 = 1;
  }
  local_1e8 = param_3;
  local_1e0 = param_4;
  _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h0356afe7acdc80ffE(&local_1d8,param_1 + 0x78);
  uVar4 = local_1c8._0_1_;
  lVar3 = (long)uStack_1d0;
  if (((ulong)local_1d8 & 1) == 0) {
    local_248 = &PTR_s_ALACRITTY_LOG_009830c0;
    pcStack_240 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
    local_1d8 = &PTR_DAT_00983060;
    uStack_1d0 = (undefined *)0x1;
    local_1b8 = (undefined8 *)0x0;
    local_1c0 = (code *)0x1;
                    /* try { // try from 0055d3fb to 0055d414 has its CatchHandler @ 0055d635 */
    local_1c8 = &local_248;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
              (&local_f8,0,extraout_RDX,&local_1d8);
    local_208 = (undefined4)local_f8;
    uStack_204 = local_f8._4_4_;
    uStack_200 = (undefined4)uStack_f0;
    uStack_1fc = uStack_f0._4_4_;
    local_1f8 = local_e8;
    local_248 = (undefined **)(param_2 + 0x50);
    local_1d8 = (undefined **)&local_210;
    uStack_1d0 = 
    PTR__ZN49__LT_log__Level_u20_as_u20_core__fmt__Display_GT_3fmt17hf3e2f8abd8007cc2E_009dff70;
    local_1c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5a9ea69be6d86acaE;
    local_1b8 = &local_1e8;
    local_1b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
    local_1a8 = &local_208;
    local_1a0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_f8 = &PTR_s___00983070;
    uStack_f0 = 5;
    uStack_d8 = 0;
    local_e0 = 4;
                    /* try { // try from 0055d4dc to 0055d4f2 has its CatchHandler @ 0055d633 */
    local_210 = lVar1;
    local_1c8 = &local_248;
    local_e8 = &local_1d8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
              (local_110,0,extraout_RDX_00,&local_f8);
    local_238 = local_100;
    uStack_230 = 0x8000000000000000;
                    /* try { // try from 0055d529 to 0055d535 has its CatchHandler @ 0055d624 */
    local_218 = uVar5;
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
              (&local_f8,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
    local_1c8 = (undefined ***)local_e8;
    local_1d8._0_4_ = SUB84(local_f8,0);
    local_1d8._4_4_ = local_f8._4_4_;
    uStack_1d0._0_4_ = (undefined4)uStack_f0;
    uStack_1d0._4_4_ = uStack_f0._4_4_;
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h6a0f98c288fb7106E
              (&uStack_230);
    uStack_220 = local_1c8;
    puVar2 = uStack_220;
    uStack_230._0_4_ = (undefined4)local_1d8;
    uStack_230._4_4_ = local_1d8._4_4_;
    uStack_228 = (undefined4)uStack_1d0;
    uStack_224 = uStack_1d0._4_4_;
    local_c0 = CONCAT71(uStack_217,local_218);
    uStack_220._0_4_ = SUB84(local_1c8,0);
    uStack_220._4_4_ = (undefined4)((ulong)local_1c8 >> 0x20);
    local_d0 = (undefined4)uStack_1d0;
    uStack_cc = uStack_1d0._4_4_;
    uStack_c8 = (undefined4)uStack_220;
    uStack_c4 = uStack_220._4_4_;
    local_e0 = local_238;
    uStack_d8 = CONCAT44(local_1d8._4_4_,(undefined4)local_1d8);
    local_f8 = (undefined **)0x8000000000000002;
    uStack_220 = puVar2;
    _ZN9alacritty5event5Event3new17hfaf9b093bcbfdb2bE(&local_1d8,&local_f8,0);
                    /* try { // try from 0055d5de to 0055d5fa has its CatchHandler @ 0055d63a */
    _ZN5winit10event_loop23EventLoopProxy_LT_T_GT_10send_event17ha003452b73db1a9aE
              (&local_f8,lVar3 + 8,&local_1d8);
    _ZN4core3ptr125drop_in_place_LT_core__result__Result_LT__LP__RP__C_winit__event_loop__EventLoopClosed_LT_alacritty__event__Event_GT__GT__GT_17ha34e38cbba7ecdb0E
              (&local_f8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_208);
    _ZN4core3ptr100drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_alacritty__logging__OnDemandLogFile_GT__GT_17h04acd6e250735d2bE
              (lVar3,uVar4);
  }
  else {
    _ZN4core3ptr248drop_in_place_LT_core__result__Result_LT_std__sync__poison__mutex__MutexGuard_LT_alacritty__logging__OnDemandLogFile_GT__C_std__sync__poison__PoisonError_LT_std__sync__poison__mutex__MutexGuard_LT_alacritty__logging__OnDemandLogFile_GT__GT__GT__GT_17h1662b955727f946cE
              (&local_1d8);
  }
  return;
}