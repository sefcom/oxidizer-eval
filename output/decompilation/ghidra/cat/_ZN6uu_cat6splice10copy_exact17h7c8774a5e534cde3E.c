ulong _ZN6uu_cat6splice10copy_exact17h7c8774a5e534cde3E
                (undefined4 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined auVar4 [16];
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
  (*(code *)PTR_memset_0021c7a0)(local_4030,0,0x4000);
  if (param_3 != 0) {
    do {
      _ZN3nix6unistd4read17hcf76a36f5eebd624E(&local_4060,param_1,local_4030,0x4000);
      uVar2 = local_4058;
      if ((int)local_4060 != 0) {
LAB_001b4b9f:
        return (ulong)local_4060 >> 0x20;
      }
      local_4068 = local_4058;
      if (local_4058 == 0) {
LAB_001b4bba:
        local_4060 = &PTR_s_unexpected_end_of_pipe_00218990;
        local_4058 = 1;
        local_4050 = 8;
        local_4048 = 0;
        uStack_4040 = 0;
        _ZN4core9panicking13assert_failed17hb6f5ab042e2fb42aE
                  (&local_4068,&local_4060,&PTR_s_src_uu_cat_src_splice_rs_002189a0);
        pcVar1 = (code *)swi(3);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      uVar3 = 0;
      do {
        auVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2183ab5a6b7a9c40E
                           (uVar3,uVar2,local_4030);
        _ZN3nix6unistd5write17h6382312308a73468E(&local_4060,param_2,auVar4._0_8_,auVar4._8_8_);
        if ((int)local_4060 != 0) goto LAB_001b4b9f;
        if (local_4058 == 0) {
          _ZN6uu_cat6splice10copy_exact19panic_cold_explicit17ha5b0297eb3513873E();
          goto LAB_001b4bba;
        }
        uVar3 = uVar3 + local_4058;
      } while (uVar3 < uVar2);
      param_3 = param_3 - uVar2;
    } while (param_3 != 0);
  }
  return 0x86;
}