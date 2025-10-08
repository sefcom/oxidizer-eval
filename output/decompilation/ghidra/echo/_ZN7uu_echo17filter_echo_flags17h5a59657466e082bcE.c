void _ZN7uu_echo17filter_echo_flags17h5a59657466e082bcE(undefined8 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined2 local_10a;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48 [3];
  
  puVar1 = PTR__ZN7uu_echo12is_echo_flag17h50b86463f524c5edE_001739f8;
  local_e8 = 0;
  uStack_e0 = 8;
  local_d8 = 0;
  local_10a = 1;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = *(undefined8 *)(param_2 + 4);
  uStack_60 = *(undefined8 *)(param_2 + 6);
  local_58 = *(undefined8 *)(param_2 + 8);
  uStack_50 = *(undefined8 *)(param_2 + 10);
  local_d0 = param_1;
  do {
                    /* try { // try from 00126da0 to 00126daa has its CatchHandler @ 00126edb */
    _ZN108__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfb50bb4acd145f37E
              (&local_90,&local_78);
    if (CONCAT44(uStack_8c,local_90) == -0x8000000000000000) {
LAB_00126e17:
      local_a8 = local_58;
      uStack_a0 = uStack_50;
      local_b8 = local_68;
      uStack_b0 = uStack_60;
      local_c8 = local_78;
      uStack_c4 = uStack_74;
      uStack_c0 = uStack_70;
      uStack_bc = uStack_6c;
      while( true ) {
                    /* try { // try from 00126e60 to 00126e82 has its CatchHandler @ 00126edd */
        _ZN108__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfb50bb4acd145f37E
                  (local_48,&local_c8);
        if (local_48[0] == -0x8000000000000000) break;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h9dad9423e5c6bf86E
                  (&local_e8,local_48,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0016ff00);
      }
      _ZN4core3ptr210drop_in_place_LT_core__iter__adapters__peekable__Peekable_LT_core__iter__adapters__skip__Skip_LT_core__iter__adapters__cloned__Cloned_LT_core__slice__iter__Iter_LT_std__ffi__os_str__OsString_GT__GT__GT__GT__GT_17h0cbdb65c0fbd85dfE
                (CONCAT44(uStack_c4,local_c8),CONCAT44(uStack_bc,uStack_c0));
      local_d0[2] = local_d8;
      *local_d0 = local_e8;
      local_d0[1] = uStack_e0;
      *(undefined2 *)(local_d0 + 3) = local_10a;
      return;
    }
    local_f8 = local_80;
    local_108 = local_90;
    uStack_104 = uStack_8c;
    uStack_100 = uStack_88;
    uStack_fc = uStack_84;
                    /* try { // try from 00126dcf to 00126dd7 has its CatchHandler @ 00126ec7 */
    cVar2 = (*(code *)puVar1)(&local_108,&local_10a);
    if (cVar2 == '\0') {
      local_b8 = local_f8;
      local_c8 = local_108;
      uStack_c4 = uStack_104;
      uStack_c0 = uStack_100;
      uStack_bc = uStack_fc;
                    /* try { // try from 00126e01 to 00126e16 has its CatchHandler @ 00126ec5 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h9dad9423e5c6bf86E
                (&local_e8,&local_c8,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0016fee8);
      goto LAB_00126e17;
    }
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h209e065877f44192E
              (CONCAT44(uStack_104,local_108),CONCAT44(uStack_fc,uStack_100));
  } while( true );
}