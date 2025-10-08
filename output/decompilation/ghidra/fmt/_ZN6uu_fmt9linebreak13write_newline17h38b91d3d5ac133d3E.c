long _ZN6uu_fmt9linebreak13write_newline17h38b91d3d5ac133d3E
               (undefined8 param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_3[2];
  if (*param_3 - uVar3 < 2) {
    lVar2 = (*(code *)
              PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hc701a8cfe4ea9e1eE_001f6f70
            )(param_3,"\n",1);
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar3 = param_3[2];
    uVar1 = *param_3 - uVar3;
  }
  else {
    *(undefined *)(param_3[1] + uVar3) = 10;
    uVar3 = uVar3 + 1;
    param_3[2] = uVar3;
    uVar1 = *param_3 - uVar3;
  }
  if (param_2 < uVar1) {
    (*(code *)PTR_memcpy_001f6e90)(param_3[1] + uVar3,param_1,param_2);
    param_3[2] = uVar3 + param_2;
    return 0;
  }
  uVar3 = *param_3;
  if (uVar3 - param_3[2] < param_2) {
    lVar2 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_9flush_buf17he9b69eaaa944967eE
                      (param_3,param_1);
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar3 = *param_3;
  }
  if (param_2 < uVar3) {
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_25write_to_buffer_unchecked17h88ad0b322e0483e6E
              (param_3);
    return 0;
  }
  *(undefined *)(param_3 + 3) = 1;
  lVar2 = (*(code *)
            PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_001f7018
          )(param_3 + 4,param_1);
  *(undefined *)(param_3 + 3) = 0;
  return lVar2;
}