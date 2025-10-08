void _ZN9alacritty6config7monitor13ConfigMonitor8shutdown17h1cc0cbfda162edf7E(long param_1)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined local_a8 [16];
  undefined **local_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  undefined local_70;
  undefined2 local_6f;
  undefined4 local_6d;
  undefined local_69;
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_28;
  code *local_20;
  
  local_98 = (undefined **)0x0;
  uStack_90 = 8;
  ppuStack_88 = (undefined **)0x0;
  pcStack_80 = (char *)0x0;
  uStack_78 = CONCAT71(uStack_78._1_7_,5);
                    /* try { // try from 00535dde to 00535e5b has its CatchHandler @ 00535f90 */
  (*(code *)PTR__ZN12notify_types5event5Event8set_info17h393bcf13c8c013eaE_009dfd50)
            (&local_60,&local_98,&DAT_001ea448,8);
  local_69 = local_40._7_1_;
  local_6d = local_40._3_4_;
  pcStack_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = (undefined)local_40;
  local_6f = local_40._1_2_;
  local_98 = (undefined **)0x6;
  _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17hca465e4ac1fc35e9E
            (&local_60,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&local_98);
  _ZN4core3ptr171drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__sync__mpsc__SendError_LT_core__result__Result_LT_notify_types__event__Event_C_notify__error__Error_GT__GT__GT__GT_17h89c5621957379681E
            (&local_60);
  ppuStack_88 = *(undefined ***)(param_1 + 0x30);
  local_98 = *(undefined ***)(param_1 + 0x20);
  uStack_90 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 00535e6e to 00535e77 has its CatchHandler @ 00535f8b */
  auVar2 = _ZN3std6thread18JoinInner_LT_T_GT_4join17h202bacdcd3a4bf83E(&local_98);
  if (auVar2._0_8_ == 0) {
    _ZN4core3ptr100drop_in_place_LT_core__option__Option_LT_alloc__boxed__Box_LT_dyn_u20_core__error__Error_GT__GT__GT_17h333d6e83b3740d30E
              (0,auVar2._8_8_);
  }
  else {
    local_a8 = auVar2;
                    /* try { // try from 00535e90 to 00535f3e has its CatchHandler @ 00535f78 */
    uVar1 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (1 < uVar1) {
      local_20 = 
      _ZN67__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17hc4eae8d915d0256cE
      ;
      local_98 = &PTR_DAT_00981960;
      uStack_90 = 1;
      uStack_78 = 0;
      ppuStack_88 = &local_28;
      pcStack_80 = (char *)0x1;
      local_28 = local_a8;
      local_40 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_config_monitor_rs_00981970);
      local_60 = 
      "alacritty::config::monitorUnable to watch config directory Config watcher errors: Config watcher channel dropped unexpectedly: exceeded maximum scrolling history ("
      ;
      uStack_58 = 0x1a;
      local_50 = 
      "alacritty::config::monitorUnable to watch config directory Config watcher errors: Config watcher channel dropped unexpectedly: exceeded maximum scrolling history ("
      ;
      uStack_48 = 0x1a;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_98,2,&local_60);
      auVar2 = local_a8;
    }
                    /* try { // try from 00535f48 to 00535f5e has its CatchHandler @ 00535f8b */
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3d4788587f1a236cE
              (auVar2._0_8_,auVar2._8_8_);
  }
  _ZN4core3ptr129drop_in_place_LT_std__sync__mpsc__Sender_LT_core__result__Result_LT_notify_types__event__Event_C_notify__error__Error_GT__GT__GT_17h8bc93518eb327d21E
            (param_1 + 0x10);
  return;
}