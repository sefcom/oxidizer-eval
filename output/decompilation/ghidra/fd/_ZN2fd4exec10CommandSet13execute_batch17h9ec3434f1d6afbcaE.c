undefined4
_ZN2fd4exec10CommandSet13execute_batch17h9ec3434f1d6afbcaE
          (long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_f8;
  long lStack_f0;
  long local_e8;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long lStack_80;
  undefined8 *local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  lStack_80 = param_1 + param_2 * 0x18;
  local_78 = &local_c8;
                    /* try { // try from 002f3196 to 002f31bc has its CatchHandler @ 002f33e5 */
  local_d0 = param_6;
  local_c8 = param_4;
  local_88 = param_1;
  _ZN4core4iter6traits8iterator8Iterator7collect17h7897225042ca8b4cE(&local_b8,&local_88);
  local_e8 = local_a8;
  local_f8 = local_b8;
  lStack_f0 = lStack_b0;
  local_38 = param_3[10];
  local_48 = param_3[8];
  lStack_40 = param_3[9];
  local_88 = *param_3;
  lStack_80 = param_3[1];
  local_78 = (undefined8 *)param_3[2];
  lStack_70 = param_3[3];
  local_68 = param_3[4];
  lStack_60 = param_3[5];
  local_58 = param_3[6];
  lStack_50 = param_3[7];
                    /* try { // try from 002f324a to 002f324e has its CatchHandler @ 002f33e0 */
  while (_ZN115__LT_core__iter__adapters__filter_map__FilterMap_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0c91a6d5114509e0E
                   (&local_a0,&local_88), uVar2 = local_90, uVar1 = local_98, lVar5 = local_a0,
        local_a0 != -0x8000000000000000) {
    if (local_e8 != 0) {
      lVar6 = local_e8 * -0x150;
      local_d8 = lStack_f0;
      lVar4 = 0;
      lVar7 = lStack_f0;
      do {
                    /* try { // try from 002f32a0 to 002f32c9 has its CatchHandler @ 002f33f2 */
        local_c0 = _ZN2fd4exec14CommandBuilder4push17hb7cae759d47c5e7aE
                             (lVar7,uVar1,uVar2,param_5,local_d0);
        if (local_c0 != 0) {
                    /* try { // try from 002f32ee to 002f32f5 has its CatchHandler @ 002f33d4 */
          _ZN2fd4exec7command16handle_cmd_error17he0c689dc29352ec0E
                    ((local_d8 - lVar4) + 0x50,local_c0);
          _ZN4core3mem4drop17h3eb21fab0c0d11e6E(lVar5,uVar1);
                    /* try { // try from 002f3303 to 002f330f has its CatchHandler @ 002f33d6 */
          _ZN4core3ptr342drop_in_place_LT_core__iter__adapters__filter_map__FilterMap_LT_core__iter__adapters__flatten__Flatten_LT_crossbeam_channel__channel__IntoIter_LT_fd__walk__Batch_GT__GT__C_fd__exec__job__batch_LT_core__iter__adapters__flatten__Flatten_LT_crossbeam_channel__channel__IntoIter_LT_fd__walk__Batch_GT__GT__GT____u7b__u7b_closure_u7d__u7d__GT__GT_17hc4dbdbefda5b3203E
                    (&local_88);
          goto LAB_002f3310;
        }
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf603403cb1b5404dE
                  (&local_c0);
        lVar4 = lVar4 + -0x150;
        lVar7 = lVar7 + 0x150;
      } while (lVar6 - lVar4 != 0);
    }
    _ZN4core3mem4drop17h3eb21fab0c0d11e6E(lVar5,uVar1);
  }
                    /* try { // try from 002f332e to 002f333a has its CatchHandler @ 002f33d6 */
  _ZN4core3ptr342drop_in_place_LT_core__iter__adapters__filter_map__FilterMap_LT_core__iter__adapters__flatten__Flatten_LT_crossbeam_channel__channel__IntoIter_LT_fd__walk__Batch_GT__GT__C_fd__exec__job__batch_LT_core__iter__adapters__flatten__Flatten_LT_crossbeam_channel__channel__IntoIter_LT_fd__walk__Batch_GT__GT__GT____u7b__u7b_closure_u7d__u7d__GT__GT_17hc4dbdbefda5b3203E
            (&local_88);
  if (local_e8 == 0) {
    lVar4 = 0;
  }
  else {
    lVar7 = local_e8 * 0x150;
    lVar5 = lStack_f0;
    do {
                    /* try { // try from 002f3360 to 002f337c has its CatchHandler @ 002f33db */
      local_88 = _ZN2fd4exec14CommandBuilder6finish17hfc49bcefb3885af8E(lVar5);
      if (local_88 != 0) {
                    /* try { // try from 002f33c4 to 002f33ce has its CatchHandler @ 002f33d6 */
        _ZN2fd4exec7command16handle_cmd_error17he0c689dc29352ec0E(lVar5 + 0x50,local_88);
LAB_002f3310:
        _ZN4core3ptr68drop_in_place_LT_alloc__vec__Vec_LT_fd__exec__CommandBuilder_GT__GT_17hf9cab55349afe64aE
                  (&local_f8);
        return 4;
      }
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf603403cb1b5404dE
                (&local_88);
      lVar5 = lVar5 + 0x150;
      lVar7 = lVar7 + -0x150;
      lVar4 = local_e8;
    } while (lVar7 != 0);
  }
  uVar3 = _ZN2fd10exit_codes15merge_exitcodes17h427ec0cdc6d6ee56E
                    (lStack_f0,lVar4 * 0x150 + lStack_f0);
  _ZN4core3ptr68drop_in_place_LT_alloc__vec__Vec_LT_fd__exec__CommandBuilder_GT__GT_17hf9cab55349afe64aE
            (&local_f8);
  return uVar3;
}