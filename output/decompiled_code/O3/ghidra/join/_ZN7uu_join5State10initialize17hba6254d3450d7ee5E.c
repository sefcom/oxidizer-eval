undefined8 __rustcall uu_join::State::initialize(long param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_c8;
  undefined local_c0 [16];
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_80;
  code *local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  read_line(&local_40,param_1,param_2);
  if (local_40 != -0x8000000000000000) {
    if (local_40 == -0x7fffffffffffffff) {
                    /* try { // try from 001716f8 to 001717af has its CatchHandler @ 001717c3 */
      local_c0 = (*(code *)PTR_util_name_002393b0)();
      local_78 = _<&T_as_core::fmt::Display>::fmt;
      local_b0 = &DAT_00232610;
      local_a8 = 2;
      local_90 = 0;
      local_a0 = &local_80;
      local_98 = 1;
      local_80 = (undefined8 *)local_c0;
      (*(code *)PTR__eprint_002393a0)(&local_b0);
      local_c0._8_8_ = PTR_fmt_002393b8;
      local_b0 = &DAT_00232630;
      local_a8 = 2;
      local_90 = 0;
      local_98 = 1;
      local_c0._0_8_ = &local_c8;
      local_a0 = (undefined8 **)local_c0;
      (*(code *)PTR__eprint_002393a0)(&local_b0);
      (*(code *)PTR_exit_002393c0)(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_70 = local_40;
    local_68 = local_38;
    uStack_64 = uStack_34;
    uStack_60 = uStack_30;
    uStack_5c = uStack_2c;
    local_58 = local_28;
    uStack_54 = uStack_24;
    uStack_50 = uStack_20;
    uStack_4c = uStack_1c;
    local_48 = local_18;
    ::alloc::vec::Vec<T,A>::push(param_1,&local_70);
    if (param_3 != '\0') {
      if (*(long *)(param_1 + 0x10) != 0) {
        return *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
      }
      uVar2 = (*(code *)PTR_panic_bounds_check_002393c8)
                        (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00232650);
                    /* catch() { ... } // from try @ 001716f8 with catch @ 001717c3 */
                    /* try { // try from 001717ca to 001717ce has its CatchHandler @ 001717d7 */
      core::ptr::drop_in_place<std::io::error::Error>(local_c8);
      uVar2 = _Unwind_Resume(uVar2);
      return uVar2;
    }
  }
  return 0;
}