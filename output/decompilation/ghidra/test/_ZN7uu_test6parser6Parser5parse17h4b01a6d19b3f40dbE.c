void _ZN7uu_test6parser6Parser5parse17h4b01a6d19b3f40dbE(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined uStack_70;
  undefined7 uStack_6f;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  _ZN7uu_test6parser6Parser4expr17h14b244d6254724abE(&local_88);
  if ((int)local_88 == 7) {
    lVar1 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0x8000000000000001;
    if (lVar1 == -0x7fffffffffffffff) {
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h64663e472b050a2bE
                (&local_48,param_2 + 0x30);
    }
    else {
      uStack_40 = *(undefined8 *)(param_2 + 0x20);
      local_38 = *(undefined8 *)(param_2 + 0x28);
      local_48 = lVar1;
    }
    if (local_48 == -0x8000000000000000) {
      *param_1 = 7;
    }
    else {
      local_58 = local_38;
      local_68 = (undefined4)local_48;
      uStack_64 = local_48._4_4_;
      uStack_60 = (undefined4)uStack_40;
      uStack_5c = uStack_40._4_4_;
      uStack_80 = uStack_40;
      local_88 = 1;
      local_78 = local_38;
      uStack_70 = 1;
                    /* try { // try from 001afce6 to 001afcf2 has its CatchHandler @ 001afd20 */
      _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h0530b763d48a6791E
                (&local_30,&local_88);
      param_1[3] = local_20;
      *(undefined4 *)(param_1 + 1) = local_30;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
      *(undefined4 *)(param_1 + 2) = uStack_28;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_24;
      *param_1 = 2;
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_68);
    }
  }
  else {
    param_1[2] = local_78;
    param_1[3] = CONCAT71(uStack_6f,uStack_70);
    *param_1 = local_88;
    param_1[1] = uStack_80;
  }
  return;
}