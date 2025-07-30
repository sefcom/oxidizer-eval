void _ZN17backdoorautomater9sanitizer16sanitize_service17h7d78d971da576c98E
               (undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
                    /* try { // try from 0015cd6d to 0015cd99 has its CatchHandler @ 0015ce1f */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h6831ffd0596491b3E_00368878)
            (&local_40,"[^a-zA-Z0-9.]+",0xe);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6578ed1ee3bd5b33E
            (&local_60,&local_40,&PTR_s_src_sanitizer_rs_0032a478);
                    /* try { // try from 0015cdac to 0015cdb0 has its CatchHandler @ 0015ce10 */
  cVar5 = _ZN5regex5regex6string5Regex11is_match_at17h541fe506ce15d7f3E
                    (local_60,local_58,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  if (cVar5 == '\0') {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h5dc5ee83f4543ad0E(&local_60);
    return;
  }
  local_40 = &PTR_s_Invalid_character_in_service_nam_0032a490;
  local_38 = 1;
  local_30 = 8;
  local_28 = 0;
  uStack_20 = 0;
                    /* try { // try from 0015cdfc to 0015ce0d has its CatchHandler @ 0015ce10 */
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (&local_40,&PTR_s_src_sanitizer_rs_0032a4a0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}