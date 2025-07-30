void _ZN17backdoorautomater9sanitizer13sanitize_port17h389e8c38eed4b27bE
               (undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  undefined **ppuVar9;
  undefined auVar10 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
                    /* try { // try from 0015ce54 to 0015ce7f has its CatchHandler @ 0015cfb7 */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h6831ffd0596491b3E_00368878)
            (&local_98,"[^0-9]+",7);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6578ed1ee3bd5b33E
            (&local_68,&local_98,&PTR_s_src_sanitizer_rs_0032a4b8);
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
                    /* try { // try from 0015ce92 to 0015cef7 has its CatchHandler @ 0015cfbc */
  cVar6 = _ZN5regex5regex6string5Regex11is_match_at17h541fe506ce15d7f3E
                    (local_68,local_60,uVar1,uVar2);
  if (cVar6 == '\0') {
    auVar10 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17heb9c2373ab7cadcfE(uVar1,uVar2);
    uVar8 = (*(code *)
              PTR__ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_u16_GT_8from_str17heff271509baf40e5E_00367ef8
            )(auVar10._0_8_,auVar10._8_8_);
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
              (&local_98,"Error ! Given port is invalid ! \n",0x21);
    local_38 = local_88;
    local_48 = (undefined4)local_98;
    uStack_44 = local_98._4_4_;
    uStack_40 = (undefined4)uStack_90;
    uStack_3c = uStack_90._4_4_;
    _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17h6b8d6456597bb7a1E
              (&local_98,&local_48,uVar1,uVar2);
                    /* try { // try from 0015cf02 to 0015cf08 has its CatchHandler @ 0015cfaa */
    sVar7 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hf7fc92646f7b125bE
                      (uVar8,uStack_90,local_88);
                    /* try { // try from 0015cf09 to 0015cf15 has its CatchHandler @ 0015cfbc */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_98);
    if (sVar7 == 0) {
      local_98 = &PTR_s_Error___Given_port_cannot_be_0___0032a4e8;
      ppuVar9 = &PTR_s_src_sanitizer_rs_0032a4f8;
    }
    else {
      if (sVar7 != -1) {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
        uVar8 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        *param_1 = *param_2;
        param_1[1] = uVar8;
        param_1[2] = uVar4;
        param_1[3] = uVar5;
        _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h5dc5ee83f4543ad0E
                  (&local_68);
        return;
      }
      local_98 = &PTR_s_Error___Given_port_is_not_in_the_0032a510;
      ppuVar9 = &PTR_s_src_sanitizer_rs_0032a520;
    }
  }
  else {
    local_98 = &PTR_s_Invalid_character_in_port_0032a538;
    ppuVar9 = &PTR_s_src_sanitizer_rs_0032a548;
  }
  uStack_90 = 1;
  local_88 = 8;
  local_80 = 0;
  uStack_78 = 0;
                    /* try { // try from 0015cf9f to 0015cfa7 has its CatchHandler @ 0015cfbc */
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)(&local_98,ppuVar9);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}