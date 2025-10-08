void _ZN8uu_chcon6errors17report_full_error17h7e0a29c75407e3d3E
               (undefined (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  undefined auVar2 [16];
  undefined local_a0 [16];
  undefined local_90 [16];
  undefined8 local_80;
  undefined8 *local_78;
  code *local_70;
  undefined (*local_68) [16];
  undefined **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_a0._0_8_ = param_2;
  local_a0._8_8_ = param_3;
  local_68 = param_1;
  local_90 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h4ae8628ff8eec263E
                       (0x100,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_001f0310);
  local_80 = 0;
  local_78 = (undefined8 *)local_a0;
  local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hbaf2d3403f2b68eeE;
  local_60 = (undefined **)&DAT_00119d80;
  local_58 = 1;
  local_40 = 0;
  local_48 = 1;
                    /* try { // try from 001630f2 to 0016310f has its CatchHandler @ 001631bd */
  local_50 = &local_78;
  uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h2c24365a0703be39E
                    (local_90,&local_60);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h074f43735208e33dE
            (uVar1,&PTR_s_src_uu_chcon_src_errors_rs_001f0328);
  while( true ) {
                    /* try { // try from 0016313a to 00163195 has its CatchHandler @ 001631bf */
    auVar2 = (**(code **)(local_a0._8_8_ + 0x30))(local_a0._0_8_);
    if (auVar2._0_8_ == 0) break;
    local_78 = (undefined8 *)local_a0;
    local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hbaf2d3403f2b68eeE;
    local_60 = &PTR_s___001f0300;
    local_58 = 1;
    local_40 = 0;
    local_48 = 1;
    local_50 = &local_78;
    local_a0 = auVar2;
    uVar1 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h2c24365a0703be39E
                      (local_90,&local_60);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h074f43735208e33dE
              (uVar1,&PTR_s_src_uu_chcon_src_errors_rs_001f0340);
  }
  *(undefined8 *)local_68[1] = local_80;
  *local_68 = local_90;
  return;
}