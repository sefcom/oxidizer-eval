void _ZN5uu_od12inputdecoder13MemoryDecoder15zero_out_buffer17h21e27e94246f42e6E
               (long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 < param_3) {
    lVar1 = *param_1;
    do {
      uVar2 = *(ulong *)(lVar1 + 0x10);
      if (uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(param_2,uVar2,&DAT_00243508);
      }
      uVar2 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                        (param_2);
      *(undefined *)(*(long *)(lVar1 + 8) + param_2) = 0;
      param_2 = uVar2;
    } while (uVar2 < param_3);
  }
  return;
}