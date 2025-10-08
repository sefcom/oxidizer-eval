void _ZN4just8platform4unix98__LT_impl_u20_just__platform_interface__PlatformInterface_u20_for_u20_just__platform__Platform_GT_22install_signal_handler17hba26c624466e5775E
               (char *param_1)

{
  undefined4 uVar1;
  long local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  (*(code *)PTR__ZN4just7signals7Signals3new17he7a9f7e370667484E_00566c68)(&local_e0);
  uVar1 = local_e0._4_4_;
  if ((char)local_e0 != '8') {
    param_1[3] = local_e0._3_1_;
    *(undefined2 *)(param_1 + 1) = local_e0._1_2_;
    *(undefined8 *)(param_1 + 0x18) = local_c8;
    *(undefined8 *)(param_1 + 0x20) = uStack_c0;
    *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_b7,local_b8);
    *(undefined8 *)(param_1 + 0x30) = uStack_b0;
    *(undefined8 *)(param_1 + 0x38) = local_a8;
    *(undefined8 *)(param_1 + 0x40) = uStack_a0;
    *(undefined8 *)(param_1 + 0x48) = local_98;
    *(undefined8 *)(param_1 + 0x50) = uStack_90;
    *(undefined8 *)(param_1 + 0x58) = local_88;
    *(undefined8 *)(param_1 + 0x60) = uStack_80;
    *(undefined8 *)(param_1 + 8) = local_d8;
    *(undefined8 *)(param_1 + 0x10) = uStack_d0;
    *param_1 = (char)local_e0;
    *(undefined4 *)(param_1 + 4) = local_e0._4_4_;
    return;
  }
  uStack_d0 = 0x8000000000000000;
  local_e0 = 0;
  local_b8 = 0;
                    /* try { // try from 00382b45 to 00382b5d has its CatchHandler @ 00382c6c */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (&local_40,"signal handler",0xe);
  local_68 = local_30;
  local_78 = local_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
                    /* try { // try from 00382b7e to 00382b98 has its CatchHandler @ 00382c5a */
  (*(code *)PTR__ZN3std6thread7Builder4name17h9a7df364061ccb51E_00566c70)
            (&local_40,&local_e0,&local_78);
  _ZN3std6thread7Builder15spawn_unchecked17heb5620ad3f347fb2E(&local_f8,&local_40,uVar1);
  if (local_f8 != 0) {
    local_50 = local_f0;
    uStack_4c = uStack_ec;
    uStack_48 = uStack_e8;
    uStack_44 = uStack_e4;
    local_58 = local_f8;
    _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h74a671e0500e173cE
              (&local_58);
    *param_1 = '8';
    return;
  }
  *param_1 = '/';
  *(ulong *)(param_1 + 8) = CONCAT44(uStack_ec,local_f0);
  return;
}