void _ZN17backdoorautomater9sanitizer15sanitize_script17h080ed7420ce68219E
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
  
                    /* try { // try from 0015d27d to 0015d2a9 has its CatchHandler @ 0015d32f */
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h6831ffd0596491b3E_00368878)
            (&local_40,"[^a-zA-Z0-9.\\-_]+",0x11);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6578ed1ee3bd5b33E
            (&local_60,&local_40,&PTR_s_src_sanitizer_rs_0032a638);
                    /* try { // try from 0015d2bc to 0015d2c0 has its CatchHandler @ 0015d320 */
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
  local_40 = &PTR_s_Error___Invalid_charactere_in_th_0032a650;
  local_38 = 1;
  local_30 = 8;
  local_28 = 0;
  uStack_20 = 0;
                    /* try { // try from 0015d30c to 0015d31d has its CatchHandler @ 0015d320 */
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (&local_40,&PTR_s_src_sanitizer_rs_0032a660);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}