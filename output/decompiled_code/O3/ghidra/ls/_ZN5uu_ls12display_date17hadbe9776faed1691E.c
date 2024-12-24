void __rustcall uu_ls::display_date(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char cVar6;
  undefined *local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  uint local_74;
  uint local_70;
  
  get_time(&local_88);
  if (local_88 == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1,&DAT_001363e5,3);
    return;
  }
  local_98 = local_88;
  uStack_94 = uStack_84;
  uStack_90 = uStack_80;
  uStack_8c = uStack_7c;
  chrono::datetime::DateTime<Tz>::checked_add_signed(&local_78,&local_88);
  uVar3 = local_70;
  uVar2 = local_74;
  iVar1 = local_78;
  if (local_78 == 0) {
    uVar5 = core::option::expect_failed(&DAT_001363e8,0x21,&PTR_DAT_00312b88);
                    /* catch() { ... } // from try @ 0022be80 with catch @ 0022bec0 */
                    /* try { // try from 0022bec3 to 0022becc has its CatchHandler @ 0022bed5 */
    core::ptr::
    drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>
              (&local_78);
    _Unwind_Resume(uVar5);
    return;
  }
  chrono::offset::local::Local::now(&local_78);
  cVar6 = iVar1 != local_78;
  if (iVar1 < local_78) {
    cVar6 = -1;
  }
  if (cVar6 == '\0') {
    cVar6 = uVar2 != local_74;
    if (uVar2 < local_74) {
      cVar6 = -1;
    }
    if (cVar6 == '\0') {
      cVar6 = -1;
      if (local_70 <= uVar3) {
        cVar6 = uVar3 != local_70;
      }
    }
  }
  switch(*(ulong *)(param_3 + 0xb8) ^ 0x8000000000000000) {
  case 0:
    local_b8 = &DAT_0013646e;
    lStack_b0 = 0x17;
    break;
  case 1:
    local_b8 = &DAT_00136485;
    lStack_b0 = 0xe;
    break;
  case 2:
    puVar4 = &DAT_0013649c;
    local_b8 = &DAT_00136493;
    goto LAB_0022be31;
  case 3:
    puVar4 = &DAT_001364b0;
    local_b8 = &DAT_001364a7;
LAB_0022be31:
    if (cVar6 == '\x01') {
      local_b8 = puVar4;
    }
    lStack_b0 = (ulong)(cVar6 == '\x01') * 2 + 9;
    break;
  default:
    local_b8 = *(undefined **)(param_3 + 0xc0);
    lStack_b0 = *(long *)(param_3 + 200);
  }
  local_a8 = 8;
  local_a0 = 0;
  chrono::datetime::DateTime<Tz>::format_with_items(&local_78,&local_98,&local_b8);
                    /* try { // try from 0022be80 to 0022be8c has its CatchHandler @ 0022bec0 */
  _<T_as_alloc::string::ToString>::to_string(param_1,&local_78);
  core::ptr::
  drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>
            (&local_78);
  return;
}