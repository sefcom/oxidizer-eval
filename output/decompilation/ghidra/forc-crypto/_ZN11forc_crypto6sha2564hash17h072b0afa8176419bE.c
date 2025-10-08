void _ZN11forc_crypto6sha2564hash17h072b0afa8176419bE(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined local_50 [24];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
                    /* try { // try from 004c3352 to 004c3359 has its CatchHandler @ 004c349d */
  _ZN90__LT_digest__core_api__wrapper__CoreWrapper_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17h8df0ff4710d81c21E
            (&local_138);
  local_68 = local_d8;
  uStack_60 = uStack_d0;
  local_78 = local_e8;
  uStack_70 = uStack_e0;
  local_88 = local_f8;
  uStack_80 = uStack_f0;
  local_98 = local_108;
  uStack_94 = uStack_104;
  uStack_90 = uStack_100;
  uStack_8c = uStack_fc;
  local_a8 = local_118;
  uStack_a4 = uStack_114;
  uStack_a0 = uStack_110;
  uStack_9c = uStack_10c;
  local_b8 = local_128;
  uStack_b4 = uStack_124;
  uStack_b0 = uStack_120;
  uStack_ac = uStack_11c;
  local_c8 = local_138;
  uStack_c4 = uStack_134;
  uStack_c0 = uStack_130;
  uStack_bc = uStack_12c;
  _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17h6aa5f469e3a8dd5cE
            (&local_138,param_2);
  _ZN44__LT_D_u20_as_u20_digest__digest__Digest_GT_6update17h54e2397ad2bb0977E(&local_c8,&local_138)
  ;
  local_d8 = local_68;
  uStack_d0 = uStack_60;
  local_e8 = local_78;
  uStack_e0 = uStack_70;
  local_f8 = local_88;
  uStack_f0 = uStack_80;
  local_108 = local_98;
  uStack_104 = uStack_94;
  uStack_100 = uStack_90;
  uStack_fc = uStack_8c;
  local_118 = local_a8;
  uStack_114 = uStack_a4;
  uStack_110 = uStack_a0;
  uStack_10c = uStack_9c;
  local_128 = local_b8;
  uStack_124 = uStack_b4;
  uStack_120 = uStack_b0;
  uStack_11c = uStack_ac;
  local_138 = local_c8;
  uStack_134 = uStack_c4;
  uStack_130 = uStack_c0;
  uStack_12c = uStack_bc;
  (*(code *)PTR__ZN11fuel_crypto6hasher6Hasher8finalize17h0ee816244d60ad9bE_00786390)
            (&local_38,&local_138);
  _ZN3hex6encode17h45bdfa9de18d30b7E(local_50,&local_38);
                    /* try { // try from 004c344a to 004c346b has its CatchHandler @ 004c34b0 */
  _ZN10serde_json5value8to_value17hbca4fdadd9c88b9dE(&local_138,local_50);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0e8745fea5c699d4E
            (&local_38,&local_138,&PTR_DAT_0072c070);
  param_1[4] = local_28;
  param_1[5] = uStack_24;
  param_1[6] = uStack_20;
  param_1[7] = uStack_1c;
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h194128577f2b3aedE(local_50);
  return;
}