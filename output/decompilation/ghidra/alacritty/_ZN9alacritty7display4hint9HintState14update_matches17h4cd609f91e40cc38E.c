void _ZN9alacritty7display4hint9HintState14update_matches17h4cd609f91e40cc38E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulong local_f8;
  undefined8 local_f0;
  long *local_e8;
  long local_e0;
  undefined local_b8 [136];
  
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 != 0) {
    lVar1 = param_1 + 0x18;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(char *)(lVar6 + 0xd8) != '\0') {
      _ZN9alacritty7display4hint30visible_unique_hyperlinks_iter17h56872e0ca65821a6E(local_b8);
      _ZN97__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_I_GT__GT_11spec_extend17h70f0f24cf9bbdc0eE
                (lVar1,local_b8);
      lVar6 = *(long *)(param_1 + 0x60);
    }
    if (*(long *)(lVar6 + 0xd0) != 0) {
      local_f0 = param_2;
      local_e8 = (long *)(param_1 + 0x60);
      local_e0 = lVar1;
      _ZN9alacritty6config9ui_config9LazyRegex13with_compiled17h48138ab86309e773E
                (*(long *)(lVar6 + 0xd0),&local_f0);
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      _ZN9alacritty7display4hint9HintState4stop17hd033c0de1ffc73a4E(param_1);
      return;
    }
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_11sort_by_key17hd25b6dbfbeee2c6bE
              (*(undefined8 *)(param_1 + 0x20));
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_12dedup_by_key17h2e5d6a06cf23bc2cE(lVar1);
    _ZN9alacritty7display4hint10HintLabels3new17hcaae289cf8e987deE(&local_f0,param_1);
    uVar7 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(ulong *)(param_1 + 0x58);
    local_120 = 0;
    uStack_118 = 4;
    local_110 = 0;
                    /* try { // try from 00547513 to 0054751f has its CatchHandler @ 00547685 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17hb623107bdbe94c48E(param_1 + 0x30,uVar7,&local_120);
    if (uVar7 != 0) {
      lVar6 = uVar7 * 0x18;
      do {
                    /* try { // try from 00547584 to 00547590 has its CatchHandler @ 005476d0 */
        uVar7 = uVar7 - 1;
        _ZN9alacritty7display4hint10HintLabels4next17h3687c471851e5e21E(&local_108,&local_f0);
        if (local_f8 < uVar3) {
LAB_005475f0:
          if (*(ulong *)(param_1 + 0x40) <= uVar7) {
                    /* try { // try from 00547661 to 00547670 has its CatchHandler @ 0054769b */
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                      (uVar7,*(ulong *)(param_1 + 0x40),&PTR_DAT_00982168);
LAB_00547683:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar1 = *(long *)(param_1 + 0x38);
          _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_i32_GT__GT_17hfe34e1f207b818dfE
                    (*(undefined8 *)(lVar1 + -0x18 + lVar6),*(undefined8 *)(lVar1 + -0x10 + lVar6));
          *(undefined8 *)(lVar1 + -0x18 + lVar6) = 0;
          *(undefined8 *)(lVar1 + -0x10 + lVar6) = 4;
          *(undefined8 *)(lVar1 + -8 + lVar6) = 0;
        }
        else {
                    /* try { // try from 005475a0 to 005475d1 has its CatchHandler @ 005476ac */
          auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h143db52962e7ba72E
                             (uVar3,local_100);
          cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfbdf8a47e9641e35E
                            (auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(param_1 + 0x50),
                             *(undefined8 *)(param_1 + 0x58));
          if (cVar5 == '\0') goto LAB_005475f0;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_9split_off17h45fd739e5909bf69E(&local_120,&local_108,uVar3)
          ;
          if (*(ulong *)(param_1 + 0x40) <= uVar7) {
                    /* try { // try from 00547673 to 00547682 has its CatchHandler @ 00547687 */
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                      (uVar7,*(ulong *)(param_1 + 0x40),&PTR_DAT_00982198);
            goto LAB_00547683;
          }
          lVar1 = *(long *)(param_1 + 0x38);
          _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_i32_GT__GT_17hfe34e1f207b818dfE
                    (*(undefined8 *)(lVar1 + -0x18 + lVar6),*(undefined8 *)(lVar1 + -0x10 + lVar6));
          *(undefined8 *)(lVar1 + -8 + lVar6) = local_110;
          puVar2 = (undefined4 *)(lVar1 + -0x18 + lVar6);
          *puVar2 = (undefined4)local_120;
          puVar2[1] = local_120._4_4_;
          puVar2[2] = (undefined4)uStack_118;
          puVar2[3] = uStack_118._4_4_;
        }
        _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_i32_GT__GT_17hfe34e1f207b818dfE
                  (local_108,local_100);
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != 0);
    }
    _ZN4core3ptr57drop_in_place_LT_alacritty__display__hint__HintLabels_GT_17h8024eb43e99b19d6E
              (&local_f0);
  }
  return;
}