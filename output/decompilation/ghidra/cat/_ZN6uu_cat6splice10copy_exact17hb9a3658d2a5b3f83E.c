ulong _ZN6uu_cat6splice10copy_exact17hb9a3658d2a5b3f83E(undefined4 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_4068;
  undefined **local_4060;
  ulong local_4058;
  undefined8 local_4050;
  undefined8 local_4048;
  undefined8 uStack_4040;
  undefined8 local_4030 [512];
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030[0] = 0;
  (*(code *)PTR_memset_001f2510)(local_4030,0,0x4000);
  puVar2 = PTR__ZN3nix6unistd4read17h78a928634cf125b8E_001f2518;
  while ((*(code *)puVar2)(&local_4060,param_1,local_4030,0x4000), uVar4 = local_4058,
        ((ulong)local_4060 & 1) == 0) {
    local_4068 = local_4058;
    if (local_4058 == 0) {
LAB_0015d72d:
      local_4060 = &PTR_s_unexpected_end_of_pipe_001eaa18;
      local_4058 = 1;
      local_4050 = 8;
      local_4048 = 0;
      uStack_4040 = 0;
      (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_001f24e0)
                (1,&local_4068,"",&local_4060,&PTR_s_src_uu_cat_src_splice_rs_001eaa28);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    uVar5 = 0;
    do {
      uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hefdaf78919a7c5d0E
                        (uVar5,uVar4,local_4030,0x4000,&PTR_s_src_uu_cat_src_splice_rs_001eaa40);
      _ZN3nix6unistd5write17h281d4b2e67027cb0E(&local_4060,uVar3);
      if ((int)local_4060 == 1) goto LAB_0015d712;
      if (local_4058 == 0) {
        _ZN6uu_cat6splice10copy_exact19panic_cold_explicit17h2877317a069a73d3E();
        goto LAB_0015d72d;
      }
      uVar5 = uVar5 + local_4058;
    } while (uVar5 < uVar4);
    param_2 = param_2 - uVar4;
    if (param_2 == 0) {
      return 0x86;
    }
  }
LAB_0015d712:
  return (ulong)local_4060 >> 0x20;
}