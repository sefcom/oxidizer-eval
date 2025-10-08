void _ZN9uu_numfmt6format12transform_to17he005deddceb3df89E
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_a0;
  undefined uStack_9f;
  undefined4 uStack_9e;
  undefined2 uStack_9a;
  
  _ZN9uu_numfmt6format15consider_suffix17h8fe5d35b3319f348E(&local_b0,param_3,param_4,param_5);
  *(undefined2 *)((long)param_1 + 0x1e) = uStack_9a;
  *(undefined4 *)((long)param_1 + 0x1a) = uStack_9e;
  param_1[1] = local_b0;
  param_1[2] = local_a8;
  *(undefined *)(param_1 + 3) = local_a0;
  *(undefined *)((long)param_1 + 0x19) = uStack_9f;
  *param_1 = 1;
  return;
}