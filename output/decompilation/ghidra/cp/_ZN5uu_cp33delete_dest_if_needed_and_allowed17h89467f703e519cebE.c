void _ZN5uu_cp33delete_dest_if_needed_and_allowed17h89467f703e519cebE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,char param_7,undefined8 param_8)

{
  char cVar1;
  long lVar2;
  undefined8 *local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  uint local_188 [2];
  long local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  byte local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (1 < *(byte *)(param_6 + 0x54)) goto LAB_001a2f1f;
  if (*(char *)(param_6 + 0x55) == '\x02') {
    if (*(char *)(param_6 + 0x50) == '\0') goto LAB_001a2f1f;
    cVar1 = *(char *)(param_6 + 0x59);
    if (param_7 == '\x01' && cVar1 == '\0') {
      cVar1 = *(char *)(param_6 + 0x58);
    }
    _ZN6uucore8features2fs15FileInformation9from_path17hfd069e4f76a9cc58E
              (local_188,param_2,param_3,cVar1);
    local_1d8 = 1;
    local_1c0 = 1;
    local_218 = &local_1d8;
    local_210 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
    ;
    local_1b8 = &PTR_s_cannot_stat_0025ec38;
    local_1b0 = 1;
    local_198 = 0;
    local_1a0 = 1;
                    /* try { // try from 001a2dae to 001a2dbc has its CatchHandler @ 001a2f41 */
    local_1d0 = param_2;
    local_1c8 = param_3;
    local_1a8 = (undefined *)&local_218;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(&local_1f0,&local_1b8);
    if ((local_188[0] & 1) != 0) {
      param_1[3] = local_1e0;
      param_1[1] = local_1f0;
      param_1[2] = uStack_1e8;
      *param_1 = 0x8000000000000002;
      param_1[4] = local_180;
      return;
    }
    local_1f8 = local_170;
    local_208 = local_180;
    uStack_200 = uStack_178;
    local_98 = local_160;
    uStack_90 = uStack_158;
    uStack_80 = uStack_148;
    local_78 = local_140;
    uStack_70 = uStack_138;
    local_68 = local_130;
    uStack_60 = uStack_128;
    local_58 = local_120;
    uStack_50 = uStack_118;
    local_48 = local_110;
    uStack_40 = uStack_108;
    local_38 = local_100;
    uStack_34 = uStack_fc;
    uStack_30 = uStack_f8;
    uStack_2c = uStack_f4;
    _ZN4core3ptr230drop_in_place_LT__LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__u20_as_u20_quick_error__ResultExt_LT__LP__RP__C_std__io__error__Error_GT__GT___context_LT_alloc__string__String_GT____u7b__u7b_closure_u7d__u7d__GT_17h92d6353b521410cdE
              (&local_1f0);
    local_c8 = local_1f8;
    local_d8 = (undefined4)local_208;
    uStack_d4 = local_208._4_4_;
    uStack_d0 = (undefined4)uStack_200;
    uStack_cc = uStack_200._4_4_;
    local_b8 = (undefined4)local_208;
    uStack_b4 = local_208._4_4_;
    uStack_b0 = (undefined4)uStack_200;
    uStack_ac = uStack_200._4_4_;
    local_a8 = local_1f8;
    local_a0 = local_168;
    lVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h13e176d417cda5caE
                      (param_8,&local_b8);
    if (lVar2 == 0) goto LAB_001a2f1f;
  }
  else if ((*(char *)(param_6 + 0x55) != '\x01') &&
          (cVar1 = (*(code *)
                     PTR__ZN6uucore8features2fs15is_symlink_loop17h04d1ad90472ac98aE_00267c68)
                             (param_4,param_5), cVar1 == '\0')) {
    _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(local_188,param_4,param_5);
    if (local_188[0] == 2) goto LAB_001a2f0c;
    if ((local_150 & 0x92) != 0) goto LAB_001a2f1f;
  }
  local_180 = _ZN3std2fs11remove_file17h19277b2d7a4f8643E(param_4,param_5);
  if (local_180 != 0) {
LAB_001a2f0c:
    *param_1 = 0x8000000000000001;
    param_1[1] = local_180;
    return;
  }
LAB_001a2f1f:
  *param_1 = 0x800000000000000c;
  return;
}