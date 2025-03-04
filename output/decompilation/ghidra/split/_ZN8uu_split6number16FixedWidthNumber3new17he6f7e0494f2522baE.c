undefined8 *
_ZN8uu_split6number16FixedWidthNumber3new17he6f7e0494f2522baE
          (undefined8 *param_1,byte param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 local_38;
  long lStack_30;
  ulong local_28;
  
  _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h6057a164085cb6e9E
            (&local_38,param_3);
  if (param_2 == 0) {
    if (local_28 != 0) {
      uVar3 = _ZN4core9panicking11panic_const23panic_const_rem_by_zero17h9246b1d1945ea5ddE
                        (&PTR_DAT_00249468);
                    /* catch() { ... } // from try @ 001db785 with catch @ 001db7a1 */
                    /* try { // try from 001db7a4 to 001db7ab has its CatchHandler @ 001db7b4 */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_38);
      puVar4 = (undefined8 *)_Unwind_Resume(uVar3);
      return puVar4;
    }
LAB_001db747:
    if (param_4 != 0) {
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_38);
      return param_1;
    }
  }
  else {
    uVar5 = (ulong)param_2;
    uVar2 = local_28;
    do {
      if (uVar2 == 0) goto LAB_001db747;
      uVar2 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_18backward_unchecked17hafc0b4d583767e83E
                        ();
      if (local_28 <= uVar2) {
                    /* try { // try from 001db785 to 001db7a0 has its CatchHandler @ 001db7a1 */
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(uVar2,local_28,&PTR_DAT_00249480)
        ;
      }
      uVar1 = param_4;
      if (param_4 >> 0x20 == 0) {
        uVar1 = param_4 & 0xffffffff;
      }
      *(char *)(lStack_30 + uVar2) = (char)(uVar1 % uVar5);
      bVar6 = uVar5 <= param_4;
      param_4 = uVar1 / uVar5;
    } while (bVar6);
  }
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = lStack_30;
  *(byte *)(param_1 + 3) = param_2;
  return param_1;
}