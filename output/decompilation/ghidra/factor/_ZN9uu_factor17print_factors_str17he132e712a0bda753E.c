undefined  [16]
_ZN9uu_factor17print_factors_str17he132e712a0bda753E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  undefined *puVar1;
  undefined uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  ulong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_e8;
  code *pcStack_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined local_c8 [16];
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hf5a6ebf145b1a03bE();
  (*(code *)
    PTR__ZN10num_bigint7biguint7convert74__LT_impl_u20_num_traits__Num_u20_for_u20_num_bigint__biguint__BigUint_GT_14from_str_radix17hdbc74ae67ae58087E_00293468
  )(&local_60,auVar5._0_8_,auVar5._8_8_,10);
  if (CONCAT44(uStack_5c,local_60) == -0x8000000000000000) {
    local_c8 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00293470)();
    puVar1 = PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00293478;
    pcStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h60e20a2526965720E;
    local_128 = &DAT_0028ae20;
    uStack_120 = 2;
    local_108 = 0;
    local_110 = 1;
    local_118 = &local_e8;
    local_e8 = local_c8;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00293478)(&local_128);
    local_c8._0_8_ = 0;
    local_b0 = local_b0 & 0xffffffffffffff00;
    local_c8._8_8_ = param_1;
    local_b8 = param_2;
    uVar2 = _ZN4core6result19Result_LT_T_C_E_GT_10unwrap_err17hae40621fe63b5d0eE(&local_60);
    local_148 = CONCAT71(local_148._1_7_,uVar2);
    pcStack_e0 = (code *)
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_00293480
    ;
    local_d0 = 
    PTR__ZN67__LT_num_bigint__ParseBigIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h9d7563e6912e108aE_00293488
    ;
    local_128 = &DAT_0028ae40;
    uStack_120 = 3;
    local_108 = 0;
    local_110 = 2;
    local_118 = &local_e8;
    local_e8 = local_c8;
    local_d8 = (undefined *)&local_148;
    (*(code *)puVar1)(&local_128);
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00293490)(1);
LAB_001a4094:
    uVar4 = 0;
  }
  else {
    local_88 = local_50;
    local_98 = local_60;
    uStack_94 = uStack_5c;
    uStack_90 = uStack_58;
    uStack_8c = uStack_54;
                    /* try { // try from 001a40bb to 001a40c7 has its CatchHandler @ 001a433e */
    _ZN10num_bigint7biguint7convert89__LT_impl_u20_core__convert__From_LT_u64_GT__u20_for_u20_num_bigint__biguint__BigUint_GT_4from17h863489988f6613a1E
              (&local_48);
    local_128._0_4_ = local_48;
    local_128._4_4_ = uStack_44;
    uStack_120 = CONCAT44(uStack_3c,uStack_40);
    local_118 = (undefined8 *)local_38;
                    /* try { // try from 001a40f7 to 001a40fb has its CatchHandler @ 001a432f */
    cVar3 = _ZN10num_bigint7biguint9cmp_slice17h04e9fe9c6a1333c8E
                      (CONCAT44(uStack_8c,uStack_90),local_88,uStack_120);
    if (cVar3 == '\x01') {
                    /* try { // try from 001a4100 to 001a415b has its CatchHandler @ 001a433e */
      _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17hcd1b174757cb0819E
                (&local_128);
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0e547a70c3f80ae3E
                (&local_128,&local_98);
      local_d8 = (undefined *)local_118;
      local_e8 = (undefined *)CONCAT44(local_128._4_4_,(undefined4)local_128);
      pcStack_e0 = (code *)uStack_120;
      local_128._0_4_ = 2;
      local_128._4_4_ = 0;
      _ZN9num_prime8nt_funcs7factors17h468006e1cecc35d2E(local_c8,&local_e8,&local_128);
    }
    else {
      _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17hcd1b174757cb0819E
                (&local_128);
      local_c8._0_8_ = 0;
      local_b8 = 0;
      local_b0 = 0x8000000000000000;
    }
    local_68 = local_b8;
    local_78 = local_c8._0_8_;
    local_70 = local_c8._8_8_;
    local_138 = local_a0;
    local_148 = local_b0;
    local_140 = local_a8;
    if (local_b0 == 0x8000000000000000) {
      local_118 = (undefined8 *)local_b8;
      local_128 = (undefined *)local_c8._0_8_;
      uStack_120 = local_c8._8_8_;
                    /* try { // try from 001a41ff to 001a421f has its CatchHandler @ 001a431c */
      uVar4 = _ZN9uu_factor12write_result17h4349ac4ce4d74e96E(param_3,&local_98,&local_128,param_4);
      auVar5 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h7f508640b0b65873E
                         (uVar4);
      if (auVar5._0_8_ == 0) {
                    /* try { // try from 001a42df to 001a42e6 has its CatchHandler @ 001a42f9 */
        _ZN4core3ptr100drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_num_bigint__biguint__BigUint_GT__GT__GT_17hdf28aa94b7ec965cE
                  (&local_148);
        _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17hcd1b174757cb0819E
                  (&local_98);
        goto LAB_001a4094;
      }
      if (local_148 != 0x8000000000000000) {
                    /* try { // try from 001a4239 to 001a4240 has its CatchHandler @ 001a42f9 */
        _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_num_bigint__biguint__BigUint_GT__GT_17he7eccbe3b1c15ef2E
                  (&local_148);
      }
    }
    else {
      local_d8 = (undefined *)local_a0;
      local_e8 = (undefined *)local_b0;
      pcStack_e0 = (code *)local_a8;
                    /* try { // try from 001a4260 to 001a4298 has its CatchHandler @ 001a4300 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h9329aa7fedbb9010E(local_c8)
      ;
      local_118 = (undefined8 *)local_b8;
      local_128 = (undefined *)local_c8._0_8_;
      uStack_120 = local_c8._8_8_;
      local_110 = CONCAT44(local_110._4_4_,1);
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h658e481b4643525fE(&local_128);
                    /* try { // try from 001a4299 to 001a42a5 has its CatchHandler @ 001a42fb */
      _ZN4core3ptr72drop_in_place_LT_alloc__vec__Vec_LT_num_bigint__biguint__BigUint_GT__GT_17he7eccbe3b1c15ef2E
                (&local_e8);
                    /* try { // try from 001a42a6 to 001a42b2 has its CatchHandler @ 001a433e */
      _ZN4core3ptr105drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_num_bigint__biguint__BigUint_C_usize_GT__GT_17hc741dac43ddbe340E
                (&local_78);
      auVar5._8_8_ = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hef5e0fc593b36546E_0028aea8
      ;
      auVar5._0_8_ = uVar4;
    }
    param_2 = auVar5._8_8_;
    uVar4 = auVar5._0_8_;
    _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17hcd1b174757cb0819E(&local_98);
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}