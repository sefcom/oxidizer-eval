ulong __rustcall
uu_od::inputdecoder::MemoryDecoder::read_uint(long *param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined8 local_50;
  undefined8 *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = param_3;
  switch(param_3) {
  case 1:
    uVar4 = *(ulong *)(*param_1 + 0x10);
    if (uVar4 <= param_2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(param_2,uVar4,&DAT_00243560);
    }
    uVar4 = (ulong)*(byte *)(*(long *)(*param_1 + 8) + param_2);
    break;
  case 2:
    cVar1 = *(char *)(param_1 + 3);
    auVar5 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (param_2,param_2 + 2,*(undefined8 *)(*param_1 + 8),
                        *(undefined8 *)(*param_1 + 0x10),&DAT_00243578);
    if ((cVar1 == '\0') || (cVar1 != '\x01')) {
      uVar2 = _<byteorder::LittleEndian_as_byteorder::ByteOrder>::read_u16
                        (auVar5._0_8_,auVar5._8_8_);
    }
    else {
      uVar2 = _<byteorder::BigEndian_as_byteorder::ByteOrder>::read_u16(auVar5._0_8_,auVar5._8_8_);
    }
    uVar4 = (ulong)uVar2;
    break;
  default:
    local_48 = &local_50;
    local_40 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_38 = &DAT_00243550;
    local_30 = 1;
    local_18 = 0;
    local_28 = &local_48;
    local_20 = 1;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&local_38,&DAT_002435c0);
  case 4:
    cVar1 = *(char *)(param_1 + 3);
    auVar5 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (param_2,param_2 + 4,*(undefined8 *)(*param_1 + 8),
                        *(undefined8 *)(*param_1 + 0x10),&DAT_00243590);
    if ((cVar1 == '\0') || (cVar1 != '\x01')) {
      uVar3 = _<byteorder::LittleEndian_as_byteorder::ByteOrder>::read_u32
                        (auVar5._0_8_,auVar5._8_8_);
      uVar4 = (ulong)uVar3;
    }
    else {
      uVar3 = _<byteorder::BigEndian_as_byteorder::ByteOrder>::read_u32(auVar5._0_8_,auVar5._8_8_);
      uVar4 = (ulong)uVar3;
    }
    break;
  case 8:
    cVar1 = *(char *)(param_1 + 3);
    auVar5 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (param_2,param_2 + 8,*(undefined8 *)(*param_1 + 8),
                        *(undefined8 *)(*param_1 + 0x10),&DAT_002435a8);
    if ((cVar1 != '\0') && (cVar1 == '\x01')) {
      uVar4 = _<byteorder::BigEndian_as_byteorder::ByteOrder>::read_u64(auVar5._0_8_,auVar5._8_8_);
      return uVar4;
    }
    uVar4 = _<byteorder::LittleEndian_as_byteorder::ByteOrder>::read_u64(auVar5._0_8_,auVar5._8_8_);
    return uVar4;
  }
  return uVar4;
}