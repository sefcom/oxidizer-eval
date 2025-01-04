undefined8 __rustcall uu_join::Line::get_field(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(ulong *)(param_1 + 0x10)) {
    uVar1 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (*(undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x10),
                       *(undefined8 *)(*(long *)(param_1 + 8) + 8 + param_2 * 0x10),
                       *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    return uVar1;
  }
  return 0;
}