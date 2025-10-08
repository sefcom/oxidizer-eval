long _ZN6uu_fmt9linebreak17write_with_spaces17h61239a97c7a24215E
               (undefined8 param_1,ulong param_2,long param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_3 == 1) {
    uVar1 = param_4[2];
    if (*param_4 - uVar1 < 2) {
      pcVar4 = " ";
      uVar3 = 1;
LAB_0016288b:
      lVar2 = (*(code *)
                PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hc701a8cfe4ea9e1eE_001f6f70
              )(param_4,pcVar4,uVar3);
      if (lVar2 != 0) {
        return lVar2;
      }
      goto LAB_00162820;
    }
    *(undefined *)(param_4[1] + uVar1) = 0x20;
    uVar1 = uVar1 + 1;
  }
  else {
    if (param_3 != 2) goto LAB_00162820;
    uVar1 = param_4[2];
    if (*param_4 - uVar1 < 3) {
      pcVar4 = "  ";
      uVar3 = 2;
      goto LAB_0016288b;
    }
    *(undefined2 *)(param_4[1] + uVar1) = 0x2020;
    uVar1 = uVar1 + 2;
  }
  param_4[2] = uVar1;
LAB_00162820:
  uVar1 = param_4[2];
  if (param_2 < *param_4 - uVar1) {
    (*(code *)PTR_memcpy_001f6e90)(param_4[1] + uVar1,param_1,param_2);
    param_4[2] = uVar1 + param_2;
    return 0;
  }
  uVar1 = *param_4;
  if (uVar1 - param_4[2] < param_2) {
    lVar2 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_9flush_buf17he9b69eaaa944967eE
                      (param_4,param_1);
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar1 = *param_4;
  }
  if (param_2 < uVar1) {
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_25write_to_buffer_unchecked17h88ad0b322e0483e6E
              (param_4);
    return 0;
  }
  *(undefined *)(param_4 + 3) = 1;
  lVar2 = (*(code *)
            PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_001f7018
          )(param_4 + 4,param_1);
  *(undefined *)(param_4 + 3) = 0;
  return lVar2;
}