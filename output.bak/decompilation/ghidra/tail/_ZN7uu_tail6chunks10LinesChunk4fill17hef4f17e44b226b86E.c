undefined8 * __rustcall uu_tail::chunks::LinesChunk::fill(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long local_30;
  long local_28;
  undefined8 uStack_20;
  
  BytesChunk::fill(&local_30);
  if (local_30 == 0) {
    if (local_28 == 0) {
      *(undefined8 *)(param_2 + 0x2008) = 0;
      param_1[1] = 0;
    }
    else {
      uVar1 = count_lines(param_2);
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