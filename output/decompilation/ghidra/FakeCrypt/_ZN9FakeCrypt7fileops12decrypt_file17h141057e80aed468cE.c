void _ZN9FakeCrypt7fileops12decrypt_file17h141057e80aed468cE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  int local_808;
  undefined local_801;
  byte local_800 [4];
  int local_7fc;
  undefined8 local_7f0;
  undefined **local_7e8;
  undefined8 **local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 *local_7c8;
  code *local_7c0;
  undefined *local_7b8;
  undefined *local_7b0;
  undefined8 local_7a8;
  undefined **local_7a0;
  undefined8 **local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined local_3e8 [976];
  
  local_7d8 = param_1;
  local_7d0 = param_2;
  _ZN3std2fs4File4open17hfe7e6621c8fb380dE(local_800,param_1);
  if ((local_800[0] & 1) == 0) {
    local_808 = local_7fc;
    local_7f0 = 0;
    local_7e8 = (undefined **)0x1;
    local_7e0 = (undefined8 **)0x0;
                    /* try { // try from 00155104 to 00155121 has its CatchHandler @ 0015529d */
    auVar2 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_11read_to_end17h0619605a8d236003E_001deb88
             )(&local_808,&local_7f0);
    if (auVar2._0_8_ == 0) {
                    /* try { // try from 00155151 to 00155248 has its CatchHandler @ 0015529d */
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h5f68c5cabed77c10E
                (0,auVar2._8_8_);
      _ZN66__LT_aes__autodetect__Aes256_u20_as_u20_crypto_common__KeyInit_GT_3new17hc251919afc52b389E
                (&local_7a8,param_3);
      _ZN79__LT_cbc__decrypt__Decryptor_LT_C_GT__u20_as_u20_crypto_common__InnerIvInit_GT_13inner_iv_init17h767b9b8c258b0744E
                (local_3e8,&local_7a8,param_4);
      local_7a8 = local_7e8;
      local_7a0 = local_7e8;
      local_798 = local_7e0;
      auVar2 = _ZN6cipher5block15BlockDecryptMut24decrypt_padded_inout_mut17h383e1fa152245349E
                         (local_3e8,&local_7a8);
      if (auVar2._0_8_ == 0) {
        local_7c8 = &local_7d8;
        local_7c0 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h7a0a1daf0de9b880E;
        local_7b8 = &local_801;
        local_7b0 = 
        PTR__ZN64__LT_block_padding__UnpadError_u20_as_u20_core__fmt__Display_GT_3fmt17h59fde8a55320d860E_001debf8
        ;
        local_7a8 = &PTR_s_____Decryption_failed_for_001d95e8;
        local_7a0 = (undefined **)0x3;
        local_788 = 0;
        local_798 = &local_7c8;
        local_790 = 2;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17hc8807d5917a19629E_001deb90)(&local_7a8);
      }
      else {
        _ZN3std2fs4File6create17h5c1de6a00e2586b5E(&local_7a8,local_7d8,local_7d0);
        if ((int)local_7a8 == 0) {
          local_7c8 = (undefined8 *)CONCAT44(local_7c8._4_4_,local_7a8._4_4_);
                    /* try { // try from 00155256 to 0015526d has its CatchHandler @ 0015527c */
          uVar1 = _ZN3std2io5Write9write_all17h61cad997d75bad86E
                            (&local_7c8,auVar2._0_8_,auVar2._8_8_);
          _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h52eca53ec7fb34e8E
                    (uVar1);
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfc222f4db551af96E((int)local_7c8);
        }
        else {
          _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h3f5dd9ad240898e4E
                    (&local_7a8);
        }
      }
    }
    else {
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h5f68c5cabed77c10E
                (auVar2._0_8_,auVar2._8_8_);
    }
                    /* try { // try from 00155122 to 0015512b has its CatchHandler @ 00155298 */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0777b7bfa8327074E(&local_7f0);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfc222f4db551af96E(local_808);
    if ((local_800[0] & 1) == 0) {
      return;
    }
  }
  _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h3f5dd9ad240898e4E
            (local_800);
  return;
}