undefined8 _ZN9alacritty3ipc12handle_reply17h596fdf307eae2b15E(undefined8 param_1,long param_2)

{
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined local_a8 [16];
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 **local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 **local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_c0 = 0;
  local_b8 = (undefined *)0x1;
  uStack_b0 = 0;
                    /* try { // try from 0055c18b to 0055c197 has its CatchHandler @ 0055c2e9 */
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h69307ed281fbae67E
            (&local_40,param_1);
                    /* try { // try from 0055c198 to 0055c215 has its CatchHandler @ 0055c2fe */
  local_a8 = _ZN3std2io16append_to_string17hea05006619fdc825E(&local_c0,&local_40);
  if (local_a8._8_8_ == 0 || (local_a8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hf5feec1e9b53eb08E
              (local_a8);
  }
  else {
    _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hf5feec1e9b53eb08E
              (local_a8);
    local_a8._0_8_ = local_b8;
    local_a8._8_8_ = uStack_b0;
    local_98 = (undefined8 ***)0x0;
    _ZN10serde_json2de10from_trait17h1645db86271d7214E(&local_60,local_a8);
    local_78 = local_60;
    local_70 = local_58;
    local_68 = local_50;
    if (param_2 == -0x7fffffffffffffff) {
      local_48 = &local_78;
      local_60 = &local_48;
      local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h83f1bbefb10239b3E;
      local_a8._0_8_ = &DAT_00982f40;
      local_a8._8_8_ = 2;
      local_88 = 0;
      local_90 = 1;
                    /* try { // try from 0055c296 to 0055c2a0 has its CatchHandler @ 0055c2da */
      local_98 = &local_60;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_009dff18)(local_a8);
    }
    _ZN4core3ptr178drop_in_place_LT__LT_toml__value__MapDeserializer_u20_as_u20_serde__de__MapAccess_GT___next_value_seed_LT_core__marker__PhantomData_LT_u8_GT__GT____u7b__u7b_closure_u7d__u7d__GT_17h16862b29d1d1c4a4E
              (&local_78);
  }
  _ZN4core3ptr110drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_std__os__unix__net__stream__UnixStream_GT__GT_17h913b7a3608e4ddc8E
            (local_40,local_38);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_c0);
  return 0;
}