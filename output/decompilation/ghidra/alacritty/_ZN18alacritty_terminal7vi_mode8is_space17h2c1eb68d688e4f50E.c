ulong _ZN18alacritty_terminal7vi_mode8is_space17h2c1eb68d688e4f50E
                (long param_1,ulong param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (param_1 + 0x28,param_3,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977d00);
  if (*(ulong *)(lVar3 + 0x10) <= param_2) {
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
              (param_2,*(ulong *)(lVar3 + 0x10),&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977d18);
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  if ((*(ushort *)(*(long *)(lVar3 + 8) + 0x14 + param_2 * 0x18) & 0x440) != 0) {
    return 0;
  }
  iVar1 = *(int *)(*(long *)(lVar3 + 8) + param_2 * 0x18 + 0x10);
  return (ulong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 9 || iVar1 == 0x20);
}