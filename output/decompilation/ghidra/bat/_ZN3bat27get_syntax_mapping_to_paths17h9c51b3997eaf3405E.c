void _ZN3bat27get_syntax_mapping_to_paths17h9c51b3997eaf3405E
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined auVar4 [16];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined local_68 [16];
  undefined local_50 [32];
  
  local_68 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17hc0603bc6e81efd7bE();
  local_88 = PTR_DAT_007c6f08;
  uStack_80 = _UNK_007c6f10;
  local_78 = _DAT_007c6f18;
  uStack_74 = _UNK_007c6f1c;
  uStack_70 = _UNK_007c6f20;
  uStack_6c = _UNK_007c6f24;
  _ZN185__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__ops__try_trait__FromResidual_LT_core__ops__control_flow__ControlFlow_LT_B_C_core__convert__Infallible_GT__GT__GT_13from_residual17h948d462cf561b9e9E
            (local_50,param_2);
  while( true ) {
                    /* try { // try from 004ada00 to 004ada9a has its CatchHandler @ 004adad1 */
    auVar4 = _ZN106__LT_core__iter__adapters__chain__Chain_LT_A_C_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf603f4ed33c62cfbE
                       (local_50);
    plVar3 = auVar4._8_8_;
    lVar1 = auVar4._0_8_;
    if (lVar1 == 0) break;
    if (*plVar3 == 0) {
      _ZN9hashbrown11rustc_entry62__LT_impl_u20_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__GT_11rustc_entry17hdbfddc9a2f967a1aE
                (&local_a8,&local_88,plVar3[1],plVar3[2]);
      if (CONCAT44(uStack_a4,local_a8) == 0) {
        local_c8 = 0;
      }
      else {
        uStack_b0 = uStack_90;
        local_c8 = CONCAT44(uStack_a4,local_a8);
      }
      uVar2 = _ZN3std11collections4hash3map18Entry_LT_K_C_V_GT_14or_insert_with17h95d1d0fc4e3f9b05E
                        (&local_c8);
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hab28b98124005ba5E
                (&local_a8,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
      uStack_c0 = uStack_a0;
      uStack_bc = uStack_9c;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb583a419eaf91a2bE(uVar2,&local_c8);
    }
  }
  *(undefined (*) [16])(param_1 + 4) = local_68;
  param_1[2] = CONCAT44(uStack_74,local_78);
  param_1[3] = CONCAT44(uStack_6c,uStack_70);
  *param_1 = local_88;
  param_1[1] = uStack_80;
  return;
}