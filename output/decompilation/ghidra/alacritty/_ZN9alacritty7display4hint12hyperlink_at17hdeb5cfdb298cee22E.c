void _ZN9alacritty7display4hint12hyperlink_at17hdeb5cfdb298cee22E
               (long *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 local_98;
  ulong local_88;
  undefined8 *local_80;
  ulong local_78;
  undefined4 local_70;
  long local_68;
  ulong local_60;
  undefined4 local_58;
  long local_50;
  int local_48;
  long local_40;
  long local_38;
  
  lVar5 = param_2 + 0x28;
  lVar3 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (lVar5,param_4,&PTR_DAT_00982240);
  if (*(ulong *)(lVar3 + 0x10) <= param_3) {
    uVar6 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                      (param_3,*(ulong *)(lVar3 + 0x10),&PTR_DAT_00982240);
                    /* catch() { ... } // from try @ 00548880 with catch @ 0054890f */
                    /* catch() { ... } // from try @ 00548810 with catch @ 00548911 */
                    /* try { // try from 00548914 to 0054891d has its CatchHandler @ 00548926 */
    _ZN4core3ptr62drop_in_place_LT_alacritty_terminal__term__cell__Hyperlink_GT_17hef5f91261f2a2291E
              (&local_38);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar6);
  }
  lVar3 = _ZN18alacritty_terminal4term4cell4Cell9hyperlink17h5de1efd02cb51dbcE
                    (*(undefined8 *)(*(long *)(lVar3 + 8) + param_3 * 0x18));
  if (lVar3 == 0) {
    *(undefined *)(param_1 + 5) = 2;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc0) + -1;
    local_50 = *(long *)(param_2 + 0xb8) + -1;
    local_98 = param_4;
    local_88 = param_3;
    local_68 = lVar5;
    local_60 = param_3;
    local_58 = param_4;
    local_48 = iVar2;
    local_40 = local_50;
    local_38 = lVar3;
                    /* try { // try from 00548810 to 00548849 has its CatchHandler @ 00548911 */
    while (((_ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
                       (&local_80,&local_68), uVar7 = local_70, uVar8 = local_78,
            local_80 != (undefined8 *)0x0 &&
            (lVar4 = _ZN18alacritty_terminal4term4cell4Cell9hyperlink17h5de1efd02cb51dbcE(*local_80)
            , lVar4 != 0)) &&
           (cVar1 = _ZN9alacritty7display4hint12hyperlink_at28__u7b__u7b_closure_u7d__u7d_17h03a543be530673e5E
                              (lVar3,lVar4), cVar1 != '\0'))) {
      local_98 = uVar7;
      local_88 = uVar8;
    }
    local_50 = local_40;
    local_68 = lVar5;
    local_60 = param_3;
    local_58 = param_4;
    local_48 = iVar2;
    do {
                    /* try { // try from 00548880 to 005488b7 has its CatchHandler @ 0054890f */
      uVar7 = param_4;
      uVar8 = param_3;
      _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
                (&local_80,&local_68);
      param_4 = local_70;
      param_3 = local_78;
      if ((local_80 == (undefined8 *)0x0) ||
         (lVar5 = _ZN18alacritty_terminal4term4cell4Cell9hyperlink17h5de1efd02cb51dbcE(*local_80),
         lVar5 == 0)) break;
      cVar1 = _ZN9alacritty7display4hint12hyperlink_at28__u7b__u7b_closure_u7d__u7d_17h03a543be530673e5E
                        (lVar3,lVar5);
    } while (cVar1 != '\0');
    *param_1 = lVar3;
    param_1[1] = uVar8;
    *(undefined4 *)(param_1 + 2) = uVar7;
    param_1[3] = local_88;
    *(undefined4 *)(param_1 + 4) = local_98;
    *(undefined *)(param_1 + 5) = 0;
  }
  return;
}