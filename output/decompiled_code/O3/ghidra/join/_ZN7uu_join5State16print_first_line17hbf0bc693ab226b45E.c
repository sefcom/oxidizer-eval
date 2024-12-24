void __rustcall uu_join::State::print_first_line(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    print_line(param_1,param_2,*(undefined8 *)(param_1 + 8),param_3);
    return;
  }
  (*(code *)PTR_panic_bounds_check_00239f88)(0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00233208);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}