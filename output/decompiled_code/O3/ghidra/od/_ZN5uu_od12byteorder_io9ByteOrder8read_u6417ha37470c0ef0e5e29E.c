ulong __rustcall
uu_od::byteorder_io::ByteOrder::read_u64(char param_1,undefined8 param_2,undefined8 param_3)

{
  ulong unaff_RBX;
  bool bVar1;
  undefined auVar2 [16];
  
  if ((param_1 == '\0') || (param_1 != '\x01')) {
    auVar2 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (0,8,param_2,param_3,&DAT_002416f8);
    bVar1 = auVar2._8_8_ != 8;
    if (!bVar1) {
      unaff_RBX = *auVar2._0_8_;
    }
    core::result::Result<T,E>::unwrap(bVar1,&DAT_00241710);
  }
  else {
    auVar2 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (0,8,param_2,param_3,&DAT_00241728);
    bVar1 = auVar2._8_8_ != 8;
    if (!bVar1) {
      unaff_RBX = *auVar2._0_8_;
    }
    core::result::Result<T,E>::unwrap(bVar1,&DAT_00241740);
    unaff_RBX = unaff_RBX >> 0x38 | (unaff_RBX & 0xff000000000000) >> 0x28 |
                (unaff_RBX & 0xff0000000000) >> 0x18 | (unaff_RBX & 0xff00000000) >> 8 |
                (unaff_RBX & 0xff000000) << 8 | (unaff_RBX & 0xff0000) << 0x18 |
                (unaff_RBX & 0xff00) << 0x28 | unaff_RBX << 0x38;
  }
  return unaff_RBX;
}