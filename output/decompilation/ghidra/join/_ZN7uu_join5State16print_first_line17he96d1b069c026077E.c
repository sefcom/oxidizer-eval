void _ZN7uu_join5State16print_first_line17he96d1b069c026077E
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _ZN7uu_join5State10print_line17h5738688f2590ce02E
              (param_1,param_2,*(undefined8 *)(param_1 + 8),param_3);
    return;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E_002393c8)
            (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00232668);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}