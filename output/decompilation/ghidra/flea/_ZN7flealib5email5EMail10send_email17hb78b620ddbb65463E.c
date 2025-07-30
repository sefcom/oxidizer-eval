undefined8
_ZN7flealib5email5EMail10send_email17hb78b620ddbb65463E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined local_b8 [136];
  
  local_2d8 = 0;
  uStack_2d0 = 8;
  local_2c8 = 0;
  uStack_2c0 = 0x8000000000000000;
  local_288 = CONCAT71(local_288._1_7_,1);
                    /* try { // try from 004918dc to 0049190b has its CatchHandler @ 00491c52 */
  (*(code *)
    PTR__ZN87__LT_lettre__message__mailbox__types__Mailbox_u20_as_u20_core__str__traits__FromStr_GT_8from_str17hca5b830ea31f665eE_00828670
  )(&local_198,param_4,param_5);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h51c45ecd630aa21bE
            (&local_1f8,&local_198,&PTR_s_flealib_src_email_rstext_plain__c_0080a348);
  (*(code *)PTR__ZN6lettre7message14MessageBuilder4from17h80bd8256f55c1d52E_00828678)
            (&local_198,&local_2d8,&local_1f8);
                    /* try { // try from 00491927 to 00491950 has its CatchHandler @ 00491c40 */
  (*(code *)
    PTR__ZN87__LT_lettre__message__mailbox__types__Mailbox_u20_as_u20_core__str__traits__FromStr_GT_8from_str17hca5b830ea31f665eE_00828670
  )(&local_2d8,param_2,param_3);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h51c45ecd630aa21bE
            (&local_1f8,&local_2d8,&PTR_s_flealib_src_email_rstext_plain__c_0080a360);
  (*(code *)PTR__ZN6lettre7message14MessageBuilder2to17h8e72621cfa4d89e5E_00828680)
            (&local_2d8,&local_198,&local_1f8);
  _ZN6lettre7message14MessageBuilder7subject17h3c1da0aa5aeb6d42E
            (&local_198,&local_2d8,param_6,param_7);
  local_288 = DAT_0080a3c8;
  local_298 = _DAT_0080a3b8;
  uStack_290 = _UNK_0080a3c0;
  local_2a8 = _DAT_0080a3a8;
  uStack_2a0 = _UNK_0080a3b0;
  local_2b8 = _DAT_0080a398;
  uStack_2b0 = _UNK_0080a3a0;
  local_2c8 = _DAT_0080a388;
  uStack_2c0 = _UNK_0080a390;
  local_2d8 = CONCAT44(_UNK_0080a37c,_DAT_0080a378);
  uStack_2d0 = CONCAT44(_UNK_0080a384,_UNK_0080a380);
  _ZN6lettre7message14MessageBuilder6header17h9bb9686bcbccd57cE(&local_1f8,&local_198,&local_2d8);
                    /* try { // try from 00491a03 to 00491a12 has its CatchHandler @ 00491c10 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (&local_2d8,param_8,param_9);
  local_188 = local_2c8;
  local_198 = local_2d8;
  uStack_190 = uStack_2d0;
  _ZN6lettre7message14MessageBuilder4body17h6d3c592676ecce8fE(&local_2d8,&local_1f8,&local_198);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hdbe6d9e661609677E(local_b8,&local_2d8);
                    /* try { // try from 00491a6a to 00491a79 has its CatchHandler @ 00491c0e */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (&local_2d8,param_10,param_11);
  local_188 = local_2c8;
  local_198._0_4_ = (undefined4)local_2d8;
  local_198._4_4_ = local_2d8._4_4_;
  uStack_190._0_4_ = (undefined4)uStack_2d0;
  uStack_190._4_4_ = uStack_2d0._4_4_;
                    /* try { // try from 00491aa4 to 00491aad has its CatchHandler @ 00491bfc */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (&local_2d8,param_12,param_13);
  uStack_2e0 = local_2c8;
  uStack_2f0 = local_2d8;
  uStack_2e8 = uStack_2d0;
  local_308 = (undefined4)local_198;
  uStack_304 = local_198._4_4_;
  uStack_300 = (undefined4)uStack_190;
  uStack_2fc = uStack_190._4_4_;
  local_2f8 = local_188;
                    /* try { // try from 00491aec to 00491b08 has its CatchHandler @ 00491c31 */
  (*(code *)
    PTR__ZN6lettre9transport4smtp9transport13SmtpTransport5relay17ha4678dd0a2f4789dE_00828688)
            (&local_2d8,param_14,param_15);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h374d5854169469bfE(&local_198,&local_2d8);
  local_1d8 = (undefined4)uStack_2e8;
  uStack_1d4 = uStack_2e8._4_4_;
  uStack_1d0 = (undefined4)uStack_2e0;
  uStack_1cc = uStack_2e0._4_4_;
  local_1e8 = (undefined4)local_2f8;
  uStack_1e4 = local_2f8._4_4_;
  uStack_1e0 = (undefined4)uStack_2f0;
  uStack_1dc = uStack_2f0._4_4_;
  local_1f8 = local_308;
  uStack_1f4 = uStack_304;
  uStack_1f0 = uStack_300;
  uStack_1ec = uStack_2fc;
                    /* try { // try from 00491b30 to 00491b55 has its CatchHandler @ 00491c61 */
  (*(code *)
    PTR__ZN6lettre9transport4smtp9transport20SmtpTransportBuilder11credentials17hedb09507299783dfE_00828690
  )(&local_2d8,&local_198,&local_1f8);
  local_310 = (*(code *)
                PTR__ZN6lettre9transport4smtp9transport20SmtpTransportBuilder5build17hb09a1eb5c0012b38E_00828698
              )(&local_2d8);
                    /* try { // try from 00491b5b to 00491b71 has its CatchHandler @ 00491c22 */
  _ZN6lettre9transport9Transport4send17hc6382188ba3d8fb6E(&local_2d8,&local_310,local_b8);
  uVar1 = uStack_2d0;
  if (local_2d8 == -0x8000000000000000) {
                    /* try { // try from 00491b8b to 00491b94 has its CatchHandler @ 00491c61 */
    _ZN4core3ptr70drop_in_place_LT_lettre__transport__smtp__transport__SmtpTransport_GT_17h8ae73c8263b3f072E
              (&local_310);
    _ZN4core3ptr45drop_in_place_LT_lettre__message__Message_GT_17h5e12d633996c0cf7E(local_b8);
  }
  else {
    local_188 = local_2c8;
    uStack_180 = (undefined4)uStack_2c0;
    uStack_17c = uStack_2c0._4_4_;
    local_198 = local_2d8;
    uStack_190 = uStack_2d0;
                    /* try { // try from 00491bc1 to 00491bcd has its CatchHandler @ 00491c22 */
    _ZN4core3ptr64drop_in_place_LT_lettre__transport__smtp__response__Response_GT_17hb741338183c3818bE
              (&local_198);
                    /* try { // try from 00491bce to 00491bd7 has its CatchHandler @ 00491c61 */
    _ZN4core3ptr70drop_in_place_LT_lettre__transport__smtp__transport__SmtpTransport_GT_17h8ae73c8263b3f072E
              (&local_310);
    _ZN4core3ptr45drop_in_place_LT_lettre__message__Message_GT_17h5e12d633996c0cf7E(local_b8);
    uVar1 = 0;
  }
  return uVar1;
}