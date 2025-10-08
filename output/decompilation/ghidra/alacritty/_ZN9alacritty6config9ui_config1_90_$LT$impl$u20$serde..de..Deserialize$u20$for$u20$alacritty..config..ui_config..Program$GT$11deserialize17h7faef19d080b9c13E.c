void _ZN9alacritty6config9ui_config1_90__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__config__ui_config__Program_GT_11deserialize17h7faef19d080b9c13E
               (long *param_1)

{
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long local_90;
  undefined local_88 [8];
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  _ZN5serde2de12Deserializer21__deserialize_content17hfc6145ffe17218a1E(&local_e0);
  if (CONCAT44(uStack_dc,local_e0) != 2) {
    param_1[9] = CONCAT44(uStack_94,uStack_98);
    param_1[10] = local_90;
    param_1[7] = CONCAT44(uStack_a4,uStack_a8);
    param_1[8] = CONCAT44(uStack_9c,local_a0);
    param_1[5] = CONCAT44(uStack_b4,uStack_b8);
    param_1[6] = CONCAT44(uStack_ac,local_b0);
    param_1[3] = CONCAT44(uStack_c4,uStack_c8);
    param_1[4] = CONCAT44(uStack_bc,uStack_c0);
    param_1[1] = CONCAT44(uStack_d4,uStack_d8);
    param_1[2] = CONCAT44(uStack_cc,uStack_d0);
    *param_1 = CONCAT44(uStack_dc,local_e0);
    return;
  }
  local_28 = uStack_d8;
  uStack_24 = uStack_d4;
  uStack_20 = uStack_d0;
  uStack_1c = uStack_cc;
  local_18 = uStack_c8;
  uStack_14 = uStack_c4;
  uStack_10 = uStack_c0;
  uStack_c = uStack_bc;
                    /* try { // try from 0059ee0e to 0059ee1f has its CatchHandler @ 0059efc5 */
  _ZN106__LT_serde____private__de__content__ContentRefDeserializer_LT_E_GT__u20_as_u20_serde__de__Deserializer_GT_15deserialize_str17h17013d9036b6d277E
            (&local_e0,&local_28);
  if (local_e0 == 2) {
    local_68 = CONCAT44(uStack_c4,uStack_c8);
    local_78 = CONCAT44(uStack_d4,uStack_d8);
    uStack_70 = CONCAT44(uStack_cc,uStack_d0);
    lStack_80 = -0x8000000000000000;
LAB_0059eedb:
    *(undefined4 *)(param_1 + 5) = uStack_60;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_5c;
    *(undefined4 *)(param_1 + 6) = uStack_58;
    *(undefined4 *)((long)param_1 + 0x34) = uStack_54;
    param_1[3] = uStack_70;
    param_1[4] = local_68;
    param_1[1] = lStack_80;
    param_1[2] = local_78;
  }
  else {
    lStack_80 = CONCAT44(uStack_d4,uStack_d8);
    local_38 = local_90;
    local_48 = local_a0;
    uStack_44 = uStack_9c;
    uStack_40 = uStack_98;
    uStack_3c = uStack_94;
    uStack_58 = local_b0;
    uStack_54 = uStack_ac;
    uStack_50 = uStack_a8;
    uStack_4c = uStack_a4;
    local_68 = CONCAT44(uStack_bc,uStack_c0);
    uStack_60 = uStack_b8;
    uStack_5c = uStack_b4;
    local_78 = CONCAT44(uStack_cc,uStack_d0);
    uStack_70 = CONCAT44(uStack_c4,uStack_c8);
    if (CONCAT44(uStack_dc,local_e0) == 2) goto LAB_0059eedb;
                    /* try { // try from 0059ef2b to 0059ef8a has its CatchHandler @ 0059efc5 */
    _ZN4core3ptr111drop_in_place_LT_core__result__Result_LT_alacritty__config__ui_config__Program_C_toml__de__error__Error_GT__GT_17h0ea6ca3974fdae48E
              (local_88);
    _ZN106__LT_serde____private__de__content__ContentRefDeserializer_LT_E_GT__u20_as_u20_serde__de__Deserializer_GT_15deserialize_any17hb117eb769db66dc7E
              (&local_e0,&local_28);
    if (local_e0 != 2) {
      _ZN4core3ptr111drop_in_place_LT_core__result__Result_LT_alacritty__config__ui_config__Program_C_toml__de__error__Error_GT__GT_17h0ea6ca3974fdae48E
                (&local_e0);
      _ZN59__LT_toml__de__error__Error_u20_as_u20_serde__de__Error_GT_6custom17h31496777fd5d78c5E
                (&local_e0,"data did not match any variant of untagged enum Program",0x37);
      param_1[10] = local_90;
      param_1[8] = CONCAT44(uStack_9c,local_a0);
      param_1[9] = CONCAT44(uStack_94,uStack_98);
      param_1[6] = CONCAT44(uStack_ac,local_b0);
      param_1[7] = CONCAT44(uStack_a4,uStack_a8);
      param_1[4] = CONCAT44(uStack_bc,uStack_c0);
      param_1[5] = CONCAT44(uStack_b4,uStack_b8);
      param_1[2] = CONCAT44(uStack_cc,uStack_d0);
      param_1[3] = CONCAT44(uStack_c4,uStack_c8);
      *(int *)param_1 = local_e0;
      *(undefined4 *)((long)param_1 + 4) = uStack_dc;
      *(undefined4 *)(param_1 + 1) = uStack_d8;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_d4;
      goto LAB_0059ef15;
    }
    param_1[5] = CONCAT44(uStack_b4,uStack_b8);
    param_1[6] = CONCAT44(uStack_ac,local_b0);
    param_1[3] = CONCAT44(uStack_c4,uStack_c8);
    param_1[4] = CONCAT44(uStack_bc,uStack_c0);
    *(undefined4 *)(param_1 + 1) = uStack_d8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_d4;
    *(undefined4 *)(param_1 + 2) = uStack_d0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_cc;
  }
  *param_1 = 2;
LAB_0059ef15:
  _ZN4core3ptr59drop_in_place_LT_serde____private__de__content__Content_GT_17h85327c26d338e1c8E
            (&local_28);
  return;
}