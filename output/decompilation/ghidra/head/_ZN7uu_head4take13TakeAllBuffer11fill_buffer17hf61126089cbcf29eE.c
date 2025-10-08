undefined  [16]
_ZN7uu_head4take13TakeAllBuffer11fill_buffer17hf61126089cbcf29eE(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong in_RAX;
  undefined8 uVar2;
  undefined auVar4 [16];
  ulong local_28;
  ulong uVar3;
  
  local_28 = in_RAX;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17hea7f1ffdc36e02a4E();
  *(undefined8 *)(param_1 + 0x18) = 0;
  auVar4 = _ZN3std2io5impls57__LT_impl_u20_std__io__Read_u20_for_u20__RF_mut_u20_R_GT_4read17hd7e2da240be216a5E
                     (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  uVar3 = auVar4._8_8_;
  do {
    if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      if (uVar3 <= *(ulong *)(param_1 + 0x10)) {
        *(ulong *)(param_1 + 0x10) = uVar3;
      }
      uVar2 = 0;
LAB_00165b12:
      auVar4._8_8_ = uVar3;
      auVar4._0_8_ = uVar2;
      return auVar4;
    }
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uVar3);
    if (cVar1 != '#') {
      uVar2 = 1;
      goto LAB_00165b12;
    }
    local_28 = uVar3;
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hcee48fbfcf3aefedE(&local_28);
    auVar4 = _ZN3std2io5impls57__LT_impl_u20_std__io__Read_u20_for_u20__RF_mut_u20_R_GT_4read17hd7e2da240be216a5E
                       (param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    uVar3 = auVar4._8_8_;
  } while( true );
}