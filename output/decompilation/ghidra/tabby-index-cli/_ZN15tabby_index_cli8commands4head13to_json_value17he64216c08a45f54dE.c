void _ZN15tabby_index_cli8commands4head13to_json_value17he64216c08a45f54dE
               (undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined auVar3 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [8];
  ulong local_38;
  undefined8 local_30;
  
                    /* try { // try from 00373bc6 to 00373bd2 has its CatchHandler @ 00373d19 */
  _ZN7tantivy6schema8document8Document7to_json17h24614ee2f8d92709E(local_40);
  local_a8 = local_38;
  local_a0 = local_30;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = local_38;
  local_80 = local_30;
                    /* try { // try from 00373bff to 00373c1a has its CatchHandler @ 00373d2c */
  _ZN10serde_json2de10from_trait17hcca85a944f2a6837E(&local_60,&local_a8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hca5b9d0fd37e6fa6E(&local_c8,&local_60);
  if ((char)local_c8 == '\x05') {
    local_a8 = (ulong)(CONCAT44(uStack_bc,uStack_c0) != 0);
    local_a0 = 0;
    local_80 = 0;
    local_88 = local_a8;
    while( true ) {
                    /* try { // try from 00373c80 to 00373ca7 has its CatchHandler @ 00373d4a */
      auVar3 = _ZN111__LT_alloc__collections__btree__map__IterMut_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h5f09a9268944cef8E
                         (&local_a8);
      pcVar2 = auVar3._8_8_;
      if (auVar3._0_8_ == 0) break;
      if ((*pcVar2 == '\x04') && (*(long *)(pcVar2 + 0x18) == 1)) {
        _ZN63__LT_serde_json__value__Value_u20_as_u20_core__clone__Clone_GT_5clone17h5845ced419e537b1E
                  (&local_60,*(undefined8 *)(pcVar2 + 0x10));
                    /* try { // try from 00373ca8 to 00373caf has its CatchHandler @ 00373d31 */
        _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17hacddd69444a21384E(pcVar2);
        *(undefined8 *)(pcVar2 + 0x10) = local_50;
        *(undefined8 *)(pcVar2 + 0x18) = uStack_48;
        *(undefined4 *)pcVar2 = local_60;
        *(undefined4 *)(pcVar2 + 4) = uStack_5c;
        *(undefined4 *)(pcVar2 + 8) = uStack_58;
        *(undefined4 *)(pcVar2 + 0xc) = uStack_54;
      }
    }
    param_1[4] = local_b8;
    param_1[5] = uStack_b4;
    param_1[6] = uStack_b0;
    param_1[7] = uStack_ac;
    *param_1 = local_c8;
    param_1[1] = uStack_c4;
    param_1[2] = uStack_c0;
    param_1[3] = uStack_bc;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7534eb9f84494b15E(local_40);
    _ZN4core3ptr76drop_in_place_LT_tantivy__schema__document__default_document__CompactDoc_GT_17h53cefbf12d11e499E
              (param_2);
    return;
  }
                    /* try { // try from 00373cfe to 00373d16 has its CatchHandler @ 00373d4c */
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006df690)
            ("Expected object",0xf,&PTR_s_crates_tabby_index_cli_src_comma_00684c20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}