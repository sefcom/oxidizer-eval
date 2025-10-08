void _ZN9alacritty7display4hint9HintState14keyboard_input17h750f6bfcd850de91E
               (undefined8 *param_1,ulong param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined4 local_6c;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_6c = param_4;
  switch(param_4) {
  case 3:
  case 0x1b:
    _ZN9alacritty7display4hint9HintState4stop17hd033c0de1ffc73a4E(param_2);
    break;
  case 8:
  case 0x1f:
    if (*(long *)(param_2 + 0x58) != 0) {
      *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + -1;
    }
  }
  _ZN9alacritty7display4hint9HintState14update_matches17h4cd609f91e40cc38E(param_2,param_3);
  if (*(long *)(param_2 + 0x60) != 0) {
    local_60 = *(long *)(param_2 + 0x38);
    local_58 = local_60 + *(long *)(param_2 + 0x40) * 0x18;
    local_50 = 0;
    auVar6 = _ZN125__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9try_rfold17h57c7db848373ad09E
                       (&local_60,&local_6c);
    uVar3 = auVar6._0_8_;
    if (auVar6._8_8_ != 0) {
      if (*(long *)(auVar6._8_8_ + 0x10) == 1) {
        if (uVar3 < *(ulong *)(param_2 + 0x28)) {
          _ZN82__LT_core__ops__range__RangeInclusive_LT_Idx_GT__u20_as_u20_core__clone__Clone_GT_5clone17h5e74ac01ef9f7a4dE
                    (&local_48,uVar3 * 0x28 + *(long *)(param_2 + 0x20));
          _ZN5alloc2rc10RcInnerPtr10inc_strong17h04231d05a40329cbE(*(undefined8 *)(param_2 + 0x60));
          lVar1 = *(long *)(param_2 + 0x60);
          local_68 = lVar1;
          if (*(char *)(lVar1 + 0xe9) == '\0') {
                    /* try { // try from 00547953 to 00547976 has its CatchHandler @ 005479d7 */
            _ZN9alacritty7display4hint9HintState4stop17hd033c0de1ffc73a4E(param_2);
          }
          else {
            *(undefined8 *)(param_2 + 0x58) = 0;
          }
          param_2 = local_48;
          lVar4 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                            (param_3 + 0x28,uStack_40,&PTR_DAT_009821c8);
          if (param_2 < *(ulong *)(lVar4 + 0x10)) {
            uVar5 = _ZN18alacritty_terminal4term4cell4Cell9hyperlink17h5de1efd02cb51dbcE
                              (*(undefined8 *)(*(long *)(lVar4 + 8) + param_2 * 0x18));
            param_1[2] = local_48;
            param_1[3] = CONCAT44(uStack_3c,uStack_40);
            param_1[4] = local_38;
            param_1[5] = uStack_30;
            param_1[6] = local_28;
            *param_1 = uVar5;
            param_1[1] = lVar1;
            return;
          }
        }
        else {
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                    (uVar3,*(ulong *)(param_2 + 0x28),&PTR_DAT_009821b0);
        }
                    /* try { // try from 005479c5 to 005479d4 has its CatchHandler @ 005479d7 */
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)(param_2);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h7f64891ed476e2feE
                (param_2 + 0x48,param_4,&PTR_DAT_009821e0);
    }
  }
  *(undefined *)(param_1 + 6) = 2;
  return;
}