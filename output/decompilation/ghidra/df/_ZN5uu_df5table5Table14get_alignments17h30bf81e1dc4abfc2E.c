void _ZN5uu_df5table5Table14get_alignments17h30bf81e1dc4abfc2E
               (undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
  for (lVar1 = 0; param_3 != lVar1; lVar1 = lVar1 + 1) {
                    /* try { // try from 0016cc06 to 0016cc0d has its CatchHandler @ 0016cc2f */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5276f4d6a06e1d30E
              (&local_48,(0x3deU >> (*(byte *)(param_2 + lVar1) & 0x1f) & 1) != 0);
  }
  param_1[2] = local_38;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  return;
}