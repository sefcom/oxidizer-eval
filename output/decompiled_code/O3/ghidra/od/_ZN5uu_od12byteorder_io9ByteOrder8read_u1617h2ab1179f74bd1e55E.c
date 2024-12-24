ushort __rustcall
uu_od::byteorder_io::ByteOrder::read_u16(char param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  undefined auVar4 [16];
  
  if ((param_1 != '\0') && (param_1 == '\x01')) {
    uVar2 = 0;
    auVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (0,2,param_2,param_3,&DAT_00241668);
    bVar3 = auVar4._8_8_ != 2;
    if (!bVar3) {
      uVar2 = (uint)*auVar4._0_8_;
    }
    uVar1 = core::result::Result<T,E>::unwrap(uVar2 << 8 | (uint)bVar3,&DAT_00241680);
    return uVar1 << 8 | uVar1 >> 8;
  }
  uVar2 = 0;
  auVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                     (0,2,param_2,param_3,&DAT_00241638);
  bVar3 = auVar4._8_8_ != 2;
  if (!bVar3) {
    uVar2 = (uint)*auVar4._0_8_;
  }
  uVar1 = core::result::Result<T,E>::unwrap(uVar2 << 8 | (uint)bVar3,&DAT_00241650);
  return uVar1;
}