undefined  [16]
_ZN9uu_factor17print_factors_str17h9017d6fa399a3f46E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined auVar5 [16];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h4b4b60ca41feee4fE();
  (*(code *)
    PTR__ZN10num_bigint7biguint7convert74__LT_impl_u20_num_traits__Num_u20_for_u20_num_bigint__biguint__BigUint_GT_14from_str_radix17hcb4cef4a4660a821E_0024d250
  )(&local_60,auVar5._0_8_,auVar5._8_8_,10);
  local_138 = local_50;
  local_148 = local_60;
  uStack_144 = uStack_5c;
  uStack_140 = uStack_58;
  uStack_13c = uStack_54;
                    /* try { // try from 00192eec to 00192f8b has its CatchHandler @ 001930f2 */
  _ZN10num_bigint7biguint7convert89__LT_impl_u20_core__convert__From_LT_u64_GT__u20_for_u20_num_bigint__biguint__BigUint_GT_4from17heb41d9a125b0bad7E
            (local_48,1);
  uVar2 = local_138;
  ppuVar4 = (undefined **)CONCAT44(uStack_13c,uStack_140);
  cVar1 = _ZN10num_bigint7biguint9cmp_slice17h6473709cb847fdc3E(ppuVar4,local_138,local_40,local_38)
  ;
  _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17h68b709cb09988ceaE(local_48);
  if (cVar1 < '\x01') {
    local_128 = 0;
    local_118 = 0;
    local_110 = -0x8000000000000000;
  }
  else {
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h15eea0e396b9263cE
              (&local_f8,ppuVar4,uVar2);
    local_a8 = local_e8;
    local_b8 = (undefined4)local_f8;
    uStack_b4 = local_f8._4_4_;
    uStack_b0 = uStack_f0;
    uStack_ac = uStack_ec;
    local_f8 = 2;
    _ZN9num_prime8nt_funcs7factors17h154881c305cbdc42E(&local_128,&local_b8,&local_f8);
  }
  local_68 = local_118;
  local_78[0] = local_128;
  local_98 = local_110;
  local_90 = local_108;
  local_88 = local_100;
  if (local_110 == -0x8000000000000000) {
                    /* try { // try from 00192ffd to 0019301b has its CatchHandler @ 001930f0 */
    uVar2 = _ZN9uu_factor12write_result17ha66cf5c020a2d08bE(param_3,&local_148,local_78,param_4);
    lVar3 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hc9190645284cc036E
                      (uVar2);
    if (lVar3 == 0) {
      _ZN4core3ptr100drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_num_bigint__biguint__BigUint_GT__GT__GT_17h5e23804ed63f8a8eE
                (&local_98);
      _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17h68b709cb09988ceaE
                (&local_148);
      lVar3 = 0;
      goto LAB_0019309c;
    }
    ppuVar4 = &
              PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17hd0902a28fde7cdb6E_00243878
    ;
  }
  else {
                    /* try { // try from 00193031 to 0019306c has its CatchHandler @ 001930cb */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h934deac0777802c8E
              (&local_128,&DAT_0011d579,0x2c);
    local_e8 = local_118;
    local_f8 = local_128;
    uStack_f0 = uStack_120;
    uStack_ec = uStack_11c;
    local_e0 = 1;
    lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hce9ab1ca74379778E(&local_f8);
    _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_num_bigint__biguint__BigUint_GT__GT_17h7a0cdbfb03ecd258E
              (&local_98);
                    /* try { // try from 0019307d to 00193089 has its CatchHandler @ 001930f2 */
    _ZN4core3ptr105drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_num_bigint__biguint__BigUint_C_usize_GT__GT_17h54aa05dedcd35041E
              (local_78);
    ppuVar4 = &
              PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17ha71e44e4ab1227f6E_00244210
    ;
  }
  _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17h68b709cb09988ceaE(&local_148);
LAB_0019309c:
  auVar5._8_8_ = ppuVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}