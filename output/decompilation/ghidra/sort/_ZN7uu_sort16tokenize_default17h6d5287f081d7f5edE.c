void _ZN7uu_sort16tokenize_default17h6d5287f081d7f5edE(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined auVar5 [16];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5e09b1a2e814c1b4E
            (param_3,0,0,&PTR_s_src_uu_sort_src_sort_rs_0028cf88);
  local_40 = param_1 + param_2;
  local_38 = 0;
  local_48 = param_1;
  bVar2 = 1;
  do {
    bVar4 = bVar2;
    auVar5 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                       (&local_48);
    uVar3 = auVar5._8_4_;
    if (uVar3 == 0x20) {
LAB_001d2b0f:
      bVar2 = 1;
      goto joined_r0x001d2b74;
    }
    if (uVar3 == 0x110000) {
      if (*(long *)(param_3 + 0x10) != 0) {
        *(long *)(*(long *)(param_3 + 8) + -8 + *(long *)(param_3 + 0x10) * 0x10) = param_2;
        return;
      }
      goto LAB_001d2bae;
    }
    if (uVar3 - 9 < 5) goto LAB_001d2b0f;
    bVar2 = 0;
    if (0x7f < uVar3) {
      bVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE
                        (auVar5._8_8_ & 0xffffffff);
      bVar4 = bVar4 | ~bVar2;
joined_r0x001d2b74:
      if ((bVar4 & 1) == 0) {
        if (*(long *)(param_3 + 0x10) == 0) {
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
                    (&PTR_s_src_uu_sort_src_sort_rs_0028cfb8);
LAB_001d2bae:
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
                    (&PTR_s_src_uu_sort_src_sort_rs_0028cfa0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(long *)(*(long *)(param_3 + 8) + -8 + *(long *)(param_3 + 0x10) * 0x10) = auVar5._0_8_;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5e09b1a2e814c1b4E
                  (param_3,auVar5._0_8_,0,&PTR_s_src_uu_sort_src_sort_rs_0028cfd0);
        bVar2 = 1;
      }
    }
  } while( true );
}