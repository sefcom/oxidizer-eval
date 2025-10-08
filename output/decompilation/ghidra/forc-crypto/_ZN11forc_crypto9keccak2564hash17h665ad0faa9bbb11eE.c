void _ZN11forc_crypto9keccak2564hash17h665ad0faa9bbb11eE(undefined4 *param_1,undefined8 param_2)

{
  undefined auStack_318 [24];
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined local_2e0 [352];
  undefined local_180 [352];
  
  _ZN90__LT_digest__core_api__wrapper__CoreWrapper_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17ha61840d03e3dc2b2E
            (local_180);
  _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17h6aa5f469e3a8dd5cE
            (local_2e0,param_2);
  _ZN44__LT_D_u20_as_u20_digest__digest__Digest_GT_6update17h17626cfa664d9508E(local_180,local_2e0);
  (*(code *)PTR_memcpy_00786380)(local_2e0,local_180,0x160);
  _ZN6digest11FixedOutput14finalize_fixed17hb894065a9b1be675E(&local_300,local_2e0);
  _ZN3hex6encode17h45bdfa9de18d30b7E(auStack_318,&local_300);
                    /* try { // try from 004c3883 to 004c38a5 has its CatchHandler @ 004c38ce */
  _ZN10serde_json5value8to_value17hbca4fdadd9c88b9dE(local_2e0,auStack_318);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0e8745fea5c699d4E
            (&local_300,local_2e0,&PTR_DAT_0072c0c0);
  param_1[4] = local_2f0;
  param_1[5] = uStack_2ec;
  param_1[6] = uStack_2e8;
  param_1[7] = uStack_2e4;
  *param_1 = local_300;
  param_1[1] = uStack_2fc;
  param_1[2] = uStack_2f8;
  param_1[3] = uStack_2f4;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h194128577f2b3aedE(auStack_318);
  return;
}