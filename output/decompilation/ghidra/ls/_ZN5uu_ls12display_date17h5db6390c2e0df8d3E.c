void _ZN5uu_ls12display_date17h5db6390c2e0df8d3E(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68 [20];
  
  _ZN5uu_ls8get_time17h8b131fbbcfeb99ccE(&local_78);
  if (local_78 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h09d6369a280ff05aE
              (param_1,&DAT_001362e5,3);
    return;
  }
  local_88 = local_78;
  uStack_84 = uStack_74;
  uStack_80 = uStack_70;
  uStack_7c = uStack_6c;
  _ZN6chrono8datetime18DateTime_LT_Tz_GT_18checked_add_signed17h05dd0e1cc9a47e1aE
            (local_68,&local_78);
  if (local_68[0] == 0) {
    uVar3 = _ZN4core6option13expect_failed17h9e03a1f6ff88dbcfE(&DAT_001362e8,0x21,&PTR_DAT_00312988)
    ;
                    /* catch() { ... } // from try @ 0022bedd with catch @ 0022bf1a */
                    /* try { // try from 0022bf1d to 0022bf26 has its CatchHandler @ 0022bf2f */
    _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17h2d8af8695fb24873E
              (local_68);
    _Unwind_Resume(uVar3);
    return;
  }
  _ZN6chrono6offset5local5Local3now17ha82adb6e05d16f38E(local_68);
  cVar1 = _ZN80__LT_chrono__naive__datetime__NaiveDateTime_u20_as_u20_core__cmp__PartialOrd_GT_11partial_cmp17hd709d884e1631950E
                    (&local_a8,local_68);
  switch(*(ulong *)(param_3 + 0xb8) ^ 0x8000000000000000) {
  case 0:
    local_a8 = &DAT_00136309;
    lStack_a0 = 0x17;
    break;
  case 1:
    local_a8 = &DAT_00136320;
    lStack_a0 = 0xe;
    break;
  case 2:
    puVar2 = &DAT_00136393;
    local_a8 = &DAT_001363a9;
    goto LAB_0022be8e;
  case 3:
    puVar2 = &DAT_0013639e;
    local_a8 = &DAT_001363b2;
LAB_0022be8e:
    if (cVar1 == '\x01') {
      local_a8 = puVar2;
    }
    lStack_a0 = (ulong)(cVar1 == '\x01') * 2 + 9;
    break;
  default:
    local_a8 = *(undefined **)(param_3 + 0xc0);
    lStack_a0 = *(long *)(param_3 + 200);
  }
  local_98 = 8;
  local_90 = 0;
  _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17h13d00874c810e2f8E
            (local_68,&local_88,&local_a8);
                    /* try { // try from 0022bedd to 0022bee9 has its CatchHandler @ 0022bf1a */
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h4f934844aadf293cE(param_1,local_68)
  ;
  _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17h2d8af8695fb24873E
            (local_68);
  return;
}