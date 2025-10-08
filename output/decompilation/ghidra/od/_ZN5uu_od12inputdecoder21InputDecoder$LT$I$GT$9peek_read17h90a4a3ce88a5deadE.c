void _ZN5uu_od12inputdecoder21InputDecoder_LT_I_GT_9peek_read17h90a4a3ce88a5deadE
               (long *param_1,long param_2)

{
  undefined uVar1;
  int local_28 [2];
  long local_20;
  long local_18;
  
  _ZN86__LT_uu_od__peekreader__PeekReader_LT_R_GT__u20_as_u20_uu_od__peekreader__PeekRead_GT_9peek_read17hd9dceb6fabd706b9E
            (local_28,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
             *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20));
  if (local_28[0] == 1) {
    uVar1 = 3;
  }
  else {
    *(long *)(param_2 + 0x28) = local_20;
    *(long *)(param_2 + 0x30) = local_18;
    uVar1 = *(undefined *)(param_2 + 0x38);
    param_1[1] = local_20;
    param_1[2] = local_18;
    local_20 = param_2;
  }
  *param_1 = local_20;
  *(undefined *)(param_1 + 3) = uVar1;
  return;
}