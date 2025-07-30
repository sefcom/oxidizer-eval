void _ZN7flealib13fileencrypter13FileEncrypter7decrypt17hff9e86b8c682ae6bE
               (undefined4 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 extraout_RDX;
  undefined auVar4 [16];
  long local_818;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined8 local_800;
  long local_7f0;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  long local_7d8;
  undefined4 local_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined8 local_418 [125];
  
  lVar1 = *(long *)(param_3 + 8);
  uVar2 = *(ulong *)(param_3 + 0x10);
                    /* try { // try from 0048ab32 to 0048ab91 has its CatchHandler @ 0048ac95 */
  auVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17ha9914e413251f43eE
                     (0xc,lVar1,uVar2,&DAT_0080a120);
  local_818 = auVar4._8_8_;
  if (local_818 == 0xc) {
    if (0xb < uVar2) {
      _ZN13generic_array10functional18FunctionalSequence3map17hebd2a052cb2ed74bE(&local_810,param_2)
      ;
      _ZN66__LT_aes__autodetect__Aes256_u20_as_u20_crypto_common__KeyInit_GT_3new17h5c101e493a76d3c2E
                (&local_7d8,&local_810);
      _ZN99__LT_aes_gcm__AesGcm_LT_Aes_C_NonceSize_C_TagSize_GT__u20_as_u20_core__convert__From_LT_Aes_GT__GT_4from17h8e50088c9855bafeE
                (local_418,&local_7d8);
                    /* try { // try from 0048ab92 to 0048ac13 has its CatchHandler @ 0048ac8b */
      _ZN34__LT_Alg_u20_as_u20_aead__Aead_GT_7decrypt17hdc20b5701a511df6E
                (&local_7d8,local_418,auVar4._0_8_,lVar1 + 0xc,uVar2 - 0xc);
      local_7f0 = local_7d8;
      local_7e8 = local_7d0;
      uStack_7e4 = uStack_7cc;
      uStack_7e0 = uStack_7c8;
      uStack_7dc = uStack_7c4;
      _ZN5alloc6string6String9from_utf817hd36b3fc0ff50dc14E
                (&local_7d8,&local_7f0,extraout_RDX,-local_7d8);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hdccd02afad51252cE(&local_810,&local_7d8);
      *(undefined8 *)(param_1 + 4) = local_800;
      *param_1 = local_810;
      param_1[1] = uStack_80c;
      param_1[2] = uStack_808;
      param_1[3] = uStack_804;
      _ZN4core3ptr274drop_in_place_LT_aes_gcm__AesGcm_LT_aes__autodetect__Aes256_C_typenum__uint__UInt_LT_typenum__uint__UInt_LT_typenum__uint__UInt_LT_typenum__uint__UInt_LT_typenum__uint__UTerm_C_typenum__bit__B1_GT__C_typenum__bit__B1_GT__C_typenum__bit__B0_GT__C_typenum__bit__B0_GT__GT__GT_17heff0883ab5114f31E
                ();
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(param_3);
      return;
    }
    (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h534838c90eea25d8E_008267e0)
              (0xc,uVar2,&DAT_0080a150);
  }
  else {
    local_418[0] = 0;
                    /* try { // try from 0048ac51 to 0048ac88 has its CatchHandler @ 0048ac95 */
    (*(code *)PTR__ZN4core9panicking13assert_failed17h7c645b2ace17315cE_00826f08)
              (0,&local_818,&DAT_00150af0,local_418,&PTR_s__root__cargo_registry_src_index__00809d40
              );
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}