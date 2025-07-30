void _ZN7flealib13fileencrypter13FileEncrypter7encrypt17h95176c86bdb309f0E
               (undefined4 *param_1,undefined8 param_2,long param_3)

{
  undefined local_7e5;
  undefined local_7e4 [12];
  undefined local_7d8 [8];
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined8 local_7a8;
  undefined local_3f8 [992];
  
                    /* try { // try from 0048a9f5 to 0048aa31 has its CatchHandler @ 0048aaf2 */
  _ZN4aead8AeadCore14generate_nonce17hdad2d53bff0ec8aeE(local_7e4,&local_7e5);
  _ZN13generic_array10functional18FunctionalSequence3map17hebd2a052cb2ed74bE(local_7d8,param_2);
  _ZN66__LT_aes__autodetect__Aes256_u20_as_u20_crypto_common__KeyInit_GT_3new17h5c101e493a76d3c2E
            (&local_7b8,local_7d8);
  _ZN99__LT_aes_gcm__AesGcm_LT_Aes_C_NonceSize_C_TagSize_GT__u20_as_u20_core__convert__From_LT_Aes_GT__GT_4from17h8e50088c9855bafeE
            (local_3f8,&local_7b8);
                    /* try { // try from 0048aa3a to 0048aa5f has its CatchHandler @ 0048aae8 */
  _ZN34__LT_Alg_u20_as_u20_aead__Aead_GT_7encrypt17h2d406e729795b772E
            (&local_7b8,local_3f8,local_7e4,*(undefined8 *)(param_3 + 8),
             *(undefined8 *)(param_3 + 0x10));
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h889227b1e93563f8E(local_7d8,&local_7b8);
                    /* try { // try from 0048aa60 to 0048aa73 has its CatchHandler @ 0048aad4 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (&local_7b8,local_7e4,0xc);
                    /* try { // try from 0048aa7e to 0048aa8e has its CatchHandler @ 0048aac5 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
            (&local_7b8,local_7d0,local_7c8,&DAT_0080a108);
  *(undefined8 *)(param_1 + 4) = local_7a8;
  *param_1 = local_7b8;
  param_1[1] = uStack_7b4;
  param_1[2] = uStack_7b0;
  param_1[3] = uStack_7ac;
                    /* try { // try from 0048aaa1 to 0048aaaa has its CatchHandler @ 0048aae8 */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(local_7d8);
  _ZN4core3ptr274drop_in_place_LT_aes_gcm__AesGcm_LT_aes__autodetect__Aes256_C_typenum__uint__UInt_LT_typenum__uint__UInt_LT_typenum__uint__UInt_LT_typenum__uint__UInt_LT_typenum__uint__UTerm_C_typenum__bit__B1_GT__C_typenum__bit__B1_GT__C_typenum__bit__B0_GT__C_typenum__bit__B0_GT__GT__GT_17heff0883ab5114f31E
            ();
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(param_3);
  return;
}