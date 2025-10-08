bool _ZN10uu_pathchk20check_portable_chars17h39a248ee7ea009b7E(long param_1,long param_2)

{
  code *pcVar1;
  undefined uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [12];
  undefined4 local_bc;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined *local_60;
  undefined8 *local_58;
  undefined *local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  undefined local_30;
  
  local_78 = param_1 + param_2;
  local_70 = 0;
  local_80 = param_1;
  do {
    auVar7 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hc9d3bd4ed76b4919E
                       (&local_80);
    puVar6 = auVar7._8_8_;
    if (puVar6 == (undefined *)0x0) goto LAB_001567e7;
    lVar3 = _ZN4core5slice6memchr6memchr17hf33a0085a04e009dE(*puVar6);
  } while (lVar3 == 1);
  auVar8 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                     (auVar7._0_8_,param_1,param_2);
  puVar4 = auVar8._0_8_;
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001e5110)
              (param_1,param_2,auVar7._0_8_,param_2,&DAT_001deb38);
  }
  else {
    local_a8 = puVar4 + auVar8._8_8_;
    local_b0 = puVar4;
    auVar9 = _ZN4core3str11validations15next_code_point17h57324ef1edfff360E(&local_b0);
    local_bc = auVar9._8_4_;
    if ((auVar9 & (undefined  [12])0x1) != (undefined  [12])0x0) {
      local_b8 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
      local_48 = 0;
      local_30 = 1;
      local_68 = &local_bc;
      local_60 = 
      PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_001e5108;
      local_58 = &local_48;
      local_50 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e50f8
      ;
      local_b0 = &DAT_001deb08;
      local_a8 = (undefined *)0x3;
      local_90 = 0;
      local_a0 = &local_68;
      local_98 = 2;
      local_40 = param_1;
      local_38 = param_2;
      uVar5 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e50f0
              )(&local_b8,&local_b0);
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7a4400e9f2ab9568E
                (uVar5);
LAB_001567e7:
      return puVar6 == (undefined *)0x0;
    }
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001e5118)(&DAT_001deb50);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return (bool)uVar2;
}