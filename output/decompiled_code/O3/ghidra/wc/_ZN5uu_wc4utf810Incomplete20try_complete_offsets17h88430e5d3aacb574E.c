undefined  [16] __rustcall
uu_wc::utf8::Incomplete::try_complete_offsets(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  byte extraout_DL;
  undefined8 extraout_RDX;
  undefined7 uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  long local_48;
  ulong local_40;
  char local_38;
  byte local_37;
  
  bVar1 = *(byte *)(param_1 + 4);
  uVar6 = (ulong)bVar1;
  if (uVar6 < 5) {
    lVar3 = core::cmp::min_by(4 - uVar6,param_3);
    auVar7 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index_mut
                       (lVar3,param_1 + uVar6,4 - uVar6,&PTR_DAT_00232598);
    auVar8 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (lVar3,param_2,param_3,&PTR_DAT_002325b0);
    core::slice::_<impl[T]>::copy_from_slice
              (auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,&PTR_DAT_002325c8);
    uVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (lVar3 + uVar6,param_1,4,&PTR_DAT_002325e0);
    core::str::converts::from_utf8(&local_48,uVar4);
    if (local_48 == 0) {
      uVar4 = 0;
      local_37 = extraout_DL;
      goto LAB_001c342f;
    }
    if (local_40 == 0) {
      uVar5 = (undefined7)((ulong)extraout_RDX >> 8);
      if (local_38 == '\0') {
        uVar4 = CONCAT71(uVar5,2);
        local_37 = extraout_DL;
LAB_001c342f:
        *(byte *)(param_1 + 4) = local_37;
        auVar7._8_8_ = uVar4;
        auVar7._0_8_ = lVar3;
        return auVar7;
      }
      if (bVar1 <= local_37) {
        lVar3 = local_37 - uVar6;
        uVar4 = CONCAT71(uVar5,1);
        goto LAB_001c342f;
      }
      goto LAB_001c3467;
    }
    lVar3 = local_40 - uVar6;
    if (uVar6 <= local_40) {
      uVar4 = 0;
      local_37 = (byte)local_40;
      goto LAB_001c342f;
    }
  }
  else {
    core::slice::index::slice_start_index_len_fail(uVar6,4,&PTR_DAT_00232628);
  }
  core::option::unwrap_failed(&PTR_DAT_00232610);
LAB_001c3467:
  core::option::unwrap_failed(&PTR_DAT_002325f8);
  pcVar2 = (code *)swi(3);
  auVar7 = (*pcVar2)();
  return auVar7;
}