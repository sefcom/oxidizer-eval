void _ZN20fuel_core_e2e_client5tests6script13load_contract17h50fdcbf5862e9e54E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 extraout_RDX;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined local_1d8 [48];
  undefined local_1a8 [48];
  undefined8 local_178;
  undefined8 local_170;
  undefined local_160 [24];
  undefined local_148 [24];
  undefined local_130 [24];
  undefined local_118 [8];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  _ZN22fuel_core_chain_config6config17snapshot_metadata16SnapshotMetadata4read17hf2b2b832e3942009E
            (&local_278);
  local_38 = local_228;
  uStack_30 = uStack_220;
  local_48 = local_238;
  uStack_44 = uStack_234;
  uStack_40 = uStack_230;
  uStack_3c = uStack_22c;
  local_58 = local_248;
  uStack_54 = uStack_244;
  uStack_50 = uStack_240;
  uStack_4c = uStack_23c;
  local_68 = local_258;
  uStack_64 = uStack_254;
  uStack_60 = uStack_250;
  uStack_5c = uStack_24c;
  local_78 = local_268;
  uStack_74 = uStack_264;
  uStack_70 = uStack_260;
  uStack_6c = uStack_25c;
  (*(code *)
    PTR__ZN22fuel_core_chain_config6config5state11StateConfig22from_snapshot_metadata17h4040cf5722e21b97E_012b82d8
  )(&local_278,local_88,extraout_RDX,-CONCAT44(uStack_274,local_278));
  if (CONCAT44(uStack_274,local_278) == 2) {
    _ZN70__LT_libtest_mimic__Failed_u20_as_u20_core__convert__From_LT_M_GT__GT_4from17h0a08829b3df7f35bE
              (param_1 + 1,CONCAT44(uStack_26c,uStack_270));
    *param_1 = 0x8000000000000000;
  }
  else {
    (*(code *)PTR_memcpy_012b6040)(local_1a8,&local_268,0x90);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h072e016390df4c4bE
              (local_1d8,local_130);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd24c45a8ee888241E
              (&local_278,local_1d8);
    if (CONCAT44(uStack_274,local_278) == -0x8000000000000000) {
                    /* try { // try from 009c8cd8 to 009c8ceb has its CatchHandler @ 009c8e0b */
      _ZN70__LT_libtest_mimic__Failed_u20_as_u20_core__convert__From_LT_M_GT__GT_4from17hbe2fc37e63ba0adcE
                (&local_278,"No contract found in the state",0x1e);
      param_1[3] = CONCAT44(uStack_264,local_268);
      *(undefined4 *)(param_1 + 1) = local_278;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_274;
      *(undefined4 *)(param_1 + 2) = uStack_270;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_26c;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 009c8d00 to 009c8d0c has its CatchHandler @ 009c8e06 */
      _ZN4core3ptr116drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_fuel_core_chain_config__config__contract__ContractConfig_GT__GT_17h741665a0070c3483E
                (local_1d8);
    }
    else {
      local_f0 = uStack_250;
      uStack_ec = uStack_24c;
      uStack_e8 = local_248;
      uStack_e4 = uStack_244;
      local_e0 = uStack_240;
      uStack_dc = uStack_23c;
      uStack_d8 = local_238;
      uStack_d4 = uStack_234;
      uStack_c8 = local_228;
      local_c0 = uStack_220;
      uStack_b8 = uStack_218;
      local_b0 = local_210;
      uStack_a8 = uStack_208;
      local_a0 = local_200;
      uStack_9c = uStack_1fc;
      uStack_98 = uStack_1f8;
      uStack_94 = uStack_1f4;
      local_90 = local_1f0;
      local_110 = uStack_270;
      uStack_10c = uStack_26c;
      uStack_108 = local_268;
      uStack_104 = uStack_264;
                    /* try { // try from 009c8d92 to 009c8daf has its CatchHandler @ 009c8e23 */
      _ZN4core3ptr116drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_fuel_core_chain_config__config__contract__ContractConfig_GT__GT_17h741665a0070c3483E
                (local_1d8);
      (*(code *)
        PTR__ZN22fuel_core_chain_config6config8contract14ContractConfig18update_contract_id17ha137809969c911a3E_012b82d0
      )(local_118,param_2);
      (*(code *)PTR_memcpy_012b6040)(param_1,local_118,0x90);
    }
    _ZN4core3ptr91drop_in_place_LT_alloc__vec__Vec_LT_fuel_core_client__client__types__ResolvedOutput_GT__GT_17h41296cb78d09af70E
              (local_178,local_170);
    _ZN4core3ptr98drop_in_place_LT_alloc__vec__Vec_LT_fuel_core_chain_config__config__message__MessageConfig_GT__GT_17hebf2e035c3415484E
              (local_160);
    _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT_fuel_core_chain_config__config__contract__ContractStateConfig_GT__GT_17h2fd06162d510fb73E
              (local_148);
  }
  return;
}