void _ZN3bat6assets12build_assets16acknowledgements26append_to_acknowledgements17he3cabe6578d3b81fE
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  undefined auVar2 [12];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  long local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_28;
  code *local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_28 = (undefined *)&local_78;
  local_20 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5cd1e3edb3ca57a0E;
  local_18 = &local_68;
  local_10 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5cd1e3edb3ca57a0E;
  local_58 = &PTR_DAT_007cdfb8;
  local_50 = 2;
  local_38 = 0;
  local_48 = &local_28;
  local_40 = 2;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  local_60 = param_5;
  _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hc61af94ec255152aE
            (param_1,&local_58);
  local_58 = *(undefined ***)(param_1 + 8);
  local_50 = *(long *)(param_1 + 0x10) + (long)local_58;
  auVar2 = _ZN4core3str11validations23next_code_point_reverse17h8f1d1c5074629447E(&local_58);
  if ((auVar2 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    if (auVar2._8_4_ != 10) {
      _ZN5alloc6string6String4push17h0ede46164189e411E(param_1,10);
    }
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
              (param_1,&DAT_0019ff4a,&DAT_0019ff4c);
    return;
  }
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00807550)
            (&DAT_0019ff4c,0x28,&PTR_DAT_007cdfd8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}