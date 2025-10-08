undefined8 *
_ZN4just8function6sha25617h31ab0b00f8d0281fE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_RDX;
  undefined *local_138;
  code *local_130;
  undefined *local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined local_b0 [40];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [32];
  
  _ZN90__LT_digest__core_api__wrapper__CoreWrapper_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17h9a28c815d5f91f76E
            (local_b0);
  _ZN44__LT_D_u20_as_u20_digest__digest__Digest_GT_6update17he6f5cd09ccc42569E
            (local_b0,param_3,param_4);
  local_c8 = local_50;
  uStack_c0 = uStack_48;
  local_d8 = local_60;
  uStack_d0 = uStack_58;
  local_e8 = local_70;
  uStack_e0 = uStack_68;
  local_f8 = local_80;
  uStack_f4 = uStack_7c;
  uStack_f0 = uStack_78;
  uStack_ec = uStack_74;
  uStack_100 = uStack_88;
  uStack_fc = uStack_84;
  _ZN6digest11FixedOutput14finalize_fixed17hb4d87fe511f17e43E(local_40,&local_128);
  local_130 = 
  _ZN13generic_array3hex91__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_generic_array__GenericArray_LT_u8_C_T_GT__GT_3fmt17hce58fbd6baa0c32bE
  ;
  local_128 = &DAT_00165db0;
  uStack_120 = 1;
  local_108 = 0;
  uStack_110 = 1;
  local_138 = local_40;
  local_118 = (undefined *)&local_138;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
            (param_1 + 1,0,extraout_RDX,&local_128);
  *param_1 = 0;
  return param_1;
}