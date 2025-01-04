void __rustcall uu_ls::display_date(undefined8 param_1,undefined8 param_2,long param_3)

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
  
  get_time(&local_78);
  if (local_78 == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1,&DAT_001362e5,3);
    return;
  }
  local_88 = local_78;
  uStack_84 = uStack_74;
  uStack_80 = uStack_70;
  uStack_7c = uStack_6c;
  chrono::datetime::DateTime<Tz>::checked_add_signed(local_68,&local_78);
  if (local_68[0] == 0) {
    uVar3 = core::option::expect_failed(&DAT_001362e8,0x21,&PTR_DAT_00312988);
                    /* catch() { ... } // from try @ 0022bedd with catch @ 0022bf1a */
                    /* try { // try from 0022bf1d to 0022bf26 has its CatchHandler @ 0022bf2f */
    core::ptr::
    drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>
              (local_68);
    _Unwind_Resume(uVar3);
    return;
  }
  chrono::offset::local::Local::now(local_68);
  cVar1 = _<chrono::naive::datetime::NaiveDateTime_as_core::cmp::PartialOrd>::partial_cmp
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
  chrono::datetime::DateTime<Tz>::format_with_items(local_68,&local_88,&local_a8);
                    /* try { // try from 0022bedd to 0022bee9 has its CatchHandler @ 0022bf1a */
  _<T_as_alloc::string::ToString>::to_string(param_1,local_68);
  core::ptr::
  drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>
            (local_68);
  return;
}