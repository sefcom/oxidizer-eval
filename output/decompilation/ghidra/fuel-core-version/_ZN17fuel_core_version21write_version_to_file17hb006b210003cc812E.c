undefined8
_ZN17fuel_core_version21write_version_to_file17hb006b210003cc812E(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 *local_78;
  undefined *local_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_88 = (undefined *)&local_b8;
  local_b8 = *(undefined8 *)(param_1 + 0x10);
  local_b0 = *(undefined8 *)(param_1 + 0x18);
  local_a8 = *(undefined8 *)(param_1 + 0x20);
  local_80 = 
  PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17ha643a300066f02fcE_00237770
  ;
  local_78 = &local_b0;
  local_70 = 
  PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17ha643a300066f02fcE_00237770
  ;
  local_68 = &local_a8;
  local_60 = 
  PTR__ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17ha643a300066f02fcE_00237770
  ;
  local_58 = &PTR_DAT_0022fb68;
  local_50 = 4;
  local_38 = 0;
  local_48 = &local_88;
  local_40 = 3;
                    /* try { // try from 00170ed6 to 00170ee4 has its CatchHandler @ 00170f42 */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h36fb9c365ec81203E(&local_a0,&local_58);
                    /* try { // try from 00170ef4 to 00170f12 has its CatchHandler @ 00170f53 */
  lVar1 = _ZN3std2fs5write17h31e1ae25d698ad59E(param_2,local_98,local_90);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _ZN4eyre5error30__LT_impl_u20_eyre__Report_GT_8from_std17hf5a463c72e0f64e7E
                      (lVar1,&PTR_DAT_0022fba8);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h33e271254cf14df2E(local_a0,local_98);
  _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17h33470c6ef43969d7E(param_1);
  return uVar2;
}