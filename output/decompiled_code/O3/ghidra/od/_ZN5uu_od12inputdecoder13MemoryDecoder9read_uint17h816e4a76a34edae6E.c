ulong __rustcall
uu_od::inputdecoder::MemoryDecoder::read_uint(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
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
    uVar5 = *(ulong *)(*param_1 + 0x10);
    if (uVar5 <= param_2) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(param_2,uVar5,&DAT_002414a8);
    }
    uVar5 = (ulong)*(byte *)(*(long *)(*param_1 + 8) + param_2);
    break;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 3);
    uVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (param_2,param_2 + 2,*(undefined8 *)(*param_1 + 8),
                       *(undefined8 *)(*param_1 + 0x10),&DAT_002414c0);
    uVar2 = byteorder_io::ByteOrder::read_u16(uVar1,uVar4);
    uVar5 = (ulong)uVar2;
    break;
  default:
    local_48 = &local_50;
    local_40 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_38 = &DAT_00241508;
    local_30 = 1;
    local_18 = 0;
    local_28 = &local_48;
    local_20 = 1;
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&local_38,&DAT_00241518);
  case 4:
    uVar1 = *(undefined4 *)(param_1 + 3);
    uVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (param_2,param_2 + 4,*(undefined8 *)(*param_1 + 8),
                       *(undefined8 *)(*param_1 + 0x10),&DAT_002414d8);
    uVar3 = byteorder_io::ByteOrder::read_u32(uVar1,uVar4);
    uVar5 = (ulong)uVar3;
    break;
  case 8:
    uVar1 = *(undefined4 *)(param_1 + 3);
    uVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (param_2,param_2 + 8,*(undefined8 *)(*param_1 + 8),
                       *(undefined8 *)(*param_1 + 0x10),&DAT_002414f0);
    uVar5 = byteorder_io::ByteOrder::read_u64(uVar1,uVar4);
    return uVar5;
  }
  return uVar5;
}