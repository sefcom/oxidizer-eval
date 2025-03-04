void _ZN5uu_wc7WcError14files_disabled17hc164bba3bbd06973E(undefined8 *param_1)

{
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E(&local_40);
  if (local_40 == -0x8000000000000000) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8d59d4d5d5f04802E
              (&local_28,uStack_38,local_30);
  }
  else {
    local_18 = local_30;
    local_28 = local_40;
    uStack_20 = uStack_38;
  }
  param_1[3] = local_18;
  param_1[1] = local_28;
  param_1[2] = uStack_20;
  *param_1 = 0x8000000000000001;
  return;
}