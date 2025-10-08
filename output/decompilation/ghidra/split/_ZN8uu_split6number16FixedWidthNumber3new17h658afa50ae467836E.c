void _ZN8uu_split6number16FixedWidthNumber3new17h658afa50ae467836E
               (undefined8 *param_1,byte param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined8 local_38;
  long lStack_30;
  long local_28;
  
  _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h2ddf162ee73cff42E
            (&local_38,param_3,&PTR_s_src_uu_split_src_number_rs_0020aba8);
  uVar3 = (ulong)param_2;
  lVar4 = local_28;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == -1) {
      if (param_4 != 0) {
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
                  (local_38,lStack_30);
        return;
      }
      break;
    }
    if (local_28 == 0) {
                    /* try { // try from 0016b72b to 0016b737 has its CatchHandler @ 0016b73a */
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00211f10)
                (lVar4,0,&PTR_s_src_uu_split_src_number_rs_0020abc0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = param_4;
    if (param_4 >> 0x20 == 0) {
      uVar2 = param_4 & 0xffffffff;
    }
    *(char *)(lStack_30 + lVar4) = (char)(uVar2 % uVar3);
    bVar5 = uVar3 <= param_4;
    param_4 = uVar2 / uVar3;
  } while (bVar5);
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = lStack_30;
  *(byte *)(param_1 + 3) = param_2;
  return;
}