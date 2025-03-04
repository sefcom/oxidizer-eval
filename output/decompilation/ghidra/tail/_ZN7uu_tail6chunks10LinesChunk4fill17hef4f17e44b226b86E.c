undefined8 *
_ZN7uu_tail6chunks10LinesChunk4fill17hef4f17e44b226b86E(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long local_30;
  long local_28;
  undefined8 uStack_20;
  
  _ZN7uu_tail6chunks10BytesChunk4fill17h4a717c5d739984d3E(&local_30);
  if (local_30 == 0) {
    if (local_28 == 0) {
      *(undefined8 *)(param_2 + 0x2008) = 0;
      param_1[1] = 0;
    }
    else {
      uVar1 = _ZN7uu_tail6chunks10LinesChunk11count_lines17hff5a62bbb9e14842E(param_2);
      *(undefined8 *)(param_2 + 0x2008) = uVar1;
      param_1[1] = 1;
      param_1[2] = uStack_20;
    }
    uVar1 = 0;
  }
  else {
    param_1[1] = local_28;
    param_1[2] = uStack_20;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return param_1;
}