void _ZN7uu_sort16tokenize_default17hbd8e160b62a3efd1E(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined auVar5 [16];
  long local_40;
  long local_38;
  undefined8 local_30;
  
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0ef512be9be90a46E(param_3,0,0);
  local_38 = param_1 + param_2;
  local_30 = 0;
  local_40 = param_1;
  bVar2 = 1;
  do {
    bVar4 = bVar2;
    auVar5 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he645eee637d411aeE
                       (&local_40);
    uVar3 = auVar5._8_4_;
    if (uVar3 == 0x20) {
LAB_00220c1f:
      bVar2 = 1;
      goto joined_r0x00220c74;
    }
    if (uVar3 == 0x110000) {
      if (*(long *)(param_3 + 0x10) != 0) {
        *(long *)(*(long *)(param_3 + 0x10) * 0x10 + -8 + *(long *)(param_3 + 8)) = param_2;
        return;
      }
      goto LAB_00220ca8;
    }
    if (uVar3 - 9 < 5) goto LAB_00220c1f;
    bVar2 = 0;
    if (0x7f < uVar3) {
      bVar2 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE
                        (auVar5._8_8_ & 0xffffffff);
      bVar4 = bVar4 | ~bVar2;
joined_r0x00220c74:
      if ((bVar4 & 1) == 0) {
        if (*(long *)(param_3 + 0x10) == 0) {
          _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                    (&PTR_s_src_uu_sort_src_sort_rs_002ffa28);
LAB_00220ca8:
          _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                    (&PTR_s_src_uu_sort_src_sort_rs_002ffa10);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(long *)(*(long *)(param_3 + 0x10) * 0x10 + -8 + *(long *)(param_3 + 8)) = auVar5._0_8_;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0ef512be9be90a46E(param_3,auVar5._0_8_,0);
        bVar2 = 1;
      }
    }
  } while( true );
}