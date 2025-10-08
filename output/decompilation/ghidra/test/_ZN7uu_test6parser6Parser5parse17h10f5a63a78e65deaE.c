void _ZN7uu_test6parser6Parser5parse17h10f5a63a78e65deaE(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined uStack_58;
  undefined7 uStack_57;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  _ZN7uu_test6parser6Parser4expr17hea95ff6631384a05E(&local_70);
  if ((int)local_70 == 7) {
    lVar1 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0x8000000000000001;
    if (lVar1 == -0x7fffffffffffffff) {
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4dcbdc82a201ae23E
                (&local_50,param_2 + 0x30);
      lVar1 = local_50;
    }
    else {
      local_48 = *(undefined4 *)(param_2 + 0x20);
      uStack_44 = *(undefined4 *)(param_2 + 0x24);
      uStack_40 = *(undefined4 *)(param_2 + 0x28);
      uStack_3c = *(undefined4 *)(param_2 + 0x2c);
    }
    if (lVar1 == -0x8000000000000000) {
      *param_1 = 7;
    }
    else {
      uVar2 = CONCAT44(uStack_44,local_48);
      local_60 = CONCAT44(uStack_3c,uStack_40);
      local_70 = 1;
      uStack_58 = 1;
                    /* try { // try from 001583f1 to 001583ff has its CatchHandler @ 0015845e */
      uStack_68 = uVar2;
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h47d193bf63b6bc9aE
                (&local_38,&local_70);
      param_1[3] = local_28;
      *(undefined4 *)(param_1 + 1) = local_38;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
      *(undefined4 *)(param_1 + 2) = uStack_30;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
      *param_1 = 2;
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hc3c00042d8510b40E(lVar1,uVar2)
      ;
    }
  }
  else {
    param_1[2] = local_60;
    param_1[3] = CONCAT71(uStack_57,uStack_58);
    *param_1 = local_70;
    param_1[1] = uStack_68;
  }
  return;
}