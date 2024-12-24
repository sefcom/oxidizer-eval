undefined8 __rustcall
uu_od::byteorder_io::ByteOrder::read_f32(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  ulong uVar1;
  bool bVar2;
  undefined auVar3 [16];
  
  if ((param_1 == '\0') || (param_1 != '\x01')) {
    uVar1 = 0;
    auVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (0,4,param_2,param_3,&DAT_00241698);
    bVar2 = auVar3._8_8_ != 4;
    if (!bVar2) {
      uVar1 = (ulong)*auVar3._0_8_;
    }
    core::result::Result<T,E>::unwrap(uVar1 << 8 | (ulong)bVar2,&DAT_002416b0);
  }
  else {
    uVar1 = 0;
    auVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (0,4,param_2,param_3,&DAT_002416c8);
    bVar2 = auVar3._8_8_ != 4;
    if (!bVar2) {
      uVar1 = (ulong)*auVar3._0_8_;
    }
    core::result::Result<T,E>::unwrap(uVar1 << 8 | (ulong)bVar2,&DAT_002416e0);
  }
  return in_RAX;
}