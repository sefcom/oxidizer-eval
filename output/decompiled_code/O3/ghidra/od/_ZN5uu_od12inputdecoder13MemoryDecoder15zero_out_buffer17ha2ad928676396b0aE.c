void __rustcall
uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 < param_3) {
    lVar1 = *param_1;
    do {
      uVar2 = *(ulong *)(lVar1 + 0x10);
      if (uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(param_2,uVar2,&DAT_00241460);
      }
      uVar2 = _<usize_as_core::iter::range::Step>::forward_unchecked(param_2);
      *(undefined *)(*(long *)(lVar1 + 8) + param_2) = 0;
      param_2 = uVar2;
    } while (uVar2 < param_3);
  }
  return;
}