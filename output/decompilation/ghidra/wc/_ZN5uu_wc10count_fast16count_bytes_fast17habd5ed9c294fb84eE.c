undefined  [16] _ZN5uu_wc10count_fast16count_bytes_fast17habd5ed9c294fb84eE(int *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined8 local_4030 [4];
  uint local_4010;
  ulong local_3ff8;
  long local_3ff0;
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030[0] = 0;
  iVar1 = *param_1;
  _ZN3nix3sys4stat5fstat17h5414de4d70a08ddbE(local_4030,iVar1);
  if ((int)local_4030[0] == 0) {
    uVar5 = 0;
    if (((0 < iVar1) && ((short)local_4010 < 0)) && (0 < (long)local_3ff8)) {
      uVar4 = (*(code *)PTR_sysconf_002351b8)(0x1e);
      if (uVar4 == 0) {
        _ZN4core9panicking11panic_const23panic_const_rem_by_zero17h9246b1d1945ea5ddE
                  (&PTR_DAT_00230f10);
LAB_001b8880:
        _ZN4core9panicking11panic_const23panic_const_rem_by_zero17h9246b1d1945ea5ddE
                  (&PTR_DAT_00230f28);
        pcVar2 = (code *)swi(3);
        auVar7 = (*pcVar2)();
        return auVar7;
      }
      if ((uVar4 | local_3ff8) >> 0x20 == 0) {
        uVar4 = (local_3ff8 & 0xffffffff) % (uVar4 & 0xffffffff);
      }
      else {
        uVar4 = local_3ff8 % uVar4;
      }
      uVar5 = local_3ff8;
      if (uVar4 != 0) goto LAB_001b8858;
      uVar5 = local_3ff0 + 1;
      if (uVar5 == 0) goto LAB_001b8880;
      if ((local_3ff8 | uVar5) >> 0x20 == 0) {
        uVar5 = (local_3ff8 & 0xffffffff) % (uVar5 & 0xffffffff);
      }
      else {
        uVar5 = (long)local_3ff8 % (long)uVar5;
      }
      auVar7 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                         (param_1,0,local_3ff8 - uVar5);
      uVar5 = 0;
      if (auVar7._0_8_ == 0) {
        uVar5 = auVar7._8_8_;
      }
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17ha0f27aa6f0fdbae0E
                (auVar7._0_8_,auVar7._8_8_);
    }
    if ((local_4010 & 0x1000) != 0) {
      auVar7 = _ZN5uu_wc10count_fast24count_bytes_using_splice17h128e743cacc3bf6eE(param_1);
      uVar5 = auVar7._8_8_;
      if (auVar7._0_8_ == 0) goto LAB_001b8858;
    }
  }
  else {
    uVar5 = 0;
  }
  (*(code *)PTR_memset_002355d8)(local_4030,0,0x4000);
  uVar4 = uVar5;
  do {
    while( true ) {
      uVar5 = uVar4;
      auVar7 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h24fce4ed669fe556E
                         (param_1,local_4030,0x4000);
      lVar6 = auVar7._8_8_;
      if (auVar7._0_8_ == 0) break;
      cVar3 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(lVar6);
      if (cVar3 != '#') goto LAB_001b885b;
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hd9e364499d096c21E
                (lVar6);
      uVar4 = uVar5;
    }
    uVar4 = uVar5 + lVar6;
  } while (lVar6 != 0);
LAB_001b8858:
  lVar6 = 0;
LAB_001b885b:
  auVar7._8_8_ = lVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}