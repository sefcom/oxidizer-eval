void _ZN9alacritty7migrate4yaml7migrate17h7955a864104fb60dE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined *local_288;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined *local_268;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined *local_248;
  undefined **local_238;
  undefined8 uStack_230;
  undefined *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined auStack_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  local_200 = param_7;
  bVar1 = *(byte *)(param_2 + 0x18);
  local_208 = param_6;
  _ZN9alacritty6config18deserialize_config17h5c79ebe9ac2f1598E(&local_f8,param_3,param_4,bVar1 ^ 1);
  if ((int)local_f8 != 7) {
    local_1a8 = local_a8;
    local_1b8 = local_b8;
    uStack_1b0 = uStack_b0;
    local_1c8 = local_c8;
    uStack_1c4 = uStack_c4;
    uStack_1c0 = uStack_c0;
    uStack_1bc = uStack_bc;
    uStack_1d0 = uStack_d0;
    uStack_1cc = uStack_cc;
    local_298 = &local_1f8;
    uStack_290 = 
    _ZN63__LT_alacritty__config__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h8f6deb2eaa2aacd3E;
    local_238 = &PTR_s_YAML_parsing_error___toml_00983280;
    uStack_230 = 1;
    local_218 = 0;
    uStack_220 = 1;
                    /* try { // try from 0055ea46 to 0055ea59 has its CatchHandler @ 0055eceb */
    local_228 = (undefined *)&local_298;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
              (&local_110,0,extraout_RDX,&local_238);
    param_1[3] = local_100;
    *(undefined4 *)(param_1 + 1) = local_110;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_10c;
    *(undefined4 *)(param_1 + 2) = uStack_108;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_104;
    *param_1 = 1;
    _ZN4core3ptr45drop_in_place_LT_alacritty__config__Error_GT_17hc0565752af3cd056E(&local_1f8);
    return;
  }
  if (*(char *)(param_2 + 0x19) == '\0') {
                    /* try { // try from 0055e903 to 0055e97f has its CatchHandler @ 0055ecfd */
    _ZN9alacritty7migrate4yaml15migrate_imports17he16b1e9186b09947E
              (&local_1f8,param_2,&local_238,param_3,param_4,param_5);
    param_1[3] = uStack_1e8;
    uVar4 = (int)local_1f8;
    uVar5 = local_1f8._4_4_;
    uVar6 = (undefined4)uStack_1f0;
    uVar7 = uStack_1f0._4_4_;
  }
  else {
    _ZN4toml3ser9to_string17hd0ad620e8ee3c864E(&local_1f8,&local_238);
    if ((int)local_1f8 != 1) {
      local_258 = (undefined4)uStack_1f0;
      uStack_254 = uStack_1f0._4_4_;
      uStack_250 = (undefined4)uStack_1e8;
      uStack_24c = uStack_1e8._4_4_;
      local_248 = puStack_1e0;
      local_298 = &local_208;
      uStack_290 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
      local_1f8 = &DAT_00983290;
      uStack_1f0 = (undefined *)0x2;
      local_1d8 = 0;
      puStack_1e0 = &DAT_00000001;
                    /* try { // try from 0055eaf2 to 0055eb08 has its CatchHandler @ 0055ecdc */
      uStack_1e8 = &local_298;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
                (&local_f8,0,extraout_RDX_00,&local_1f8);
      local_278 = (int)local_f8;
      uStack_274 = local_f8._4_4_;
      uStack_270 = uStack_f0;
      uStack_26c = uStack_ec;
      local_268 = puStack_e8;
                    /* try { // try from 0055eb23 to 0055eb34 has its CatchHandler @ 0055ecd2 */
      _ZN9alacritty7migrate12migrate_toml17h20014181f4101fc3E(&local_1f8,&local_258);
      puVar2 = local_1f8;
      local_298 = (undefined8 *)uStack_1f0;
      uStack_290 = (code *)uStack_1e8;
      local_288 = puStack_1e0;
      if (local_1f8 == (undefined *)0xc) {
        param_1[3] = puStack_1e0;
        *(int *)(param_1 + 1) = (int)uStack_1f0;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_1f0._4_4_;
        *(int *)(param_1 + 2) = (int)uStack_1e8;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_1e8._4_4_;
        *param_1 = 1;
        puVar3 = &local_278;
      }
      else {
        (*(code *)PTR_memcpy_009de0b0)(auStack_d8,&local_1d8,0xa8);
        uStack_f0 = (undefined4)local_298;
        uStack_ec = local_298._4_4_;
        puStack_e8 = uStack_290;
        puStack_e0 = local_288;
        local_f8 = puVar2;
                    /* try { // try from 0055ebde to 0055ebf2 has its CatchHandler @ 0055ecb1 */
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hfd01effef2c7df3fE
                  (&local_128,&local_f8);
        local_248 = local_118;
        local_258 = local_128;
        uStack_254 = uStack_124;
        uStack_250 = uStack_120;
        uStack_24c = uStack_11c;
                    /* try { // try from 0055ec0d to 0055ec3e has its CatchHandler @ 0055ecc3 */
        _ZN4core3ptr53drop_in_place_LT_toml_edit__document__DocumentMut_GT_17h9bb944d092de2eb6E
                  (&local_f8);
        _ZN9alacritty7migrate13write_results17h27f18712553304e3E
                  (&local_1f8,bVar1,*(undefined *)(param_2 + 0x1b),&local_278,
                   CONCAT44(uStack_24c,uStack_250),local_248);
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1f0;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_1f0._4_4_;
        *(undefined4 *)(param_1 + 3) = (undefined4)uStack_1e8;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_1e8._4_4_;
        param_1[1] = local_1f8;
        *param_1 = 1;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_278);
        puVar3 = &local_258;
      }
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(puVar3);
      goto LAB_0055ec95;
    }
    puStack_e8 = puStack_1e0;
    local_f8 = uStack_1f0;
    uStack_f0 = (undefined4)uStack_1e8;
    uStack_ec = uStack_1e8._4_4_;
    _ZN9alacritty7migrate4yaml7migrate28__u7b__u7b_closure_u7d__u7d_17hc6ee86b888e3d3cbE
              (&local_298,&local_f8);
    local_278 = (undefined4)local_298;
    uStack_274 = local_298._4_4_;
    uStack_270 = (undefined4)uStack_290;
    uStack_26c = uStack_290._4_4_;
    local_268 = local_288;
    param_1[3] = local_288;
    uVar4 = (undefined4)local_298;
    uVar5 = local_298._4_4_;
    uVar6 = (undefined4)uStack_290;
    uVar7 = uStack_290._4_4_;
  }
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((long)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)((long)param_1 + 0x14) = uVar7;
  *param_1 = 1;
LAB_0055ec95:
  _ZN4core3ptr39drop_in_place_LT_toml__value__Value_GT_17h7761fefc14a7cec1E(&local_238);
  return;
}