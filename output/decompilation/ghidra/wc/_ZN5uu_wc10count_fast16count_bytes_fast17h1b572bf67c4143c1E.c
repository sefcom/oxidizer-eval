undefined  [16] _ZN5uu_wc10count_fast16count_bytes_fast17h1b572bf67c4143c1E(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  ulong local_4030 [4];
  byte local_400f;
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030[0] = 0;
  lVar4 = 0;
  (*(code *)PTR__ZN3nix3sys4stat5fstat17h932ea0f7705da4a5E_001ffc28)(local_4030,0);
  if ((local_4030[0] & 1) == 0) {
    if ((local_400f & 0x10) == 0) {
      lVar4 = 0;
    }
    else {
      auVar6 = _ZN5uu_wc10count_fast24count_bytes_using_splice17h131ffe0d704d0ba2E();
      lVar4 = auVar6._8_8_;
      if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_00163512;
    }
  }
  (*(code *)PTR_memset_001ffc38)(local_4030,0,0x4000);
  puVar1 = 
  PTR__ZN59__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__Read_GT_4read17ha94ed9861f25a8f0E_001ffc40
  ;
  lVar2 = lVar4;
  do {
    while( true ) {
      lVar4 = lVar2;
      auVar6 = (*(code *)puVar1)(param_1,local_4030,0x4000);
      lVar5 = auVar6._8_8_;
      if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
      cVar3 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar5);
      if (cVar3 != '#') goto LAB_00163515;
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h06d3f45961b15e39E
                (auVar6._0_8_,lVar5);
      lVar2 = lVar4;
    }
    lVar2 = lVar4 + lVar5;
  } while (lVar5 != 0);
LAB_00163512:
  lVar5 = 0;
LAB_00163515:
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}