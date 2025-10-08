void _ZN9alacritty14window_context13WindowContext13update_config17h98162595dbe55738E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  long local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b4;
  undefined local_1b0;
  undefined local_1af;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined4 local_e4;
  undefined local_e0;
  undefined local_df;
  undefined8 local_d8;
  undefined8 local_d0;
  
  lVar1 = *(long *)(param_1 + 0x1e20);
  *(undefined8 *)(param_1 + 0x1e20) = param_2;
  local_280 = lVar1;
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h04231d05a40329cbE(param_2);
                    /* try { // try from 0056f968 to 0056f96f has its CatchHandler @ 0056fd9a */
  lVar4 = _ZN9alacritty3cli13ParsedOptions18override_config_rc17h35ab90cde0bbb7d9E
                    (param_1 + 0x1df8,param_2);
                    /* try { // try from 0056f970 to 0056f981 has its CatchHandler @ 0056fd85 */
  _ZN4core3ptr80drop_in_place_LT_alloc__rc__Rc_LT_alacritty__config__ui_config__UiConfig_GT__GT_17h077aa8980e2272c3E
            ((long *)(param_1 + 0x1e20));
  *(long *)(param_1 + 0x1e20) = lVar4;
                    /* try { // try from 0056f994 to 0056f9af has its CatchHandler @ 0056fd9a */
  _ZN9alacritty7display7Display13update_config17hf55e38dcbbf2a1d6E(param_1 + 0x1170,lVar4 + 0x10);
  lVar2 = *(long *)(param_1 + 0x1e18);
  lVar4 = lVar2 + 0x10;
  _ZN18alacritty_terminal4sync18FairMutex_LT_T_GT_4lock17h8771cda87d96e8b1E(lVar4);
  lVar8 = *(long *)(param_1 + 0x1e20);
                    /* try { // try from 0056f9b7 to 0056f9d1 has its CatchHandler @ 0056fd8d */
  _ZN9alacritty6config9ui_config8UiConfig12term_options17hd6aa2decf979f436E(&local_278,lVar8 + 0x10)
  ;
  _ZN18alacritty_terminal4term13Term_LT_T_GT_11set_options17h35d1164ca74ce318E
            (lVar2 + 0x18,&local_278);
                    /* try { // try from 0056f9d2 to 0056fd62 has its CatchHandler @ 0056fd9a */
  _ZN4core3ptr157drop_in_place_LT_lock_api__mutex__MutexGuard_LT_parking_lot__raw_mutex__RawMutex_C_alacritty_terminal__term__Term_LT_alacritty__event__EventProxy_GT__GT__GT_17h090449980f2d2d72E
            (lVar4);
  if (_DAT_001ec2fc <
      (float)((uint)(*(float *)(lVar1 + 0x3e0) - *(float *)(lVar8 + 0x3e0)) & _DAT_001e90d0)) {
    *(undefined2 *)(param_1 + 0x16cc) = 0x101;
  }
  cVar3 = _ZN70__LT_alacritty__config__font__Font_u20_as_u20_core__cmp__PartialEq_GT_2eq17ha165a17f7f207ddbE
                    (lVar1 + 0x78,lVar8 + 0x78);
  if (cVar3 == '\0') {
    fVar10 = (float)((double)*(uint *)(lVar1 + 0x138) / _s__001ead48) *
             (float)*(double *)(param_1 + 0x14a8);
    fVar11 = DAT_001eb5d0;
    if (DAT_001eb5d0 <= fVar10) {
      fVar11 = fVar10;
    }
    fVar10 = DAT_001ecb14;
    if (fVar11 <= DAT_001ecb14) {
      fVar10 = fVar11;
    }
    fVar10 = fVar10 * _DAT_001ecdb4;
    iVar5 = (int)(long)fVar10;
    if (fVar10 < 0.0) {
      iVar5 = 0;
    }
    if (DAT_001edbc8 < fVar10) {
      iVar5 = -1;
    }
    iVar6 = *(int *)(param_1 + 0x19a0);
    if (iVar6 == iVar5) {
      fVar10 = (float)*(double *)(param_1 + 0x14a8) *
               (float)((double)*(uint *)(lVar8 + 0x138) / _s__001ead48);
      fVar11 = DAT_001eb5d0;
      if (DAT_001eb5d0 <= fVar10) {
        fVar11 = fVar10;
      }
      fVar10 = DAT_001ecb14;
      if (fVar11 <= DAT_001ecb14) {
        fVar10 = fVar11;
      }
      fVar10 = fVar10 * _DAT_001ecdb4;
      iVar6 = (int)(long)fVar10;
      if (fVar10 < 0.0) {
        iVar6 = 0;
      }
      if (DAT_001edbc8 < fVar10) {
        iVar6 = -1;
      }
      *(int *)(param_1 + 0x19a0) = iVar6;
    }
    _ZN68__LT_alacritty__config__font__Font_u20_as_u20_core__clone__Clone_GT_5clone17h51757ca44d710c13E
              (&local_278,lVar8 + 0x78);
    local_e4 = local_1b4;
    local_e0 = local_1b0;
    local_1a8 = local_278;
    uStack_1a0 = uStack_270;
    local_198 = local_268;
    uStack_190 = uStack_260;
    local_188 = local_258;
    uStack_180 = uStack_250;
    local_178 = local_248;
    uStack_174 = uStack_244;
    uStack_170 = uStack_240;
    uStack_16c = uStack_23c;
    local_168 = local_238;
    uStack_160 = uStack_230;
    local_158 = local_228;
    uStack_150 = uStack_220;
    local_148 = local_218;
    uStack_140 = uStack_210;
    local_138 = local_208;
    uStack_130 = uStack_200;
    local_128 = local_1f8;
    uStack_120 = uStack_1f0;
    local_f8 = local_1c8;
    uStack_f4 = uStack_1c4;
    uStack_f0 = uStack_1c0;
    uStack_ec = uStack_1bc;
    local_108 = local_1d8;
    uStack_104 = uStack_1d4;
    uStack_100 = uStack_1d0;
    uStack_fc = uStack_1cc;
    local_118 = local_1e8;
    uStack_114 = uStack_1e4;
    uStack_110 = uStack_1e0;
    uStack_10c = uStack_1dc;
    local_df = local_1af;
    local_e8 = iVar6;
    _ZN9alacritty7display13DisplayUpdate8set_font17h951f4b62a42baa09E(param_1 + 0x15f0,&local_1a8);
    lVar8 = *(long *)(param_1 + 0x1e20);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x14b0);
  uVar7 = *(undefined8 *)(param_1 + 0x14b8);
  _ZN9alacritty7display6window6Window9set_theme17h2c8f120771d3197dE
            (uVar9,uVar7,*(undefined *)(lVar8 + 0x1c1));
  if ((((*(short *)(lVar1 + 0x1b8) != *(short *)(lVar8 + 0x1b8)) ||
       (*(short *)(lVar1 + 0x1ba) != *(short *)(lVar8 + 0x1ba))) ||
      (*(char *)(lVar1 + 0x1bc) != *(char *)(lVar8 + 0x1bc))) ||
     (*(char *)(lVar1 + 0x1bf) != *(char *)(lVar8 + 0x1bf))) {
    *(undefined *)(param_1 + 0x16cc) = 1;
  }
  if (*(char *)(param_1 + 0x1e3b) == '\0') {
    if (*(char *)(lVar8 + 0x1bd) != '\0') {
      cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8240391abffeb7c9E
                        (*(undefined8 *)(param_1 + 0x1498),*(undefined8 *)(param_1 + 0x14a0),
                         *(undefined8 *)(lVar1 + 0x150),*(undefined8 *)(lVar1 + 0x158));
      if (cVar3 == '\0') goto LAB_0056fccb;
    }
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_009de2a8
    )(&local_278,lVar8 + 0x148);
    _ZN9alacritty7display6window6Window9set_title17h52d854e97dce46c3E(param_1 + 0x1490,&local_278);
    lVar8 = *(long *)(param_1 + 0x1e20);
    uVar9 = *(undefined8 *)(param_1 + 0x14b0);
    uVar7 = *(undefined8 *)(param_1 + 0x14b8);
  }
LAB_0056fccb:
  _ZN9alacritty7display6window6Window15set_transparent17h592de576e1e64970E
            (uVar9,uVar7,*(float *)(lVar8 + 0x1b4) < DAT_001eb5d0);
  _ZN9alacritty7display6window6Window8set_blur17hdaafcc381de4b4caE
            (uVar9,uVar7,*(undefined *)(lVar8 + 0x1be));
  _ZN9alacritty7display4hint9HintState15update_alphabet17hfa8d2fcb226dbb8aE
            (param_1 + 0x1588,*(undefined8 *)(lVar8 + 0x2c8),*(undefined8 *)(lVar8 + 0x2d0));
  local_d0 = 0x8000000000000008;
  local_d8 = 0x8000000000000000;
  _ZN9alacritty5event5Event3new17hfaf9b093bcbfdb2bE(&local_278,&local_d8,0);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hae985e737553ba9cE
            (param_1 + 0x1de0,&local_278,&PTR_s_alacritty_src_window_context_rs_00984380);
  *(undefined *)(param_1 + 0x1e38) = 1;
  _ZN4core3ptr80drop_in_place_LT_alloc__rc__Rc_LT_alacritty__config__ui_config__UiConfig_GT__GT_17h077aa8980e2272c3E
            (&local_280);
  return;
}