void _ZN9FakeCrypt7fileops12encrypt_file17ha7bc1626977de376E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  int local_818;
  undefined local_811;
  byte local_810 [4];
  int local_80c;
  undefined8 local_800;
  undefined8 local_7f8;
  ulong local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 *local_7d8;
  code *local_7d0;
  undefined *local_7c8;
  undefined *local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 **local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined local_3f8 [984];
  
  local_7e8 = param_1;
  local_7e0 = param_2;
  _ZN3std2fs4File4open17hfe7e6621c8fb380dE(local_810,param_1);
  if ((local_810[0] & 1) == 0) {
    local_818 = local_80c;
    local_800 = 0;
    local_7f8 = 1;
    local_7f0 = 0;
                    /* try { // try from 00154ec6 to 00154ee3 has its CatchHandler @ 00155079 */
    auVar3 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_11read_to_end17h0619605a8d236003E_001deb88
             )(&local_818,&local_800);
    if (auVar3._0_8_ == 0) {
                    /* try { // try from 00154f15 to 00155024 has its CatchHandler @ 00155079 */
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h5f68c5cabed77c10E
                (0,auVar3._8_8_);
      uVar1 = local_7f0;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17h50c127f716084c0fE
                (&local_800,(local_7f0 & 0x7ffffffffffffff0) + 0x10,0,&PTR_s_src_fileops_rs_001d95d0
                );
      _ZN66__LT_aes__autodetect__Aes256_u20_as_u20_crypto_common__KeyInit_GT_3new17hc251919afc52b389E
                (&local_7b8,param_3);
      _ZN79__LT_cbc__decrypt__Decryptor_LT_C_GT__u20_as_u20_crypto_common__InnerIvInit_GT_13inner_iv_init17h767b9b8c258b0744E
                (local_3f8,&local_7b8,param_4);
      auVar3 = _ZN6cipher5block15BlockEncryptMut18encrypt_padded_mut17hd555d618ee738abcE
                         (local_3f8,local_7f8,local_7f0,uVar1);
      if (auVar3._0_8_ == 0) {
        local_7d8 = &local_7e8;
        local_7d0 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h7a0a1daf0de9b880E;
        local_7c8 = &local_811;
        local_7c0 = 
        PTR__ZN62__LT_inout__errors__PadError_u20_as_u20_core__fmt__Display_GT_3fmt17h9b76fa3f5d7cfb5cE_001debf0
        ;
        local_7b8 = &PTR_s_____Encryption_failed_for___001d95a0;
        local_7b0 = 3;
        local_798 = 0;
        local_7a8 = &local_7d8;
        local_7a0 = 2;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hc8807d5917a19629E_001deb90)(&local_7b8);
      }
      else {
        _ZN3std2fs4File6create17h5c1de6a00e2586b5E(&local_7b8,local_7e8,local_7e0);
        if ((int)local_7b8 == 0) {
          local_7d8 = (undefined8 *)CONCAT44(local_7d8._4_4_,local_7b8._4_4_);
                    /* try { // try from 00155032 to 00155049 has its CatchHandler @ 00155058 */
          uVar2 = _ZN3std2io5Write9write_all17h61cad997d75bad86E
                            (&local_7d8,auVar3._0_8_,auVar3._8_8_);
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h52eca53ec7fb34e8E
                    (uVar2);
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfc222f4db551af96E((int)local_7d8);
        }
        else {
          _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h3f5dd9ad240898e4E
                    (&local_7b8);
        }
      }
    }
    else {
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h5f68c5cabed77c10E
                (auVar3._0_8_,auVar3._8_8_);
    }
                    /* try { // try from 00154ee4 to 00154eed has its CatchHandler @ 00155074 */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0777b7bfa8327074E(&local_800);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfc222f4db551af96E(local_818);
    if ((local_810[0] & 1) == 0) {
      return;
    }
  }
  _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h3f5dd9ad240898e4E
            (local_810);
  return;
}