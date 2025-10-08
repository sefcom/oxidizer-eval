void _ZN7uu_join5State16print_first_line17h3e0e204aedad6bbeE
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _ZN7uu_join5State10print_line17h3e032f5a71a0aaa7E
              (param_1,param_2,*(undefined8 *)(param_1 + 8),param_3);
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00204d38)
            (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001fd348);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}