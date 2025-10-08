undefined  [16] _ZN7uu_kill15handle_obsolete17h472cae1b62eba817E(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong unaff_R14;
  ulong uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  ulong local_30;
  long local_28;
  
  if (2 < *(ulong *)(param_1 + 0x10)) {
    unaff_R14 = *(ulong *)(*(long *)(param_1 + 8) + 0x20);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x28);
    local_30 = local_30 & 0xffffffff00000000;
    uVar2 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(&local_30);
    auVar5 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                       (uVar2,unaff_R14,uVar3);
    uVar4 = auVar5._0_8_;
    if (uVar4 != 0) {
      local_28 = uVar4 + auVar5._8_8_;
      local_30 = uVar4;
      auVar6 = _ZN4core3str11validations15next_code_point17hcc86121977b40379E(&local_30);
      unaff_R14 = uVar4;
      if ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        if (auVar6._8_4_ - 0x61 < 0x1a) goto LAB_0015d07d;
        if (0x7f < auVar6._8_4_) {
          cVar1 = (*(code *)
                    PTR__ZN4core7unicode12unicode_data9lowercase6lookup17hc935d1c20005fe8fE_001ee170
                  )(auVar6._8_8_ & 0xffffffff);
          if (cVar1 != '\0') goto LAB_0015d07d;
        }
      }
      auVar5 = (*(code *)
                 PTR__ZN6uucore8features7signals23signal_by_name_or_value17h89b982f23c5744ecE_001ee178
               )(uVar4,auVar5._8_8_);
      uVar4 = auVar5._8_8_;
      if (auVar5._0_8_ == 1) {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_6remove17h16a410887af4f72cE(&local_30,param_1);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h31b345ac50aa997dE
                  (local_30,local_28);
        uVar3 = 1;
        goto LAB_0015d07f;
      }
    }
  }
LAB_0015d07d:
  uVar4 = unaff_R14;
  uVar3 = 0;
LAB_0015d07f:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}