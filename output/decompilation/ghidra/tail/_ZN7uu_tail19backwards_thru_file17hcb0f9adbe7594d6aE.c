void _ZN7uu_tail19backwards_thru_file17hcb0f9adbe7594d6aE
               (undefined8 param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  undefined auVar2 [16];
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined local_58 [32];
  undefined8 local_38;
  
  _ZN7uu_tail6chunks13ReverseChunks3new17hc0b2e059517a0fa7E(local_58,param_1);
  local_38 = 0;
  _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc6ca612b237c00c8E
            (&local_98,local_58);
  if (CONCAT44(uStack_8c,local_90) != -0x8000000000000000) {
    uVar1 = 0;
    do {
      local_b8 = local_90;
      uStack_b4 = uStack_8c;
      uStack_b0 = uStack_88;
      uStack_ac = uStack_84;
      local_d0 = CONCAT44(uStack_84,uStack_88);
      local_c8 = local_d0 + local_80;
      local_a8 = local_80;
      local_c0 = 0;
      if (((local_98 == 0) && (local_80 != 0)) && (*(char *)(local_80 + -1 + local_d0) == param_3))
      {
        _ZN125__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h57eb2a97e4f62b20E
                  (&local_d0);
      }
      local_68 = local_c0;
      local_78 = local_d0;
      local_70 = local_c8;
      while( true ) {
        auVar2 = _ZN125__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h57eb2a97e4f62b20E
                           (&local_78);
        if (auVar2._8_8_ == (char *)0x0) break;
        if ((*auVar2._8_8_ == param_3) && (uVar1 = uVar1 + 1, param_2 <= uVar1)) {
                    /* try { // try from 00200d51 to 00200d76 has its CatchHandler @ 00200d93 */
          auVar2 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                             (param_1,2,auVar2._0_8_ + 1);
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc23b1578389952beE
                    (auVar2._0_8_,auVar2._8_8_,&PTR_s_src_uu_tail_src_tail_rs_002bba58);
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h284f430dac29ffa9E
                    (&local_b8);
          return;
        }
      }
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h284f430dac29ffa9E(&local_b8);
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc6ca612b237c00c8E
                (&local_98,local_58);
    } while (CONCAT44(uStack_8c,local_90) != -0x8000000000000000);
  }
  return;
}