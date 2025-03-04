long * _ZN5uu_od12inputdecoder21InputDecoder_LT_I_GT_9peek_read17h15c7373ba30f8765E
                 (long *param_1,long param_2)

{
  undefined uVar1;
  long local_28;
  long local_20;
  long local_18;
  
  _ZN86__LT_uu_od__peekreader__PeekReader_LT_R_GT__u20_as_u20_uu_od__peekreader__PeekRead_GT_9peek_read17h4ebaa1be718ea78eE
            (&local_28,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 8),
             *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20));
  if (local_28 == 0) {
    *(long *)(param_2 + 0x28) = local_20;
    *(long *)(param_2 + 0x30) = local_18;
    uVar1 = *(undefined *)(param_2 + 0x38);
    param_1[1] = local_20;
    param_1[2] = local_18;
    local_20 = param_2;
  }
  else {
    uVar1 = 3;
  }
  *param_1 = local_20;
  *(undefined *)(param_1 + 3) = uVar1;
  return param_1;
}