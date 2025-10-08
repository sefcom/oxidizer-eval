ulong _ZN9alacritty5input22Processor_LT_T_C_A_GT_12cursor_state17hd11ac0475868ceffE(long param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined auVar9 [16];
  ulong local_68;
  undefined4 local_60;
  undefined8 local_58 [5];
  
  lVar1 = *(long *)(param_1 + 8);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar1);
  uVar7 = *(undefined8 *)(lVar1 + 200);
  lVar6 = *(long *)(param_1 + 0x18);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar6);
  lVar2 = *(long *)(param_1 + 0x30);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_9size_info17h75f6d6cd23dc8329E
            (local_58,lVar2);
  auVar9 = _ZN9alacritty5event5Mouse5point17h7553a37268becc3aE
                     (*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),local_58,uVar7);
  uVar8 = auVar9._0_8_;
  local_60 = auVar9._8_4_;
  local_68 = uVar8;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar1);
  lVar6 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (lVar1 + 0x28,auVar9._8_8_ & 0xffffffff,&PTR_DAT_00982e98);
  if (*(ulong *)(lVar6 + 0x10) <= uVar8) {
    uVar7 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                      (uVar8,*(ulong *)(lVar6 + 0x10),&PTR_DAT_00982e98);
                    /* catch() { ... } // from try @ 0055b431 with catch @ 0055b4bf */
                    /* try { // try from 0055b4c2 to 0055b4cb has its CatchHandler @ 0055b4d4 */
    _ZN4core3ptr90drop_in_place_LT_core__option__Option_LT_alacritty_terminal__term__cell__Hyperlink_GT__GT_17h8fb20e530ce7d2cbE
              (local_58);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar7);
  }
  local_58[0] = _ZN18alacritty_terminal4term4cell4Cell9hyperlink17h5de1efd02cb51dbcE
                          (*(undefined8 *)(*(long *)(lVar6 + 8) + uVar8 * 0x18));
                    /* try { // try from 0055b431 to 0055b438 has its CatchHandler @ 0055b4bf */
  uVar5 = _ZN9alacritty5input22Processor_LT_T_C_A_GT_24message_bar_cursor_state17h1057cdc0852c0ab1E
                    (param_1);
  uVar8 = (ulong)uVar5;
  if ((char)uVar5 == '$') {
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_7display17hd691c8f83dd13719E
              (lVar2);
    if (*(char *)(lVar2 + 0x758) != '\x02') {
      cVar4 = _ZN4core3ops8function6FnOnce9call_once17hfee6073f4ce7fd70E
                        (&local_68,local_58,lVar2 + 0x728);
      uVar8 = CONCAT71((uint7)(uint3)(uVar5 >> 8),3);
      if (cVar4 != '\0') goto LAB_0055b494;
    }
    pbVar3 = *(byte **)(param_1 + 0x28);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
              (pbVar3);
    if ((*pbVar3 & 4) == 0) {
      cVar4 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_10mouse_mode17h5645ae47cef353d4E
                        (lVar1);
      if (cVar4 != '\0') {
        uVar8 = 0;
        goto LAB_0055b494;
      }
    }
    uVar8 = CONCAT71((int7)(uVar8 >> 8),8);
  }
LAB_0055b494:
  _ZN4core3ptr90drop_in_place_LT_core__option__Option_LT_alacritty_terminal__term__cell__Hyperlink_GT__GT_17h8fb20e530ce7d2cbE
            (local_58);
  return uVar8;
}