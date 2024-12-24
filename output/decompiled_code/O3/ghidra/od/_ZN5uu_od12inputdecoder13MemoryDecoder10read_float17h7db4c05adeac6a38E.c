double __rustcall
uu_od::inputdecoder::MemoryDecoder::read_float(long *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  long local_50;
  long *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = param_3;
  if (param_3 == 2) {
    uVar2 = *(undefined4 *)(param_1 + 3);
    uVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (param_2,param_2 + 2,*(undefined8 *)(*param_1 + 8),
                       *(undefined8 *)(*param_1 + 0x10),&DAT_00241530);
    uVar2 = byteorder_io::ByteOrder::read_u16(uVar2,uVar3);
    cVar1 = std_detect::detect::cache::test();
    if (cVar1 == '\0') {
      dVar5 = (double)half::binary16::arch::f16_to_f64_fallback(uVar2);
      return dVar5;
    }
    fVar4 = (float)half::binary16::arch::x86::f16_to_f32_x86_f16c();
  }
  else {
    if (param_3 != 4) {
      if (param_3 == 8) {
        uVar2 = *(undefined4 *)(param_1 + 3);
        uVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                          (param_2,param_2 + 8,*(undefined8 *)(*param_1 + 8),
                           *(undefined8 *)(*param_1 + 0x10),&DAT_00241560);
        dVar5 = (double)byteorder_io::ByteOrder::read_f64(uVar2,uVar3);
        return dVar5;
      }
      local_48 = &local_50;
      local_40 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
      local_38 = &DAT_00241508;
      local_30 = 1;
      local_18 = 0;
      local_28 = &local_48;
      local_20 = 1;
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt(&local_38,&DAT_00241578);
    }
    uVar2 = *(undefined4 *)(param_1 + 3);
    uVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (param_2,param_2 + 4,*(undefined8 *)(*param_1 + 8),
                       *(undefined8 *)(*param_1 + 0x10),&DAT_00241548);
    fVar4 = (float)byteorder_io::ByteOrder::read_f32(uVar2,uVar3);
  }
  return (double)fVar4;
}