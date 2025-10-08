void _ZN5uu_ls10TimeStyler6format17hbbf46b74a2bc22e6E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int local_58;
  undefined8 local_54;
  undefined4 local_4c;
  
  local_58 = *(int *)(param_2 + 0x30);
  if (local_58 != 0) {
    local_54 = *(undefined8 *)(param_2 + 0x34);
    local_4c = *(undefined4 *)(param_2 + 0x3c);
    cVar1 = _ZN80__LT_chrono__naive__datetime__NaiveDateTime_u20_as_u20_core__cmp__PartialOrd_GT_11partial_cmp17had3cc123e5b71e62E
                      (param_3,&local_58);
    lVar2 = 0x20;
    if (cVar1 < '\x01') {
      lVar2 = 8;
    }
    lVar4 = 0x28;
    if (cVar1 < '\x01') {
      lVar4 = 0x10;
    }
    _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17hf434d3eacd276ff5E
              (&local_58,param_3,*(long *)(param_2 + lVar2),
               *(long *)(param_2 + lVar2) + *(long *)(param_2 + lVar4) * 0x18);
                    /* try { // try from 00290f09 to 00290f13 has its CatchHandler @ 00290f33 */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h6c5b53b2ff865619E
              (param_1,&local_58);
    _ZN4core3ptr121drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_core__slice__iter__Iter_LT_chrono__format__Item_GT__GT__GT_17h44deda9718cd4b84E
              (&local_58);
    return;
  }
  uVar3 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0048fd98)
                    (&PTR_s_src_uu_ls_src_ls_rs_00386758);
                    /* catch() { ... } // from try @ 00290f09 with catch @ 00290f33 */
  _ZN4core3ptr121drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_core__slice__iter__Iter_LT_chrono__format__Item_GT__GT__GT_17h44deda9718cd4b84E
            (&local_58);
  _Unwind_Resume(uVar3);
  return;
}