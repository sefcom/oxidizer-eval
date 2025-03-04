void _ZN8uu_split6number18DynamicWidthNumber6digits17hff29e0107769e312E
               (undefined8 *param_1,ulong param_2,byte param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar3 = (ulong)param_3;
  uVar1 = (uVar3 - 1) * uVar3;
  lVar4 = 2;
  if (uVar1 < param_2 || uVar1 - param_2 == 0) {
    do {
      param_2 = param_2 - uVar1;
      lVar4 = lVar4 + 1;
      uVar1 = uVar1 * uVar3;
    } while (uVar1 <= param_2);
  }
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
  if (param_2 != 0) {
    if (param_3 == 0) {
      uVar2 = _ZN4core9panicking11panic_const23panic_const_rem_by_zero17h9246b1d1945ea5ddE
                        (&PTR_DAT_002494b0);
                    /* catch() { ... } // from try @ 001db9dc with catch @ 001dba24 */
                    /* catch() { ... } // from try @ 001db9ca with catch @ 001dba26 */
                    /* try { // try from 001dba29 to 001dba30 has its CatchHandler @ 001dba39 */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(&local_48);
      _Unwind_Resume(uVar2);
      return;
    }
    do {
      uVar1 = param_2;
      if (param_2 >> 0x20 == 0) {
        uVar1 = param_2 & 0xffffffff;
      }
                    /* try { // try from 001db9ca to 001db9d3 has its CatchHandler @ 001dba26 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf1e1eb1ae4f6230eE(&local_48,uVar1 % uVar3);
      bVar5 = uVar3 <= param_2;
      param_2 = uVar1 / uVar3;
    } while (bVar5);
  }
                    /* try { // try from 001db9dc to 001dba23 has its CatchHandler @ 001dba24 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_6resize17h073d932e12575a02E(&local_48,lVar4,0);
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_7reverse17h611a04afb35bad30E(uStack_40,local_38);
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  return;
}