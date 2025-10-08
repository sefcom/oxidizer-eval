void _ZN11forc_crypto7address24handle_string_conversion17h63cc450610a58430E
               (undefined *param_1,long param_2)

{
  undefined8 uVar1;
  int local_48;
  undefined4 uStack_44;
  undefined uStack_40;
  undefined4 uStack_3f;
  undefined4 uStack_3b;
  undefined7 uStack_37;
  undefined uStack_30;
  undefined8 uStack_2f;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar1 = _ZN82__LT_alloc__string__String_u20_as_u20_core__convert__AsRef_LT__u5b_u8_u5d__GT__GT_6as_ref17h6c2a555f71a2b08aE
                    (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
                    /* try { // try from 004c36ea to 004c3750 has its CatchHandler @ 004c3782 */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00786398)(&local_48,uVar1);
  local_20 = CONCAT35((undefined3)uStack_3b,CONCAT41(uStack_3f,uStack_40));
  local_18 = CONCAT71(uStack_37,uStack_3b._3_1_);
  if (local_48 == 1) {
    local_48 = (int)CONCAT41(uStack_3f,uStack_40);
    uStack_44 = (undefined4)((ulong)local_20 >> 0x20);
    uStack_40 = uStack_3b._3_1_;
    uStack_3f = (undefined4)uStack_37;
    uStack_3b._0_3_ = (undefined3)((uint7)uStack_37 >> 0x20);
    uVar1 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h81b54189e9287e31E
                      (&local_48);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h194128577f2b3aedE(param_2);
    return;
  }
  (*(code *)
    PTR__ZN79__LT_fuel_types__array_types__Address_u20_as_u20_core__str__traits__FromStr_GT_8from_str17he761938a00046dacE_007863a0
  )(&local_48);
  if ((char)local_48 != '\x01') {
    *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_30,uStack_37);
    *(undefined8 *)(param_1 + 0x19) = uStack_2f;
    *(uint *)(param_1 + 1) = CONCAT13((undefined)uStack_44,local_48._1_3_);
    *(uint *)(param_1 + 5) = CONCAT13(uStack_40,uStack_44._1_3_);
    *(undefined4 *)(param_1 + 9) = uStack_3f;
    *(undefined4 *)(param_1 + 0xd) = uStack_3b;
  }
  else {
    uVar1 = _ZN11forc_crypto7address24handle_string_conversion28__u7b__u7b_closure_u7d__u7d_17hf4c96ad01e46689aE
                      (&local_20);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  *param_1 = (char)local_48 == '\x01';
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h194128577f2b3aedE(param_2);
  return;
}