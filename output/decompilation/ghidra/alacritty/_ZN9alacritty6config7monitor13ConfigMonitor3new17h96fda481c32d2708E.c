void _ZN9alacritty6config7monitor13ConfigMonitor3new17h96fda481c32d2708E
               (undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int *local_198;
  undefined *local_190;
  char *local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  undefined8 local_168;
  int local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_130;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined **local_78;
  undefined8 local_70;
  undefined4 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_2[2] == 0) {
    *param_1 = 2;
  }
  else {
                    /* try { // try from 0053502d to 00535048 has its CatchHandler @ 00535480 */
    auVar7 = _ZN9alacritty6config7monitor13ConfigMonitor10hash_paths17hbd080233d0377b89E(param_2[1])
    ;
    local_1d0 = auVar7._8_8_;
    local_1c8 = auVar7._0_8_;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_6retain17h86b2cad77c8bfd24E(param_2);
    uVar2 = param_2[2];
    if (uVar2 != 0) {
      lVar6 = 0;
      uVar5 = 0;
      do {
        if ((ulong)param_2[2] <= uVar5) {
                    /* try { // try from 005353be to 005353cd has its CatchHandler @ 00535480 */
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                    (uVar5,param_2[2],&PTR_s_alacritty_src_config_monitor_rs_00981848);
LAB_005353f2:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        _ZN3std2fs12canonicalize17h279041e27d4d2757E
                  (&local_1c0,*(undefined8 *)(param_2[1] + 8 + lVar6),
                   *(undefined8 *)(param_2[1] + 0x10 + lVar6));
        if ((ulong)param_2[2] <= uVar5) {
                    /* try { // try from 005353d0 to 005353df has its CatchHandler @ 00535471 */
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                    (uVar5,param_2[2],&PTR_s_alacritty_src_config_monitor_rs_00981860);
          goto LAB_005353f2;
        }
                    /* try { // try from 005350cd to 005350d9 has its CatchHandler @ 0053546d */
        _ZN3std2fs16symlink_metadata17hadb4ace2feded69cE
                  (&local_128,*(undefined8 *)(param_2[1] + 8 + lVar6),
                   *(undefined8 *)(param_2[1] + 0x10 + lVar6));
        if ((local_128 == 2) || (((uint)local_f0 & 0xf000) != 0xa000)) {
          if ((ulong)param_2[2] <= uVar5) {
                    /* try { // try from 005353e2 to 005353f1 has its CatchHandler @ 0053544e */
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                      (uVar5,param_2[2],&PTR_s_alacritty_src_config_monitor_rs_00981890);
            goto LAB_005353f2;
          }
          lVar3 = param_2[1];
          _ZN4core3mem4drop17ha42964a555fb617bE(lVar6 + lVar3);
          *(undefined8 *)(lVar3 + 0x10 + lVar6) = local_1b0;
          puVar1 = (undefined4 *)(lVar3 + lVar6);
          *puVar1 = local_1c0;
          puVar1[1] = uStack_1bc;
          puVar1[2] = uStack_1b8;
          puVar1[3] = uStack_1b4;
        }
        else {
                    /* try { // try from 005350f9 to 0053510a has its CatchHandler @ 00535428 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h86a2df8af84df241E
                    (param_2,&local_1c0,&PTR_s_alacritty_src_config_monitor_rs_00981878);
        }
                    /* try { // try from 00535142 to 0053514e has its CatchHandler @ 0053546f */
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h672bb05c96f66e9cE
                  (&local_128);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x18;
      } while (uVar2 != uVar5);
    }
                    /* try { // try from 00535154 to 00535168 has its CatchHandler @ 00535480 */
    _ZN3std4sync4mpmc7channel17h6d7b3e627ab95b12E(&local_128);
    local_1e0 = CONCAT44(iStack_124,local_128);
    uStack_1d8 = CONCAT44(iStack_11c,iStack_120);
    local_1a8 = local_118;
    uStack_1a4 = iStack_114;
    uStack_1a0 = iStack_110;
    uStack_19c = iStack_10c;
                    /* try { // try from 00535190 to 005351a9 has its CatchHandler @ 0053542d */
    auVar7 = _ZN71__LT_std__sync__mpmc__Sender_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17h054a57b759326448E
                       ();
    _ZN67__LT_notify__inotify__INotifyWatcher_u20_as_u20_notify__Watcher_GT_3new17h7fc8a9077e86addcE
              (&local_160,auVar7._0_8_,auVar7._8_8_,1);
    if (local_160 == 6) {
      local_e0 = *param_2;
      uStack_d8 = param_2[1];
      local_d0 = param_2[2];
      local_f0 = CONCAT44(uStack_1a4,local_1a8);
      uStack_e8 = CONCAT44(uStack_19c,uStack_1a0);
      local_128 = *param_3;
      iStack_124 = param_3[1];
      iStack_120 = param_3[2];
      iStack_11c = param_3[3];
      local_118 = param_3[4];
      iStack_114 = param_3[5];
      iStack_110 = param_3[6];
      iStack_10c = param_3[7];
                    /* try { // try from 00535215 to 00535229 has its CatchHandler @ 005353fc */
      _ZN18alacritty_terminal6thread11spawn_named17hdc7b5c4acab1b797E(&local_48,&local_128);
      param_1[4] = local_48;
      param_1[5] = uStack_40;
      param_1[6] = local_38;
      *param_1 = local_1c8;
      param_1[1] = local_1d0;
      param_1[2] = local_1e0;
      param_1[3] = uStack_1d8;
      return;
    }
    local_f8 = local_130;
    local_118 = uStack_150;
    iStack_114 = uStack_14c;
    iStack_110 = uStack_148;
    iStack_10c = uStack_144;
    local_128 = local_160;
    iStack_124 = uStack_15c;
    iStack_120 = uStack_158;
    iStack_11c = uStack_154;
                    /* try { // try from 005352b2 to 0053536e has its CatchHandler @ 00535416 */
    lVar6 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (lVar6 != 0) {
      local_190 = 
      PTR__ZN59__LT_notify__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hdd5302eff3d89185E_009dfd28
      ;
      local_78 = &PTR_s_Unable_to_watch_config_file__00981820;
      local_70 = 1;
      local_58 = 0;
      local_68 = &local_198;
      local_60 = 1;
      local_198 = &local_128;
      local_168 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                            (&PTR_s_alacritty_src_config_monitor_rs_00981830);
      local_188 = 
      "alacritty::config::monitorUnable to watch config directory Config watcher errors: Config watcher channel dropped unexpectedly: exceeded maximum scrolling history ("
      ;
      local_180 = 0x1a;
      local_178 = 
      "alacritty::config::monitorUnable to watch config directory Config watcher errors: Config watcher channel dropped unexpectedly: exceeded maximum scrolling history ("
      ;
      local_170 = 0x1a;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_78,1,&local_188);
    }
    *param_1 = 2;
                    /* try { // try from 0053537b to 00535387 has its CatchHandler @ 0053542d */
    _ZN4core3ptr41drop_in_place_LT_notify__error__Error_GT_17hab2d02a34d5b0d48E(&local_128);
                    /* try { // try from 00535388 to 00535391 has its CatchHandler @ 005353f4 */
    _ZN4core3ptr131drop_in_place_LT_std__sync__mpsc__Receiver_LT_core__result__Result_LT_notify_types__event__Event_C_notify__error__Error_GT__GT__GT_17hf8e11df65a81c312E
              (&local_1a8);
                    /* try { // try from 00535392 to 0053539b has its CatchHandler @ 00535480 */
    _ZN4core3ptr129drop_in_place_LT_std__sync__mpsc__Sender_LT_core__result__Result_LT_notify_types__event__Event_C_notify__error__Error_GT__GT__GT_17h8bc93518eb327d21E
              (&local_1e0);
  }
                    /* try { // try from 0053539c to 005353a3 has its CatchHandler @ 00535403 */
  _ZN4core3ptr85drop_in_place_LT_winit__event_loop__EventLoopProxy_LT_alacritty__event__Event_GT__GT_17h24ae1d3a938ce77bE
            (param_3);
  _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h246198f168725160E
            (param_2);
  return;
}