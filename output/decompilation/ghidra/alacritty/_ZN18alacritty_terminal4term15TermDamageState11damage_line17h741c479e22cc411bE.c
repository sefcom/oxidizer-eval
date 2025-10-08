void _ZN18alacritty_terminal4term15TermDamageState11damage_line17h741c479e22cc411bE
               (long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_3 < param_2) {
    uVar2 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E
                      (*(undefined8 *)(param_1 + 8 + param_3 * 0x18),param_4);
    *(undefined8 *)(param_1 + 8 + param_3 * 0x18) = uVar2;
    uVar2 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E
                      (*(undefined8 *)(param_1 + 0x10 + param_3 * 0x18),param_5);
    *(undefined8 *)(param_1 + 0x10 + param_3 * 0x18) = uVar2;
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
            (param_3,param_2,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977980);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}