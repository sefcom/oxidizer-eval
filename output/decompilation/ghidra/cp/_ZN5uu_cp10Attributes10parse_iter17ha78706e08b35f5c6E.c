void _ZN5uu_cp10Attributes10parse_iter17ha78706e08b35f5c6E(long *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long local_c0;
  undefined4 local_b8;
  long local_b0;
  undefined4 local_a8;
  long *local_a0;
  long local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  local_b8 = 0;
  local_c0 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = param_2[4];
  uStack_74 = param_2[5];
  uStack_70 = param_2[6];
  uStack_6c = param_2[7];
  local_a0 = param_1;
  lVar3 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5fb2cad82e47e650E
                    (&local_88);
  puVar2 = PTR__ZN5uu_cp10Attributes19parse_single_string17h449cff6f35e43c9cE_00267ba0;
  puVar1 = PTR__ZN5uu_cp10Attributes5union17h43e8d826b0daba39E_00267b98;
  if (lVar3 != 0) {
    do {
      uVar4 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h1e9ed5ccbb1261f3E
                        (lVar3);
                    /* try { // try from 0019e488 to 0019e492 has its CatchHandler @ 0019e564 */
      (*(code *)puVar2)(&local_68,uVar4);
      local_b0 = local_60;
      local_a8 = local_58;
      if (local_68 != -0x7ffffffffffffff4) {
        *(undefined4 *)((long)local_a0 + 0x34) = local_34;
        *(undefined4 *)((long)local_a0 + 0x24) = local_44;
        *(undefined4 *)(local_a0 + 5) = uStack_40;
        *(undefined4 *)((long)local_a0 + 0x2c) = uStack_3c;
        *(undefined4 *)(local_a0 + 6) = uStack_38;
        *(undefined4 *)((long)local_a0 + 0x14) = local_54;
        *(undefined4 *)(local_a0 + 3) = uStack_50;
        *(undefined4 *)((long)local_a0 + 0x1c) = uStack_4c;
        *(undefined4 *)(local_a0 + 4) = uStack_48;
        *(undefined4 *)(local_a0 + 2) = local_58;
        local_a0[1] = local_60;
        *local_a0 = local_68;
        _ZN4core3ptr85drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_alloc__string__String_GT__GT_17h1635ce62a861a981E
                  (&local_88);
        return;
      }
      (*(code *)puVar1)(&local_94,&local_c0,&local_b0);
      local_b8 = local_8c;
      local_c0 = local_94;
      lVar3 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5fb2cad82e47e650E
                        (&local_88);
    } while (lVar3 != 0);
  }
  _ZN4core3ptr85drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__RF_alloc__string__String_GT__GT_17h1635ce62a861a981E
            (&local_88);
  *(undefined4 *)(local_a0 + 2) = local_b8;
  local_a0[1] = local_c0;
  *local_a0 = -0x7ffffffffffffff4;
  return;
}