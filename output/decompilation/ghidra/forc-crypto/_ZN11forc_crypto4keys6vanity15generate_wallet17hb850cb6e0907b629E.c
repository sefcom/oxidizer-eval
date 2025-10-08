undefined8 *
_ZN11forc_crypto4keys6vanity15generate_wallet17hb850cb6e0907b629E(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined7 uStack_f8;
  undefined uStack_f1;
  undefined7 uStack_f0;
  undefined uStack_e9;
  char local_e8;
  char cStack_e7;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined uStack_d8;
  undefined uStack_d7;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined local_d0;
  undefined7 uStack_cf;
  char local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char local_88;
  undefined7 uStack_87;
  undefined uStack_80;
  undefined7 uStack_7f;
  undefined uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char local_48;
  undefined7 uStack_47;
  undefined uStack_40;
  undefined7 uStack_3f;
  undefined uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_150 = (*(code *)PTR__ZN4rand4rngs6thread10thread_rng17h79c72c341fb4c7daE_00786fd8)();
  if (param_2 == 0) {
                    /* try { // try from 004fc036 to 004fc057 has its CatchHandler @ 004fc20a */
    _ZN9secp256k13key9SecretKey3new17hb769504fb52cba82E(&local_e8,&local_150);
    (*(code *)
      PTR__ZN112__LT_fuel_crypto__secp256__secret__SecretKey_u20_as_u20_core__convert__From_LT_secp256k1__key__SecretKey_GT__GT_4from17h2fedde1aa26a106bE_00786f20
    )(&local_88,&local_e8);
    local_108 = CONCAT17(uStack_80,uStack_87);
    uStack_100 = (undefined4)uStack_7f;
    uStack_fc = CONCAT13(uStack_78,(int3)((uint7)uStack_7f >> 0x20));
    uStack_f8 = uStack_77;
    uStack_f1 = (undefined)uStack_70;
    uStack_f0 = (undefined7)((ulong)uStack_70 >> 8);
    local_148 = 0x8000000000000000;
    cStack_e7 = local_88;
  }
  else {
                    /* try { // try from 004fbf91 to 004fbfa0 has its CatchHandler @ 004fc20a */
    _ZN14fuels_accounts7signers11private_key24generate_mnemonic_phrase17h4b2ffbc0595500a6E
              (&local_88,local_150);
    uVar2 = CONCAT71(uStack_7f,uStack_80);
    uVar1 = CONCAT71(uStack_77,uStack_78);
    local_138 = uStack_70;
    local_148._0_4_ = (undefined4)uVar2;
    local_148._4_4_ = (undefined4)((uint7)uStack_7f >> 0x18);
    uStack_140._0_4_ = (undefined4)uVar1;
    uStack_140._4_4_ = (undefined4)((uint7)uStack_77 >> 0x18);
    local_148 = uVar2;
    uStack_140 = uVar1;
    if (CONCAT71(uStack_87,local_88) != 0xc) {
      local_b8 = CONCAT44(uStack_54,local_58);
      uStack_b0 = CONCAT44(uStack_4c,uStack_50);
      local_c8 = (char)local_68;
      uStack_c7 = (undefined7)((ulong)local_68 >> 8);
      uStack_c0 = uStack_60;
      uStack_e0 = (undefined2)uVar2;
      uStack_de = (undefined2)((uint7)uStack_7f >> 8);
      uStack_dc = local_148._4_4_;
      uStack_d8 = uStack_78;
      uStack_d7 = (undefined)uStack_77;
      uStack_d6 = (undefined2)((uint7)uStack_77 >> 8);
      uStack_d4 = uStack_140._4_4_;
      local_d0 = (undefined)uStack_70;
      uStack_cf = (undefined7)((ulong)uStack_70 >> 8);
      local_e8 = local_88;
      cStack_e7 = (char)uStack_87;
      uStack_e6 = (undefined2)((uint7)uStack_87 >> 8);
      uStack_e4 = (undefined4)((uint7)uStack_87 >> 0x18);
                    /* try { // try from 004fc189 to 004fc192 has its CatchHandler @ 004fc20a */
      uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h38236e235eb7cc0aE
                        (&local_e8);
      *param_1 = uVar2;
      param_1[8] = 0x8000000000000001;
      goto LAB_004fc1a4;
    }
    local_128 = (undefined4)local_148;
    uStack_124 = local_148._4_4_;
    uStack_120 = (undefined4)uStack_140;
    uStack_11c = uStack_140._4_4_;
    local_118 = uStack_70;
    uVar2 = CONCAT44(uStack_140._4_4_,(undefined4)uStack_140);
                    /* try { // try from 004fbfe6 to 004fc015 has its CatchHandler @ 004fc1ec */
    (*(code *)
      PTR__ZN11fuel_crypto7secp2566secret9SecretKey34new_from_mnemonic_phrase_with_path17hbc6e3f82111c66c3E_00786fe0
    )(&local_e8,uVar2,uStack_70,"m/44\'/1179993420\'/0\'/0/0",0x18);
    if (local_e8 == '\x01') {
      uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h47e429fa349b8f4bE
                        (cStack_e7);
      *param_1 = uVar2;
      param_1[8] = 0x8000000000000001;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h223631e41b095cf4E(&local_128);
      goto LAB_004fc1a4;
    }
    local_108 = CONCAT26(uStack_e0,CONCAT42(uStack_e4,uStack_e6));
    uStack_f8 = (undefined7)
                (CONCAT17(local_d0,CONCAT43(uStack_d4,CONCAT21(uStack_d6,uStack_d7))) >> 8);
    uStack_f1 = (undefined)uStack_cf;
    uStack_f0 = (undefined7)(CONCAT17(local_c8,uStack_cf) >> 8);
    uStack_100 = (undefined4)CONCAT42(uStack_dc,uStack_de);
    uStack_fc = (undefined4)
                (CONCAT17(uStack_d7,CONCAT16(uStack_d8,CONCAT42(uStack_dc,uStack_de))) >> 0x20);
    local_148 = CONCAT44(uStack_124,local_128);
    local_28 = CONCAT44(uStack_11c,uStack_120);
    uStack_20 = local_118;
  }
  uStack_47 = (undefined7)local_108;
  uStack_40 = (undefined)((ulong)local_108 >> 0x38);
  uStack_3f = (undefined7)CONCAT44(uStack_fc,uStack_100);
  uStack_30 = CONCAT71(uStack_f0,uStack_f1);
  uStack_38 = uStack_fc._3_1_;
  uStack_37 = uStack_f8;
  uStack_140 = local_28;
  local_138 = uStack_20;
                    /* try { // try from 004fc0ba to 004fc0e2 has its CatchHandler @ 004fc1fb */
  local_48 = cStack_e7;
  (*(code *)
    PTR__ZN130__LT_fuel_crypto__secp256__public__PublicKey_u20_as_u20_core__convert__From_LT__RF_fuel_crypto__secp256__secret__SecretKey_GT__GT_4from17h3f0f314c728f838fE_00786fe8
  )(&local_88,&local_48);
  (*(code *)PTR__ZN11fuel_crypto7secp2566public9PublicKey4hash17hf0f53641a7dd2019E_00786f18)
            (&local_108,&local_88);
  uStack_d8 = (undefined)uStack_f8;
  uStack_d7 = (undefined)((uint7)uStack_f8 >> 8);
  uStack_d6 = (undefined2)((uint7)uStack_f8 >> 0x10);
  uStack_d4 = (undefined4)(CONCAT17(uStack_f1,uStack_f8) >> 0x20);
  local_d0 = (undefined)uStack_f0;
  uStack_cf = (undefined7)(CONCAT17(uStack_e9,uStack_f0) >> 8);
  local_e8 = (char)local_108;
  cStack_e7 = (char)((ulong)local_108 >> 8);
  uStack_e6 = (undefined2)((ulong)local_108 >> 0x10);
  uStack_e4 = local_108._4_4_;
  uStack_e0 = (undefined2)uStack_100;
  uStack_de = (undefined2)((uint)uStack_100 >> 0x10);
  uStack_dc = uStack_fc;
  local_a8 = local_148;
  uStack_a0 = uStack_140;
  local_98 = local_138;
  uStack_c0 = CONCAT71(uStack_3f,uStack_40);
  local_b8 = CONCAT71(uStack_37,uStack_38);
  local_c8 = local_48;
  uStack_c7 = uStack_47;
  uStack_b0 = uStack_30;
  param_1[10] = local_138;
  param_1[8] = local_148;
  param_1[9] = uStack_140;
  param_1[6] = local_b8;
  param_1[7] = uStack_30;
  param_1[4] = CONCAT71(uStack_47,local_48);
  param_1[5] = uStack_c0;
  param_1[2] = CONCAT17(uStack_f1,uStack_f8);
  param_1[3] = CONCAT17(uStack_e9,uStack_f0);
  *(undefined4 *)param_1 = (undefined4)local_108;
  *(undefined4 *)((long)param_1 + 4) = local_108._4_4_;
  *(undefined4 *)(param_1 + 1) = uStack_100;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_fc;
LAB_004fc1a4:
  _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17h57567a10081bac59E(&local_150);
  return param_1;
}