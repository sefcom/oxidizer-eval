void _ZN17fuel_core_version22read_fuel_core_version17hefde22257e8a198eE
               (long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  uVar2 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h5e4fe01fcd78a6fdE
                    (param_2);
  _ZN3std2fs14read_to_string17hbdd159fe26aefb0cE(&local_f8,uVar2);
  lVar3 = local_f8;
  uVar2 = CONCAT44(uStack_ec,local_f0);
                    /* try { // try from 00171347 to 00171357 has its CatchHandler @ 001714e9 */
  (*(code *)
    PTR__ZN65__LT_toml__value__Value_u20_as_u20_core__str__traits__FromStr_GT_8from_str17h8c79bbe4c73167c0E_00237790
  )(&local_78,uVar2,CONCAT44(uStack_e4,uStack_e8));
  uStack_80 = uStack_58;
  uVar1 = uStack_80;
  uStack_80._0_4_ = (undefined4)uStack_58;
  uStack_80._4_4_ = (undefined4)((ulong)uStack_58 >> 0x20);
  uStack_80 = uVar1;
  if (CONCAT44(uStack_74,local_78) == 2) {
    local_78 = uStack_70;
    uStack_74 = uStack_6c;
    uStack_70 = uStack_68;
    uStack_6c = uStack_64;
    uStack_68 = uStack_60;
    uStack_64 = uStack_5c;
    uStack_60 = (undefined4)uStack_80;
    uStack_5c = uStack_80._4_4_;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h33e271254cf14df2E(lVar3,uVar2);
                    /* try { // try from 001713a5 to 001713d0 has its CatchHandler @ 001714d1 */
    _ZN17fuel_core_version23find_dependency_version17h34d3c1ceae644609E(&local_f8,&local_78);
    lVar3 = local_f8;
    if (local_f8 == -0x8000000000000000) {
      lVar3 = _ZN4eyre5error30__LT_impl_u20_eyre__Report_GT_10from_adhoc17h2b349f5052a04513E();
      param_1[1] = lVar3;
      *param_1 = 0;
    }
    else {
      uVar2 = CONCAT44(uStack_ec,local_f0);
                    /* try { // try from 00171457 to 00171490 has its CatchHandler @ 001714c1 */
      (*(code *)
        PTR__ZN6semver5parse72__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_semver__Version_GT_8from_str17heb6ed03d782a6228E_00237798
      )(&local_f8,uVar2,CONCAT44(uStack_e4,uStack_e8));
      if (local_f8 == 0) {
        lVar4 = _ZN4eyre5error30__LT_impl_u20_eyre__Report_GT_8from_std17h8789ff419f3e2838E();
        param_1[1] = lVar4;
        *param_1 = 0;
      }
      else {
        param_1[4] = CONCAT44(uStack_d4,uStack_d8);
        *(undefined4 *)(param_1 + 2) = uStack_e8;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_e4;
        *(undefined4 *)(param_1 + 3) = uStack_e0;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_dc;
        *param_1 = local_f8;
        param_1[1] = CONCAT44(uStack_ec,local_f0);
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h33e271254cf14df2E(lVar3,uVar2);
    }
    _ZN4core3ptr39drop_in_place_LT_toml__value__Value_GT_17h471d934e4f761f26E(&local_78);
  }
  else {
    local_a0 = local_20;
    local_b0 = local_30;
    uStack_ac = uStack_2c;
    uStack_a8 = uStack_28;
    uStack_a4 = uStack_24;
    local_c0 = local_40;
    uStack_b8 = uStack_38;
    local_d0 = local_50;
    uStack_c8 = uStack_48;
    local_f0 = uStack_70;
    uStack_ec = uStack_6c;
    uStack_e8 = uStack_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    uStack_d8 = (undefined4)uStack_80;
    uStack_d4 = uStack_80._4_4_;
                    /* try { // try from 0017142d to 00171434 has its CatchHandler @ 001714e9 */
    lVar4 = _ZN4eyre5error30__LT_impl_u20_eyre__Report_GT_8from_std17h9967a73e202d0302E(&local_f8);
    param_1[1] = lVar4;
    *param_1 = 0;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h33e271254cf14df2E(lVar3,uVar2);
  }
  return;
}