void _ZN2fd19build_pattern_regex17h937373ddfb37edbeE
               (undefined8 *param_1,undefined8 param_2,long param_3,byte param_4,byte param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  undefined local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((param_3 != 0 & param_4) == 0) {
    if ((param_5 & 1) == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc59efc0c75b13120E
                (&local_f8);
    }
    else {
      (*(code *)PTR__ZN5regex6escape17ha1711af57c30542eE_00540a00)();
    }
  }
  else {
    local_68 = 0x10100;
    local_78 = param_2;
    local_70 = param_3;
    (*(code *)PTR__ZN7globset4glob11GlobBuilder5build17h0c1fa9f366774a6dE_005409f8)
              (&local_c8,&local_78);
    uStack_f0 = uStack_b8;
    uVar1 = uStack_f0;
    local_e8 = uStack_b0;
    uVar2 = local_e8;
    uStack_e0 = uStack_a8;
    uVar3 = uStack_e0;
    local_d8 = local_a0;
    uVar4 = local_d8;
    uStack_d0 = uStack_98;
    uVar5 = uStack_d0;
    local_18 = local_80;
    local_28 = local_90;
    uStack_20 = uStack_88;
    uStack_f0._0_4_ = (undefined4)uStack_b8;
    uStack_f0._4_4_ = (undefined4)((ulong)uStack_b8 >> 0x20);
    local_e8._0_4_ = (undefined4)uStack_b0;
    local_e8._4_4_ = (undefined4)((ulong)uStack_b0 >> 0x20);
    uStack_e0._0_4_ = (undefined4)uStack_a8;
    uStack_e0._4_4_ = (undefined4)((ulong)uStack_a8 >> 0x20);
    local_d8._0_4_ = (undefined4)local_a0;
    local_d8._4_4_ = (undefined4)((ulong)local_a0 >> 0x20);
    uStack_d0._0_4_ = (undefined4)uStack_98;
    uStack_d0._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
    local_48 = (undefined4)local_e8;
    uStack_44 = local_e8._4_4_;
    uStack_40 = (undefined4)uStack_e0;
    uStack_3c = uStack_e0._4_4_;
    local_58 = uStack_c0;
    uStack_54 = uStack_bc;
    uStack_50 = (undefined4)uStack_f0;
    uStack_4c = uStack_f0._4_4_;
    local_38 = (undefined4)local_d8;
    uStack_34 = local_d8._4_4_;
    uStack_30 = (undefined4)uStack_d0;
    uStack_2c = uStack_d0._4_4_;
                    /* try { // try from 002fab5f to 002fab68 has its CatchHandler @ 002fabff */
    uStack_f0 = uVar1;
    local_e8 = uVar2;
    uStack_e0 = uVar3;
    local_d8 = uVar4;
    uStack_d0 = uVar5;
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc59efc0c75b13120E
              (&local_c8,uStack_a8,local_a0);
    local_e8 = uStack_b8;
    local_f8 = CONCAT44(uStack_c4,local_c8);
    uStack_f0 = CONCAT44(uStack_bc,uStack_c0);
    _ZN4core3ptr40drop_in_place_LT_globset__glob__Glob_GT_17h2ed343c1b1664c8fE(local_60);
  }
  param_1[2] = local_e8;
  *param_1 = local_f8;
  param_1[1] = uStack_f0;
  return;
}