void _ZN9alacritty6config6cursor1_97__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__config__cursor__ConfigCursorStyle_GT_11deserialize17h688fecb3851d60abE
               (long *param_1)

{
  int local_e0;
  undefined4 uStack_dc;
  undefined uStack_d8;
  undefined uStack_d7;
  undefined2 uStack_d6;
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
  undefined local_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 uStack_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long local_18;
  
  _ZN5serde2de12Deserializer21__deserialize_content17hfc6145ffe17218a1E(&local_e0);
  uStack_60 = CONCAT44(uStack_cc,uStack_d0);
  if (CONCAT44(uStack_dc,local_e0) != 2) {
    param_1[9] = CONCAT44(uStack_94,uStack_98);
    param_1[10] = local_90;
    param_1[7] = CONCAT44(uStack_a4,uStack_a8);
    param_1[8] = CONCAT44(uStack_9c,local_a0);
    param_1[5] = CONCAT44(uStack_b4,uStack_b8);
    param_1[6] = CONCAT44(uStack_ac,local_b0);
    param_1[3] = CONCAT44(uStack_c4,uStack_c8);
    param_1[4] = CONCAT44(uStack_bc,uStack_c0);
    param_1[1] = CONCAT44(uStack_d4,CONCAT22(uStack_d6,CONCAT11(uStack_d7,uStack_d8)));
    param_1[2] = uStack_60;
    *param_1 = CONCAT44(uStack_dc,local_e0);
    return;
  }
  uStack_84 = uStack_d4;
  uStack_80 = uStack_d0;
  uStack_7c = uStack_cc;
  local_78 = uStack_c8;
  uStack_74 = uStack_c4;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
                    /* try { // try from 0058a4d4 to 0058a5c6 has its CatchHandler @ 0058a673 */
  _ZN106__LT_serde____private__de__content__ContentRefDeserializer_LT_E_GT__u20_as_u20_serde__de__Deserializer_GT_15deserialize_str17hd54370478f20d73eE
            (&local_e0,local_88);
  if (local_e0 == 2) {
    uStack_60._0_2_ = CONCAT11(uStack_d8,3);
    local_68 = 2;
  }
  else {
    local_68 = CONCAT44(uStack_dc,local_e0);
    uStack_60 = CONCAT44(uStack_d4,CONCAT22(uStack_d6,CONCAT11(uStack_d7,uStack_d8)));
    local_18 = local_90;
    local_28 = local_a0;
    uStack_24 = uStack_9c;
    uStack_20 = uStack_98;
    uStack_1c = uStack_94;
    local_38 = local_b0;
    uStack_34 = uStack_ac;
    uStack_30 = uStack_a8;
    uStack_2c = uStack_a4;
    local_48 = uStack_c0;
    uStack_44 = uStack_bc;
    uStack_40 = uStack_b8;
    uStack_3c = uStack_b4;
    if (local_68 != 2) {
                    /* try { // try from 0058a5da to 0058a638 has its CatchHandler @ 0058a673 */
      _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_core__option__Option_LT__LP__RP__GT__C_toml__de__error__Error_GT__GT_17h7cf16e246e4aec5eE
                (&local_68);
      _ZN106__LT_serde____private__de__content__ContentRefDeserializer_LT_E_GT__u20_as_u20_serde__de__Deserializer_GT_15deserialize_any17h1c9d6a43b8218decE
                (&local_e0,local_88);
      if (local_e0 == 2) {
        *(ushort *)(param_1 + 1) = CONCAT11(uStack_d7,uStack_d8);
        *param_1 = 2;
        _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_core__option__Option_LT__LP__RP__GT__C_toml__de__error__Error_GT__GT_17h7cf16e246e4aec5eE
                  (&local_e0);
      }
      else {
        _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_core__option__Option_LT__LP__RP__GT__C_toml__de__error__Error_GT__GT_17h7cf16e246e4aec5eE
                  (&local_e0);
        _ZN59__LT_toml__de__error__Error_u20_as_u20_serde__de__Error_GT_6custom17h31496777fd5d78c5E
                  (&local_e0,"data did not match any variant of untagged enum ConfigCursorStyle",
                   0x41);
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
        *(uint *)(param_1 + 1) = CONCAT22(uStack_d6,CONCAT11(uStack_d7,uStack_d8));
        *(undefined4 *)((long)param_1 + 0xc) = uStack_d4;
      }
      goto LAB_0058a5c7;
    }
  }
  *(undefined2 *)(param_1 + 1) = (undefined2)uStack_60;
  *param_1 = 2;
  _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_core__option__Option_LT__LP__RP__GT__C_toml__de__error__Error_GT__GT_17h7cf16e246e4aec5eE
            (&local_68);
LAB_0058a5c7:
  _ZN4core3ptr59drop_in_place_LT_serde____private__de__content__Content_GT_17h85327c26d338e1c8E
            (local_88);
  return;
}