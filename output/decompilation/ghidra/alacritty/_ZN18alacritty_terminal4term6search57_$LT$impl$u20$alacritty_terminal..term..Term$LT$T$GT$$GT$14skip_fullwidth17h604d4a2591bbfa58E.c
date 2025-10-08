void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_14skip_fullwidth17h604d4a2591bbfa58E
               (long param_1,long param_2,long *param_3,int param_4)

{
  ushort uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined auVar5 [12];
  long local_30 [3];
  
  uVar1 = *(ushort *)(*param_3 + 0x14);
  if (param_4 == 0) {
    if ((uVar1 & 0x40) != 0) {
      _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
                (local_30,param_2);
      if (local_30[0] != 0) {
        *param_3 = local_30[0];
      }
      auVar5 = _ZN18alacritty_terminal5index5Point3sub17h8b4b7dd5f4447bbcE
                         (*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),param_1,1);
      uVar3 = auVar5._0_8_;
      lVar4 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                        (param_1 + 0x28,auVar5._8_4_,
                         &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977a48);
      if (*(ulong *)(lVar4 + 0x10) <= uVar3) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (uVar3,*(ulong *)(lVar4 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977a48);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(byte *)(*(long *)(lVar4 + 8) + 0x15 + uVar3 * 0x18) & 4) != 0) {
        _ZN115__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_alacritty_terminal__grid__BidirectionalIterator_GT_4prev17h095ab9c52e150b73E
                  (local_30,param_2);
      }
    }
  }
  else {
    if (((uVar1 & 0x20) == 0) || (*(long *)(param_1 + 0xb8) - 1U <= *(ulong *)(param_2 + 8))) {
      if ((uVar1 & 0x400) == 0) {
        return;
      }
      _ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
                (local_30,param_2);
      if (local_30[0] != 0) {
        *param_3 = local_30[0];
      }
    }
    _ZN106__LT_alacritty_terminal__grid__GridIterator_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hccebf77f76d7c458E
              (local_30,param_2);
  }
  return;
}