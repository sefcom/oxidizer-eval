void _ZN5uu_df5table5Table14get_alignments17hd7c942e203dd63edE
               (undefined8 *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
  local_28 = param_3 + param_2;
  local_30 = param_2;
  while( true ) {
    pbVar1 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd80283963ca975b5E
                               (&local_30);
    if (pbVar1 == (byte *)0x0) break;
                    /* try { // try from 001cbb89 to 001cbb90 has its CatchHandler @ 001cbbae */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd36bc5d027d87a0eE
              (&local_48,(0x3deU >> (*pbVar1 & 0x1f) & 1) != 0);
  }
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  return;
}