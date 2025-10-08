undefined8
_ZN5uu_od12inputdecoder13MemoryDecoder15zero_out_buffer17hff85fdbe658f0d31E
          (long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  
  if (param_2 < param_3) {
    lVar1 = *param_1;
    do {
      uVar2 = *(ulong *)(lVar1 + 0x10);
      if (uVar2 <= param_2) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0020a9f0)
                  (param_2,uVar2,&PTR_s_src_uu_od_src_inputdecoder_rs_00202298);
        pcVar3 = (code *)swi(3);
        uVar4 = (*pcVar3)();
        return uVar4;
      }
      *(undefined *)(*(long *)(lVar1 + 8) + param_2) = 0;
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return in_RAX;
}