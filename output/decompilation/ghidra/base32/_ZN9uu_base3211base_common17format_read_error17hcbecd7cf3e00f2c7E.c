undefined8
_ZN9uu_base3211base_common17format_read_error17hcbecd7cf3e00f2c7E
          (undefined8 param_1,undefined param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined auVar5 [16];
  undefined local_c1;
  undefined8 *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88 [8];
  undefined8 *local_80;
  long local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_3c [12];
  
  local_c1 = param_2;
  local_90 = param_1;
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hb7887b3b8ddd86eaE
            (local_88,&local_c1);
                    /* try { // try from 0016ae8f to 0016aea7 has its CatchHandler @ 0016affa */
  local_a8 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h56ba07e370b94402E
                       (local_78,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_0020e438);
  local_98 = 0;
  local_b8 = (code *)(local_78 + (long)local_80);
  local_c0 = local_80;
  local_b0 = 0;
  auVar5 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                     (&local_c0);
  puVar2 = 
  PTR__ZN82__LT_core__char__ToLowercase_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h38e379bedf5f54dcE_00215438
  ;
  puVar1 = PTR__ZN4core7unicode12unicode_data11conversions8to_upper17hd4e5a9ef8e8428c0E_00215430;
  if (auVar5._8_4_ != 0x110000) {
    do {
      if (auVar5._0_8_ == 0) {
        (*(code *)puVar1)(local_3c,auVar5._8_8_ & 0xffffffff);
        _ZN4core4char15CaseMappingIter3new17hcde4616bfd23ae0dE(&local_70,local_3c);
        while( true ) {
                    /* try { // try from 0016afe0 to 0016aff5 has its CatchHandler @ 0016b011 */
          iVar4 = (*(code *)puVar2)(&local_70);
          if (iVar4 == 0x110000) break;
          _ZN5alloc6string6String4push17h0ede46164189e411E(local_a8,iVar4);
        }
      }
      else {
                    /* try { // try from 0016afa0 to 0016afca has its CatchHandler @ 0016b00f */
        _ZN5alloc6string6String4push17h0ede46164189e411E(local_a8,auVar5._8_8_ & 0xffffffff);
      }
      auVar5 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                         (&local_c0);
    } while (auVar5._8_4_ != 0x110000);
  }
  uVar3 = local_90;
  local_c0 = (undefined8 *)local_a8;
  local_b8 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_70 = &PTR_s_rea_0020e428;
  local_68 = 1;
  local_50 = 0;
  local_60 = &local_c0;
  local_58 = 1;
                    /* try { // try from 0016af33 to 0016af44 has its CatchHandler @ 0016aff8 */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hff3b22300eec286cE(local_90,&local_70);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h84a2aefedc93f8cfE(local_a8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h84a2aefedc93f8cfE(local_88);
  return uVar3;
}