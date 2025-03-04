/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * _ZN5uu_dd5Input9new_stdin17h814376ebbe5b03eaE(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined auVar4 [16];
  undefined8 local_e8;
  undefined8 *local_e0;
  code *local_d8;
  undefined local_d0 [16];
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_88;
  
  _ZN5uu_dd6Source13stdin_as_file17h2487bb1f6c82b1ddE();
  local_e8 = 1;
                    /* try { // try from 001d6ab2 to 001d6bca has its CatchHandler @ 001d6bf7 */
  _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_c0,(long)&local_e8 + 4);
  uVar1 = local_b8;
  if ((int)local_c0 != 2) {
    if (((local_88 & 0xf000) == 0x8000) && (*(char *)(param_2 + 0x42) != '\0')) {
      local_d0 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_e0 = (undefined8 *)local_d0;
      local_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h377362f42c043423E;
      local_c0 = (undefined **)&DAT_00261008;
      local_b8 = 2;
      uStack_a0 = 0;
      local_b0 = &local_e0;
      local_a8 = 1;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c0);
      local_c0 = &PTR_s_standard_input__not_a_directory_00261060;
      local_b8 = 1;
      local_b0 = (undefined8 **)0x8;
      local_a8 = 0;
      uStack_a0 = 0;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c0);
      auVar4 = _ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E
                         (1);
      goto LAB_001d6b91;
    }
    uVar2 = _DAT_00119580;
    uVar3 = _UNK_00119584;
    if (*(long *)(param_2 + 0x80) == 0) {
LAB_001d6be6:
      param_1[1] = CONCAT44(uVar3,uVar2);
      param_1[2] = param_2;
      *param_1 = 0;
      return param_1;
    }
    auVar4 = _ZN5uu_dd6Source4skip17hb4d238ded1ebd635E(&local_e8);
    uVar1 = auVar4._8_8_;
    if (auVar4._0_8_ == 0) {
      uVar2 = (int)local_e8;
      uVar3 = (int)((ulong)local_e8 >> 0x20);
      goto LAB_001d6be6;
    }
  }
  auVar4 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                     (uVar1);
LAB_001d6b91:
  *(undefined (*) [16])(param_1 + 1) = auVar4;
  *param_1 = 1;
  _ZN4core3ptr34drop_in_place_LT_uu_dd__Source_GT_17hdffc88ceb2c212a0E(local_e8._4_4_);
  return param_1;
}