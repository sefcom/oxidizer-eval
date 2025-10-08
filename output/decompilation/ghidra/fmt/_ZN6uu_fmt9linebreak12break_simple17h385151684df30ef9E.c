long _ZN6uu_fmt9linebreak12break_simple17h385151684df30ef9E
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  char in_stack_fffffffffffffff0;
  
  local_28 = param_1;
  local_20 = param_2;
  _ZN4core4iter6traits8iterator8Iterator8try_fold17hbff019c93347460dE
            (&local_18,&local_28,*(undefined8 *)(param_3 + 0x20),param_3);
  if (in_stack_fffffffffffffff0 == '\x02') {
    return local_18;
  }
  puVar1 = *(ulong **)(param_3 + 0x18);
  uVar3 = puVar1[2];
  if (1 < *puVar1 - uVar3) {
    *(undefined *)(puVar1[1] + uVar3) = 10;
    puVar1[2] = uVar3 + 1;
    return 0;
  }
  uVar3 = *puVar1;
  if (uVar3 == puVar1[2]) {
    local_20 = 0x15ca05;
    lVar2 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_9flush_buf17he9b69eaaa944967eE
                      (puVar1,"\n");
    if (lVar2 != 0) {
      return lVar2;
    }
    uVar3 = *puVar1;
  }
  if (uVar3 < 2) {
    *(undefined *)(puVar1 + 3) = 1;
    local_20 = 0x15ca3c;
    lVar2 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_001f7018
            )(puVar1 + 4,"\n");
    *(undefined *)(puVar1 + 3) = 0;
    return lVar2;
  }
  local_20 = 0x15ca26;
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_25write_to_buffer_unchecked17h88ad0b322e0483e6E
            (puVar1);
  return 0;
}