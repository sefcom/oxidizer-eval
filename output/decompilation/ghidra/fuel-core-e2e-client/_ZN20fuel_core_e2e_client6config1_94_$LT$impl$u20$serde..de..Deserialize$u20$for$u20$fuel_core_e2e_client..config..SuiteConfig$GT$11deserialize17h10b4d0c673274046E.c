void _ZN20fuel_core_e2e_client6config1_94__LT_impl_u20_serde__de__Deserialize_u20_for_u20_fuel_core_e2e_client__config__SuiteConfig_GT_11deserialize17h10b4d0c673274046E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined auStack_270 [48];
  undefined auStack_240 [48];
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1a8;
  undefined auStack_160 [32];
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  
  (*(code *)PTR__ZN4toml2de12Deserializer6tables17had3fffb1d29e7db4E_012b7fd0)(&lStack_210);
  uVar1 = uStack_200;
  lStack_2a0 = lStack_210;
  uStack_298 = uStack_208;
  uStack_290 = uStack_200;
  (*(code *)PTR__ZN4toml2de19build_table_indices17hfa7bca17e220dc33E_012b7fd8)
            (auStack_270,uStack_208,uStack_200,-lStack_210);
  (*(code *)PTR__ZN4toml2de20build_table_pindices17hfaf73052f85f0a22E_012b7fe0)
            (auStack_240,uStack_208,uStack_200);
  uStack_288 = 0;
  uStack_280 = 8;
  uStack_278 = 0;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17ha529819af5cacfcfE
            (auStack_160,&uStack_288);
  uStack_1a8 = 0x8000000000000002;
  uStack_200 = 0x8000000000000001;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = uVar1;
  puStack_140 = auStack_270;
  uStack_130 = uStack_208;
  uStack_128 = uVar1;
  uStack_f8 = 0;
  puStack_138 = auStack_240;
  uStack_120 = param_2;
  _ZN189__LT_fuel_core_e2e_client__config______LT_impl_u20_serde__de__Deserialize_u20_for_u20_fuel_core_e2e_client__config__SuiteConfig_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_map17h3052cfdb03ddc38cE
            (&lStack_f0,&lStack_210);
  if (lStack_f0 == -0x8000000000000000) {
    _ZN78__LT__RF_mut_u20_toml__de__Deserializer_u20_as_u20_serde__de__Deserializer_GT_15deserialize_any28__u7b__u7b_closure_u7d__u7d_17h733844d6d3536681E
              (uStack_208,uVar1,param_2,uStack_e8);
    param_1[1] = uStack_e8;
    *param_1 = 0x8000000000000000;
  }
  else {
    (*(code *)PTR_memcpy_012b6040)(param_1,&lStack_f0,0xc0);
  }
  _ZN4core3ptr148drop_in_place_LT_std__collections__hash__map__HashMap_LT_alloc__vec__Vec_LT_alloc__borrow__Cow_LT_str_GT__GT__C_alloc__vec__Vec_LT_usize_GT__GT__GT_17h97edb37b06c7e147E
            (auStack_240);
  _ZN4core3ptr148drop_in_place_LT_std__collections__hash__map__HashMap_LT_alloc__vec__Vec_LT_alloc__borrow__Cow_LT_str_GT__GT__C_alloc__vec__Vec_LT_usize_GT__GT__GT_17h97edb37b06c7e147E
            (auStack_270);
  _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_toml__de__Table_GT__GT_17h50e1c818ca5d2b2eE
            (&lStack_2a0);
  return;
}