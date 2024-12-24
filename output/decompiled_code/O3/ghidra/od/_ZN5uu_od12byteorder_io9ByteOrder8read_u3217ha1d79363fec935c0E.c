ulong __rustcall
uu_od::byteorder_io::ByteOrder::read_u32(char param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  undefined auVar4 [16];
  
  if ((param_1 != '\0') && (param_1 == '\x01')) {
    uVar2 = 0;
    auVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (0,4,param_2,param_3,&DAT_002416c8);
    bVar3 = auVar4._8_8_ != 4;
    if (!bVar3) {
      uVar2 = (ulong)*auVar4._0_8_;
    }
    uVar1 = core::result::Result<T,E>::unwrap(uVar2 << 8 | (ulong)bVar3,&DAT_002416e0);
    return (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  }
  uVar2 = 0;
  auVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                     (0,4,param_2,param_3,&DAT_00241698);
  bVar3 = auVar4._8_8_ != 4;
  if (!bVar3) {
    uVar2 = (ulong)*auVar4._0_8_;
  }
  uVar2 = core::result::Result<T,E>::unwrap(uVar2 << 8 | (ulong)bVar3,&DAT_002416b0);
  return uVar2;
}