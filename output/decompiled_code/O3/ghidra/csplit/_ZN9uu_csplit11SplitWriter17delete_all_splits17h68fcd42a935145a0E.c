long __rustcall uu_csplit::SplitWriter::delete_all_splits(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long local_50;
  undefined local_48 [24];
  
  local_50 = 0;
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar3 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar5);
                    /* try { // try from 002bf473 to 002bf488 has its CatchHandler @ 002bf4c4 */
      split_name::SplitName::get(local_48,uVar2,uVar5);
      lVar4 = std::fs::remove_file(local_48);
      if (lVar4 != 0) {
                    /* try { // try from 002bf491 to 002bf49a has its CatchHandler @ 002bf4ba */
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_50);
        lVar6 = lVar4;
        local_50 = lVar4;
      }
      uVar5 = uVar3;
    } while (uVar3 < uVar1);
  }
  return lVar6;
}