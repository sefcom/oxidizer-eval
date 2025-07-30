ulong _ZN17backdoorautomater9sanitizer15sanitize_choice17h12bb61fb68c957caE
                (ulong param_1,char param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  ulong uVar6;
  undefined **ppuVar7;
  byte bVar8;
  undefined ***pppuVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  bVar8 = (byte)param_1;
  if (bVar8 < 5) {
    if (bVar8 != 0) {
      if ((bVar8 != 4) || (1 < (byte)(param_2 - 3U))) {
        return param_1 & 0xffffffff;
      }
      goto LAB_0015d076;
    }
  }
  else {
    local_30 = &PTR_s_Error___Please_choose_an_option__0032a560;
    local_28 = 1;
    local_20 = 8;
    local_18 = 0;
    uStack_10 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
              (&local_30,&PTR_s_src_sanitizer_rs_0032a5a0);
  }
  local_30 = &PTR_s_Error___Please_choose_an_option__0032a560;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (&local_30,&PTR_s_src_sanitizer_rs_0032a570);
LAB_0015d076:
  local_30 = &PTR_s_Error___Please_choose_an_option__0032a560;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  ppuVar7 = &PTR_s_src_sanitizer_rs_0032a588;
  pppuVar9 = &local_30;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)();
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17h6831ffd0596491b3E_00368878)
            (&ppuStack_78,&DAT_00265696,8);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6578ed1ee3bd5b33E
            (&uStack_98,&ppuStack_78,&PTR_s_src_sanitizer_rs_0032a5b8);
  cVar5 = _ZN5regex5regex6string5Regex11is_match_at17h541fe506ce15d7f3E
                    (uStack_98,uStack_90,ppuVar7[1],ppuVar7[2]);
  if (cVar5 == '\0') {
    pppuVar9[2] = (undefined **)ppuVar7[2];
    uVar2 = *(undefined4 *)((long)ppuVar7 + 4);
    uVar3 = *(undefined4 *)(ppuVar7 + 1);
    uVar4 = *(undefined4 *)((long)ppuVar7 + 0xc);
    *(undefined4 *)pppuVar9 = *(undefined4 *)ppuVar7;
    *(undefined4 *)((long)pppuVar9 + 4) = uVar2;
    *(undefined4 *)(pppuVar9 + 1) = uVar3;
    *(undefined4 *)((long)pppuVar9 + 0xc) = uVar4;
    uVar6 = _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h5dc5ee83f4543ad0E
                      (&uStack_98);
    return uVar6;
  }
  ppuStack_78 = &PTR_s_Error__Invalid_time_to_schedule_a_0032a5d0;
  uStack_70 = 1;
  uStack_68 = 8;
  uStack_60 = 0;
  uStack_58 = 0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (&ppuStack_78,&PTR_s_src_sanitizer_rs_0032a5e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}